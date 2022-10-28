#include<stdio.h>
#include<math.h> 
	int tong (int a, int b, int c){
		int p= a+b+c ;
		return p; 
	}
int dientich (int a,int b,int c){
		float s=(1/4)*sqrt((a+b+c)*(a+b-c)*(a+c-b)*(b+c-a));
		return s; 
}	
int tongcacchucso(int n,int sd,int x ){
	while(sd=n%10);
	x+=sd; 
	return x;  
}
int ucln(int a, int b){
	int i=a-1;
	while(a%i==0&&b%i==0) 
	return i; 
}
int bcnn(int a,int b){
	int i=a+1;
	while(a%i==0&&b%i==0)
	return i; 
}
int sochinhphuong(int n){
	int i=1;
	n%i==0;
	n/i==i;
	i++;
	return i; 
} 
 int songuyenn(int n,int s){
 	 s=0;
	n=0;
	while(s<10000){
		s=s+n;
		n++;
		return s; 
	} 
 } 
 
