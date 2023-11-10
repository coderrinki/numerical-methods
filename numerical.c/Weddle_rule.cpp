#include<stdio.h>
#include<math.h>
float f(float x){
	float f;
	f=(1/(1+2*x));
	return f;
}
main(){
	float a,b,h,y[20],s1=0,s2=0,s3=0,s4=0,x,s;
	int i,n;
	printf("value of a,b,n: ");
	scanf("%f,%f,%d",&a,&b,&n);
	h=(b-a)/n;
	x=a;
	for(i=0;i<=n;i++){
		y[i]=f(x);
		x=x+h;
	}
	for(i=0;i<=n-6;i=i+6){
		s1=s1+y[i+2]+y[i+4];
		s2=s2+y[i+1]+y[i+5];
		s3=s3+y[i+3];
		if(i>n-12){
			s4=s4+y[i+6];
		}
		s=(3*h/10)*(y[0]+y[n]+s1+5*s2+6*s3+2*s4);
	}
	printf("\n\t The Result is: %6.6f",s);
	return 0;
}
