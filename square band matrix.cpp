#include<stdio.h>
#include<stdlib.h>
int SquareBandMatrix(int n,int A[n][n],int k){
	int i ,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(abs(i-j)>k&&A[i][j]!=0){
				return 0;
			}
		}
	}
	return 1;
}
int main(){
	int n,i,j,k;
	printf("Enter the size of the matrix :");
	scanf("%d",&n);
	int A[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&A[i][j]);
		}
	}
	
	printf("Enter the Band Width K :");
	scanf("%d",&k);
	
	if(SquareBandMatrix(n,A,k)){
		printf("It is a Square Band Matrix");
	}
	else{
		printf("It is Not a Square Band Matrix");
	}
	return 0;
	
