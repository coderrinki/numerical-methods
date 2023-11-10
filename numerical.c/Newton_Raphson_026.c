#include<stdio.h>
#include<math.h>
float f(float x)
{
	return(pow(x,3)-x-1);
}
float df(float x)
{
	return(3*x*x-1);
}
int main()
{
	float a,b,c,e;
	int k=0;
	printf("\n Enter accuracy:  ");
	scanf("%f",&e);
	do
	{
		printf("\n Enter Interval a,b: ");
		scanf("%f,%f",&a,&b);
		
	}
	while(f(a)*f(b)>0.0);
	c=(a+b)/2;
	do
	{
		c=c-(f(c)/df(c));
		printf("\n k=%d \t x0=%f \t x1=%f \t x2=%f \t f(x)=%f",k,a,b,c,f(c));
//		if(f(c)*f(c)<0.0)
//		{
//			b=c;
//		}
//		else{
//			a=c;
		k=k+1;
	}
	while(fabs(f(c))>=e);
	printf("\n\n Root of the equation is %f",c);
	printf("\n\n No of Iteration %d",k);
}
