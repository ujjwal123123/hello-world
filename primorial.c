#include<stdio.h>

int primorial(int n, int a)
{
	if(n==0)
	 return 1;

	while(!prime(a,a-1))
	{a++;}

	n--;
	return a*primorial(n,a);
}

int prime(int n,int i)
{
	if(n==1)
	return 1;
	if(n%i==0)
	return 0;
	i--;
	return prime(n,i);
}

int main()
{
	int n,p;

	printf("Enter an integer : ");
	scanf("%d",&n);

	p=primorial(n,2);

	printf("Primorial of %d = %d\n",n,p);
	
	return 0;
}
