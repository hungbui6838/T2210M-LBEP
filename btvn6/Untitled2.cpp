#include<stdio.h>
#include<string.h>
int main(){
	char s[50];
	printf("nhap chuoi: ");
	scanf("%s",s);
	int n=0;
	int a=0; 
	for(int i=0;i<strlen(s);i++){
		if
		(s[i]==65||s[i]==97||
		s[i]==73||s[i]==105||
		s[i]==69||s[i]==101||
		s[i]==85||s[i]==117||
		s[i]==79||s[i]==111){
		n++;	
		}else{
			a++; 
		}
	} 
	printf(" chuoi %s co so nguyen am la: %d am khac :%d",s,n,a); 
} 
