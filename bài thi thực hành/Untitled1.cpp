#include<stdio.h>
int main(){
	int a[11];
	printf("inter 10 intergers \n");
	for(int i=1;i<=10;i++){
		printf("a[%i]:",i);
		scanf("%i",&a[i]); 
	} 
	printf("display in the reversed oder \n");
	for(int i=10;i>=1;i--){ 
	 printf("%i \n",i);			
	}
} 
