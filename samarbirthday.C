#include<stdio.h>
#include<conio.h>
int getCountOneBit(unsigned int n){
	int count=0;
	while(n){
		count+= n&1;
		n>>=1;
	}
	return count;
}
void main(){
	int i,n, ar[10];
	clrscr();
	printf("Enter a number for iteration: ");
	scanf("%d",&n);
	printf("Enter %d numbers: ");
	for(i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	printf("OutPut: ");
	for(i=0;i<n;i++){
		printf("%d\n",getCountOneBit(ar[i]));
	}
	getch();
}