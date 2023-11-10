#include<stdio.h>
#include<math.h>
int main(){
	int n,i,j,k;
	float a[20][20],x=[20],m,s=0.0;
	printf("\n Enter the order of the coefficient matrix: ");
	scanf("%d",&n);
	printf("\n Enter the elements of the argumented matirx: ");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1;j++)
		scanf("%f",&a[i][j]); 
	}
}
