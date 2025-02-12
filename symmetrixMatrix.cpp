#include<stdio.h>
#include<stdlib.h>
int main(){
	int r,c,i,j,x,count=0;
	int **a;
	printf("Enter the rows : ");
	scanf("%d",&r);
	printf("Enter the cols : ");
	scanf("%d",&c);
	if(r==c){
		a=(int**)malloc(r*sizeof(int*));
	for(i=0;i<r;i++)
	{
		a[i]=(int *)malloc(c*sizeof(int));
	}
	printf("Enter the elements into array : ");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(a[i][j]!=a[j][i]){
				count++;
			}	
		}
	}
	if(count==0){
		printf("It is a symmetric matrix !");
	}
	else{
		printf("It is not a symmetric matrix !");
	}
		
	}
	else{
		printf("It is not a square matrix !");
	}
	return 0;
	
	

	
}
