#include <stdio.h>

int main(){
	int n,v,e,w,s,d,k,min,m=0,i,j,a,b;
	
	
	scanf("%d",&n);
	//loop for test cases
	while(n!=0){
	
		scanf("%d %d",&v,&e);
		n--;
		int graph[v+1][v+1];
	int list[v+1];
	 int visit[v+1];
	int out[v+1];
		for(i=0;i<v+1;i++)
			for(j=0;j<v+1;j++){
				if(i==j)
					graph[i][j]=0;
				else
					graph[i][j]=10000;
		}
		for(i=0;i<v+1;i++)
			out[i]=0;
		while(e>0){
			
			scanf("%d %d %d",&a,&b,&w);
			graph[a][b]=w;
			
			e--;
		}
		scanf("%d %d",&s,&d);
		for(i=1;i<v+1;i++){
			list[i]= 10000;
			visit[i]=0;
		}
		list[s]=0;
		
	for (k=0;k<v-1;k++){
			min=10000;
			for(i=1;i<v+1;i++){
						
				if(!visit[i] && list[i]<min){
					min=list[i];
					m=i;
				}
			}
			visit[i]=1;
			//printf("\nmin=%d %d\n",m,min);
			
			//for(i=1;i<v+1;i++)
				//printf("%d\n",list[i]);
			
			for(i=1;i<v+1;i++){
				
				
				
				if(!visit[i] && graph[m][i] && list[m]!=10000 && list[m]+graph[m][i]<list[i]){
					list[i]=list[m]+graph[m][i];
					
				}
					
			}
			visit[m]=1;
			list[m]=10000;
			out[m]=min;
			//printf("interation\n");
			//for(i=1;i<v+1;i++)
				//printf("%d ...%d out=%d\n",i,list[i],out[i]);
		}
		//printf("k=%d\n",k);
		if(k==v-1){
		for(i=1;i<v+1 ;i++)
			if(list[i]!=10000)
			out[i]=list[i];
		}
	 if (out[d]!=0)
		printf("%d\n",out[d]);
		else
		
			printf("NO\n");
		
	}
	return 0;
}
			
			
					
			
			
	
		
	

 
