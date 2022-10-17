#include<stdio.h>
#include<math.h> 
int main(){
	int a;
	int b;
	int c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	if((a+b>c)&&(a+c>b)&&(b+c>a))
	{
		printf("la 3 canh cua tam giac"); 
		int p = a+b+c;
		int s = (sqrt(a+b+c)*(a+b-c)*(a+c-b)*(b+c-a))/4;
	//	printf("%d \n",p);
	//	printf("%d \n",s); 
	//	printf("s=%d va p=%d",s,p);
	printf("p=%d va S=%d",s,p); 
	}
	else{
		printf(" a b c khong la do dai 3 canh tam giac "); 
	}
	
} 
