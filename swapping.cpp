#include<stdio.h>
int main(){
	int a=2,b=3;
	printf("enter two no separeated by space : ");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("no before swapping are: A=%d and B=%d \n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("no after swapping are: A=%d and B=%d",a,b);
	return 0;
}
