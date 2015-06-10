#include<stdio.h>
#include<stdlib.h>
struct highway{
   int city;
   int time;
   struct highway* adj;
};
struct dist {
   long int time;
   int visit;
};
struct highway graph[1000000];
struct dist list[1000000];
int main()
{
   int cases,n,m,s,d,a,b,i,min,l,k;
   int t;
   int o=0;
   scanf("%d",&cases);
   while(cases!=0)
   {
       cases--;
       scanf("%d %d %d %d",&n,&m,&s,&d);
       struct highway *p,*temp;
       for(i=0;i<n;i++)
       {
           graph[i].adj=NULL;
           list[i].time= 10000000;
           list[i].visit=0;
       }
       
       
       while(m!=0)
       {
           m--;
           scanf("%d %d %d",&a,&b,&t);
           p=malloc(sizeof(struct highway));
           p->city = b;
           p->time = t;
           p->adj = graph[a-1].adj;
           graph[a-1].adj = p;
           p=malloc(sizeof(struct highway));
           p->city = a;
           p->time = t;
           p->adj = graph[b-1].adj;
           graph[b-1].adj= p;
       }
       
       list[s-1].time = 0;
       list[s-1].visit = 1;
       l = s-1;
       while(list[d-1].visit==0)
       {
           temp=graph[l].adj;
           
           
           while(temp!=NULL)
           {
               i=temp->city;
               if( (list[i-1].visit==0) && ((list[l].time + temp->time) < (list[i-1].time)))
                       list[i-1].time = (list[l].time + temp->time);
               temp=temp->adj;
           }
           
           int r=0;
       
       while(list[r].visit==1)
       {
               r++;
           }
           min = list[r].time;
           l = r;
           for(i=r;i<n;i++)    
           {
               if(list[i].visit == 0)
               {
               if((list[i].time) < list[l].time)
               {
                   min=list[i].time;
                   l=i;
               }
               }
           }
           
           list[l].visit=1;
       }  
if (list[d-1].time<10000000)
printf("%ld\n",list[d-1].time);
else
printf("NONE\n");
       
}
   return 0;
}
