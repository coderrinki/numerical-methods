#include<stdio.h>
#include<math.h>
float f(float x, float y){
	float f;
	f=1/(x*x)-(y/x);
	return(f);
}
main(){
	int i,n;
	float x0,y0,xn,h,x,y,x1,y1,e,y11,y12;
	printf("\n Enter x0,y0: ");
	scanf("%f %f",&x0,&y0);
	printf("\n Enter value of xn for which y required: ");
	scanf("%f",&xn);
	printf("Enter step size: ");
	scanf("%f",&h);
	printf("\n enter the correction term e: ");
	scanf("%f",&e);
	y1=y0+h*f(x0,y0);
	x1=x0+h;
	do{
		printf("The value of y=%f at x=%f\n",y0,x0);
		y11=y0+h*(f(x0,y0)+f(x1,y1))/2.0;
		do{
			y1=y11;
			y12=y0+h*(f(x0,y0)+f(x1,y11))/2.0;
		}
		while(fabs(y1-y11)>e);
		x0=x0+h;
		y0=y12;
	}
	while(x0<=xn);
}
