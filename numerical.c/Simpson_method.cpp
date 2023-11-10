//Simpson Method

#include<stdio.h>
#include<math.h>
float f(float x){
	float f;
	f=(1/(1+x*x));
	return(f);
}
int main(){
	float a,b,h,simp;
	int i,k,n;
	printf("Value of a,b,n: ");
	scanf("%f,%f,%d",&a,&b,&n);
	h=(b-a)/n;
	simp=f(a)+f(b);
	for(k=1;k<=n-1;k=k+2){
		simp=simp+4*f(a+h*k);
	}
	for(k=2;k<=n-2;k=k+2){
		simp=simp+2*f(a+h*k);
	}
	simp=simp*(h/3);
	printf("\n Result=%f",simp);
	return 0;
}

