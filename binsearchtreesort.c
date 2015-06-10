#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct tree {
	double b;
	char *num;
	int count;
	struct tree *left;
	struct tree *right;
};

struct tree* insert(struct tree **,char **);
int print_pre(struct tree*);
int print_sort(struct tree*);


int main(){
	char input[100000][50];
	char* num[100000]; 
	int n=0,i=0;

	struct tree *start,*start1;
	start=NULL;
	for(i=0;gets(input[i])!=NULL;i++)
		n++;
	for(i=0;i<=n;i++){	
		strtok_r(input[i]," ",&num[i]);
		//printf("%s %s\n",input[i],num[i]);
		if (strcmp(input[i],"insert")==0){
		
			if (start==NULL)
			{
				start=(struct tree *) malloc(sizeof(struct tree));
				start->num= num[i];
				start->b = atof(num[i]);
				start->left=NULL;
				start->right=NULL;
				start->count=1;
			}
			
			else
				start1=insert(&start,&num[i]);
			
		}	
		else if (strcmp(input[i],"print_sort")==0)
				print_sort(start);
	}

	
	return 0;
}
struct tree* insert(struct tree **p,char **n) 
{	
	char* p1,*q1;
	
	if (*p==NULL) {
		(*p) =malloc(sizeof(struct tree));
		(*p)->num = *n;
		(*p)->b=atof(*n);
		(*p)->left=NULL;
		(*p)->right=NULL;
		(*p)->count=1;
		
	}
		
		else if (atof(*n) > (*p)->b)
			insert(&((*p)->right),n);
			
		else if(atof(*n) < (*p)->b)
				insert(&((*p)->left),n);
		else
			(*p)->count=((*p)->count)+1;
	return ;
}

int print_pre (struct tree *p)
{
	if (p==NULL)
		return 0;
	else {
		printf("%s \n",p->num);
		print_pre(((p)->left));
		print_pre(((p)->right));
	}
}

int print_sort (struct tree *p)
{
	int i;
	if (p==NULL)
		return 0;
	
	else {
		
		print_sort(((p)->left));
		for(i=0; i<p->count;i++)
			printf("%s \n",p->num);
		print_sort(((p)->right));
	}
}



	

