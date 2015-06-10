#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct tree {
	int num;
	struct tree *left;
	struct tree *right;
};
struct tree *insert(struct tree **,int *);
int print_pre(struct tree*);
int print_post(struct tree*);
void freemem(struct tree**);

int main(){

	char input[10000][80];
	int num[10000],n=0,i=0;
	char *num1=NULL;
	struct tree *start,*start1;
	start=NULL;
	for(i=0;gets(input[i])!=NULL;i++)
		n++;
	for(i=0;i<=n;i++){	
		strtok_r(input[i]," ",&num1);
		num[i]=atoi(num1);
		//printf("%s %d\n",input[i],num[i]);
		if (strcmp(input[i],"insert")==0){
		
			if (start==NULL)
			{
				start=(struct tree *) malloc(sizeof(struct tree));
				start->num= num[i];
				start->left=NULL;
				start->right=NULL;
			}
			else
			{
				insert(&start,&num[i]);
				
			}
		
		}	
		else if (strcmp(input[i],"print_pre")==0) 
			print_pre(start);
		else if (strcmp(input[i],"print_post")==0) 
			print_post(start);
	
	}
	
	//freemem(&start);
	return 0;
	
}
struct tree *insert(struct tree **p,int *n) 
{	
	
	
	if (*p==NULL) {
		(*p) =malloc(sizeof(struct tree));
		(*p)->num = *n;
		(*p)->left=NULL;
		(*p)->right=NULL;
	
		
	}
	
	 
		else if (*n > (*p)->num)
			insert(&((*p)->right),n);
		else if(*n < (*p)->num)
				insert(&((*p)->left),n);
		else
			return *p;
	return *p;
}

int print_pre (struct tree *p)
{
	if (p==NULL)
		return 0;
	else {
		printf("%d \n",p->num);
		print_pre(((p)->left));
		print_pre(((p)->right));
	}
}
void freemem(struct tree **p)
{
	struct tree **temp1, **temp2;
	if (*p==NULL) 
		return;
	else {
		*temp1=(*p)->left;
		*temp2=(*p)->right;
		free(*p);
		freemem(&((*p)->left));
		freemem(&((*p)->right));
	}
}
int print_post (struct tree *p)
{
	if (p==NULL)
		return 0;
	else {
		
		print_post(((p)->left));
		print_post(((p)->right));
		printf("%d \n",(p)->num);
	}
}
	

