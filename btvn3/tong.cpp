#include<stdio.h>
int tong(int n,int s,int i){
	s=s+i;
	return s;
}
int main(){
	int n;
	scanf("%d",&n);
	int i=0;
	int s=0;
	while(i<=n){
		 s=s +i;
		i++;
	}
	printf("tong la :%d",s);
} 
