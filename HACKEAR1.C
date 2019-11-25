#include<stdio.h>
#include<conio.h>
void main(){
	unsigned int n,k,i,num[100],temp=0;
	clrscr();
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("Enter %d numbers: ",n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
		temp=temp^num[i];
	}
	k = ~temp;
	printf("The value of k is %u",k);

	printf("\nThe max number is %u",k^temp);
	getch();
}