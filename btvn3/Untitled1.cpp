#include<stdio.h>
int sodaonguoc(int n ){
	int x=n%10;
	return x ;
	
} int main(){
	int n;
	scanf("%d",&n);
	int x=0;
	while(n!=0){
		int sd = n %10;
		x=x*10+sd;
		n=n/10; 
	}
	printf(" so dao nguoc la : %d",x ); 
}
 
