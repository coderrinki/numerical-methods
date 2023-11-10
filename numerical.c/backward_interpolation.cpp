//compute the values of f(7.5) using Newton's interpolation from the following table.
// x	:3	4	5	6	7	8
//f(x)	:27	64	125	216	343	512
// Number of points 6	                                                      
#include<stdio.h>
#include<math.h>
int main(){
	float x[15],y[15],X,prod=1,s,h,d;
	int i,j,n;
	printf("\t\tOutput\n");
	printf("Enter the number of points:");
	scanf("%d",&n);
	
	
	printf("Enter the values of X: ");
	scanf("%f",&X);
	printf("Enter values of x and y:\n\n");
	printf("x\t y=f(x)\n");
	for(i=1;i<=n;i++){
		scanf("%f \t %f",&x[i],&y[i]);
	}
	
	h=x[2]-x[1];
	printf("h=%f\n",h);
	s=(X-x[n])/h;
	d=y[n];
	printf("s=%f\n",s);
	for(i=1;i<n;i++){
		for(j=n;j>=i+1;j--){
			y[j]=y[j]-y[j-1];
			printf("\n y=%f\n",y[j]);
		}
		prod=prod*(s+i-1)/i;
		d=d+prod*y[n];
		printf("\n d=%f\n",d);
	}
	printf("The result is: ");
	printf("y(%1.2f)=%3.5f",X,d);
	
}
