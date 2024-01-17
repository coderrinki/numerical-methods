#include<stdio.h>
#include<math.h>
float f(float x,float y)
{
    return(x-y);
}
int main(){
    int n,i;
    float x0,y0,x,y,h;
    printf("\n Enter x0,y0,h,x\n");
    scanf("%f%f%f%f",&x0,&y0,&h,&x);
    n=(x-x0)/h;
    x=x0;
    y=y0;
    for(i=0;i<=n;i++){
        y=y+h*f(x,y);
        x=x+h;
    }
    printf("\n The required values is %f \n",y);
    return 0;
}
