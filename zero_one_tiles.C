#include<stdio.h>
#include<conio.h>
int fibo(int n){
	if(n==1){
		return 1;
	}else if(n==2){
		return 2;
	}else{
		return fibo(n-1)+fibo(n-2);
	}
}
void main(){
	int no_of_block;
	clrscr();
	scanf("%d",&no_of_block);
	printf("%d",fibo(no_of_block));
	getch();
}
