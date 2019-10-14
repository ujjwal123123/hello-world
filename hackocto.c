#include<stdio.h>
int main()
{
int i,j,k,n;
printf("Pattern of star\nenter no. of row:");
scanf("%d",&n);
for(i=1;i<=n;i++){
	for(k=1;k<=i;k++){
	printf(" ");
	}

	for(j=1;j<=i;j++){
	printf("*");
	}
	printf("\n");
}
return 0;
}
