#include<stdio.h>
int tong (int n,int s,int i){
	s=s+1.0/i;
	return s;
}
int main(){
	int n;
	scanf("%d",&n);
	float i=1;
	float s=0;
	while(i<=n){
		 s=s + 1.0/i;
		i++;
	}
	printf("tong la :%f",s);
} 
