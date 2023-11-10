# include <stdio.h>
# include <math.h>
#define max 20
int main(){
	int n,m,i,j,k;
	float a[max][max],x[max],s;
	printf("Order of the matrix and iteration: ");
	scanf("%d,%d",&n,&m);
	printf("\n Enter the elements of augmented matrix: ");
	for(i=1;i<=n;i++){
	for(j=1;j<=n+1;j++){
		scanf("%f",&a[i][j]);
	}
	printf("\n");
	}
	printf("Enter the initial approximation:\n\n ");
	for(i=1;i<=n;i++){
		scanf("%f",&x[i]);
	}
	for(k=1;k<=m;k++){
		for(i=1;i<=n;i++){
			s=a[i][n+1];
			for(j=1;j<=n;j++){
				if(j!=i){
				
				s=s-a[i][j]*x[j];
			}
			}
		x[i]=s/a[i][i];
		printf("x[%d]=%3.2f\t",i,x[i]);
				}
				printf("\n");
	}
	printf("\n\n the solution is: \n");
	for(i=1;i<=n;i++)
	printf("\n x[%d]=%6.4f\n",i,x[i]);
	return 0;
	}

