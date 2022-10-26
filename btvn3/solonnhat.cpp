#include<stdio.h>
int solonnhat(int a,int b, int c){
	int (a>b);
	int (a>c);
	return a; 
} 
int main(){
	int a;
	int b;
	int c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a>b){
		if(a>c){
			printf("so lon nhat là :%d",a); 
		}else{
			printf("so lon nhat l: %d",c); 
		} 
	}else{
		if(b>c){
			printf("so lon nhat la: %d",b); 
		}else{
			printf("so lon nhat la: %d",c); 
		} 
	} 
} 
