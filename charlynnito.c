#include<stdio.h>
#include<stdlib.h>
struct street{
	long int junction;
	int time;
	struct street* adj;
};
struct dist {
	long int time;
	int visit;
};

struct dist *dijkstra (struct street ** graph,int j,long int s)
{
		
	int b,c,n,t;
	long int a,f,i,min,l,k,q;
	struct dist* list;
	struct street *temp;
	list = malloc(j*sizeof(struct dist));
		for(i=0;i<j;i++){
			list[i].time= 50000000;
			list[i].visit=0;
		}
		list[s-1].time = 0;
		
	
		for(k=0;k<j;k++) {
			min=50000000;
			for(i=0;i<j;i++)	{
				if(!list[i].visit && list[i].time < min){
					min=list[i].time;
					l=i;
				}
			}
			list[l].visit=1;
			
			
			
			temp=graph[l];
			
			
			while(temp!=NULL) {
				
				
				q=temp->junction;
				//printf("time = %d %d\n",list[l].time +temp->time,list[i].time);
				if( !list[q].visit && list[l].time +temp->time < list[q].time) 
						list[q].time = list[l].time + temp->time;
				temp=temp->adj;
			}
			
		}
	return list;

}

int main() 
{
	int j,b,c,n,t;
	long int s,a,f,i,min,l,k,q;

	while(1) 
	{
		
		scanf("%d %d %d %d %ld",&j,&b,&c,&n,&s);
		//printf("%d %d %d %d %ld\n",j,b,c,n,s);
	
		if(j == -1 || b == -1)
			break;
		struct street **graph,*p,*temp;
		struct dist *list,*charly,*bar,*nito;
		
		graph = malloc(j*sizeof(struct street*));
		for(i=0;i<j;i++)
			graph[i]=NULL;
		
		
		while(s>0)
		{
			s--;
			scanf("%ld %ld %d",&a,&f,&t);
			
			p=malloc(sizeof(struct street));
			p->junction = f-1;
			p->time = t;
			p->adj = graph[a-1];
			graph[a-1] = p;
			p=malloc(sizeof(struct street));
			p->junction = a-1;
			p->time = t;
			p->adj = graph[f-1];
			graph[f-1]= p;
		}
		
		bar = dijkstra(graph,j,b);
		charly = dijkstra(graph,j,c);
		nito = dijkstra(graph,j,n);
		//for (i=0; i<j; i++)
			//printf("%ld\n",charly[i].time);

		long int tib=0,jc,jcn,jcb;
		long int cb= bar[c-1].time ;
		long int nb = bar[n-1].time;
		int ti,test;

		temp = graph[0]->adj;
		
		for (i=0; i<j; i++) {
			
			while (temp!=NULL) {
				jc=temp->junction;
				ti=temp->time;
				test=0;
			
				if( charly[jc].time+ bar[i].time + ti == bar[c-1].time && nito[jc].time+bar[i].time +ti == bar[n-1].time && bar[i].time+ti>tib ){
					
					tib = bar[i].time+ti;
					cb = charly[jc].time;
					nb = nito[jc].time;
					test=1;
				}
				temp = temp->adj;
				
			}
			//if (test==1)
				temp=graph[i+1];
			//else
				//break;
		}
			
		printf("%ld %ld %ld\n",tib,cb,nb);
		
			
				
			
		
		
	}
	return 0;
}


			
			
	
	
		
		
		
		
		
		
