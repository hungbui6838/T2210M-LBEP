#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	 int i=1;
	 int d=0;
	 int s=0;
	while(i<=n){
		if(n%i==0){
			d++; 
			s=s+i;
		}
		i++; 
	}
	printf(" tong cac uoc la: %d",s); 
} 
