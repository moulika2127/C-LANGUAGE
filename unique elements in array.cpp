#include<stdio.h>
int main(){
	int i,n,c,j;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements into A : ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		c=0;
		for(j=0;j<n;j++){
			if(i==j)
			continue;
			if(a[i]==a[j])
			c++;
		}
		if(c==0){
			printf("%d\t",a[i]);
		}
	}
	return 0;
}

