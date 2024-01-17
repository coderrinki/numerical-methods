#include<stdio.h>
#include<math.h>
float f(float x){
    float f;
    f=1/(1+x*x);
    return(f);
}
int main(){
    float a,b,h,simp;
    int n,k;
    printf("\n The value of a,b,n: ");
    scanf("%f%f%d",&a,&b,&n);
    h=(b-a)/n;
    simp=f(a)+f(b);
    for(k=1;k<n;k=k+3){
        simp=simp+3*f(a+h*k);
    }
    for(k=2;k<n;k=k+3){
        simp=simp+3*f(a+h*k);
    }
    for(k=3;k<n;k=k+3){
        simp=simp+2*f(a+h*k);
    }
    simp=(simp*3*h)/8;
    printf("\n The Result is: %f",simp);
    return 0;
}
