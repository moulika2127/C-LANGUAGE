#include<stdio.h>
#include<math.h>
int main(){
	int n;
	int a,b,sum=0,d=0,r;
	printf("Enter any number : ");
	scanf("%d",&n);
	a=n;
	b=n;
	while(n){
		d++;
		n=n/10;
	}
	while(a){
		r=a%10;
		sum=sum+pow(r,d);
		a=a/10;
	}
	if(b==sum){
		printf("Armstrong number");
	}
	else{
		printf("Not an Armstrong number");
	}
	return 0;
}
