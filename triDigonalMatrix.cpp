#include<stdio.h>
#include<stdlib.h>
int main(){
	int r,c,i,j,count=0;
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
			if(i == j && i == j + 1 && i == j - 1 && a[i][j] != 0){
				count++;
			}
		}
	}
	if(count!=0){
		printf("Is is a tri-digonal matrix !");
	}
	else{
		printf("It is a non tri-digonal matrix !");
	}
	}
	else{
		printf("It is not a square matrix !");
	}
	return 0;
}
