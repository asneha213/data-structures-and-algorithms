#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
	int   a=0,n=0,i,j,l=0;
	char	*d[1000000],*p;
	
	scanf("%d\n",&a);
	n=a;
	//accepting input and storing it into an array of pointers
	for(i=0;a!=0;i++){
		d[i]=malloc(10000000*sizeof(char));
		gets(d[i]);
		a--;
	}
	a=n;
	for(i=0;a!=0;i++, a--) {
		p=malloc(10000000*sizeof(char));
		strcpy(p,d[i]);
		
		l=strlen(d[i]);
		//for even digit nos
		if(!(l%2)) {
		    //create a palindrome out of the first half digits: abcd becomes abba
				for(j=0;j<l/2;j++){
					*(p+j+l/2)=*(p+l/2-1-j);
				}
            //compare the palindrome with the given no. If the palindrome is greater then that is the required output
			if (strcmp(p,d[i])==1){
				puts(p);
				
				continue;
			}
			else {
				for(j=0;j<l/2;j++){
				    //else if increment the middle two digits by 1
					if(*(p+l/2-1-j)!='9'){
						*(p+j+l/2)+=1;
						*(p-j+l/2-1)+=1;
						break;
					}
					else{
					   // incase the middle digits are 9, then make them 0 and then increment the other digits like a(b+1)00(b+1)a 
						if(j!=l/2-1){
						*(p+j+l/2)=*(p+j+l/2)-9;
						*(p-j+l/2-1)=*(p-j+l/2-1)-9;
						}
						else{
						 // this covers the case of all 9's like in 9999
						*p='1';
						*(p+l)='1';
						for(j=1;j<l;j++)
							*(p+j)='0';
						
					}
					}
				}
				puts(p);
			
				continue;	
			}
		}
	else{
	    
	    // similar thing repeated for odd digits
		for(j=0;j<l/2;j++){
					*(p+l/2+1+j)=*(p+l/2-1-j);
				}
		
			
			if (strcmp(p,d[i])==1){
				puts(p);

			
				continue;
			}
			else {
			    //special case for '9'
				if((l==1) && (*p=='9')){
					*p='1';
					*(p+1)='1';
					}
				
				else{
					if(*(p+l/2)!='9')
						*(p+l/2)+=1;
					else {
				
						*(p+l/2)=	*(p+l/2)-9;
						for(j=1;j<=l/2;j++){
							if(*(p+l/2-j)!='9'){
								*(p+l/2-j)+=1;
								*(p+l/2+j)+=1;
								break;
							}
							else{
							
								if(j!=l/2){
								*(p+l/2-j)-=9;
								*(p+l/2+j)-=9;
									}
								else{
									*p='1';
							*(p+l)='1';
							for(j=1;j<l;j++)
								*(p+j)='0';
							}
						
						}
					}
				}
				}
					puts(p);
		
				
				continue;
			}
	}
	
	}	
	for(i=0;i<=n;i++)
		free(d[i]);
		return 0;
}

