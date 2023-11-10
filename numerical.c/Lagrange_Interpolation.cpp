#include<stdio.h>
#include<math.h>
int main(){
	float x[15],y[15],X,prod,sum=0.0;
	int i,j,n;
	printf("\t\t Output\n");
	printf("enter the number of points: ");
	scanf("%d",&n);
	printf("Enter the value of X in which Y required: ");
	scanf("%f",&X);
	printf("Enter the values of x and y\n");
	printf("\n x\ty=f(x)\n");
	for(i=1;i<=n;i++){
		scanf("%f\t%f",&x[i],&y[i]);
	}
	for(i=1;i<=n;i++){
		prod=y[i];
		for(j=1;j<=n;j++){
			if(j!=i){
				prod=prod*(X-x[j])/(x[i]-x[j]);
			}
		}
		sum=sum+prod;
	}
	printf("\n At x=%f,\n\n y=%f",X,sum);
}
