#include<stdio.h>
#include<conio.h>
void removes(int books[],int book_index, int *count_book){
	int i;
	for(i=book_index;i<*count_book;i++){
		books[i]=books[i+1];
	}
	*count_book = *count_book-1;
}
void main(){
	int i, books[50],n,lend_number,lend_book[50];
	clrscr();
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&books[i]);
	}
	scanf("%d",&lend_number);
	for(i=0;i<lend_number;i++){
		scanf("%d",&lend_book[i]);
	}
	printf("The lended books are: ");
	for(i=0;i<lend_number;i++){
		printf("\n%d",books[lend_book[i]-1]);
		removes(books,lend_book[i]-1,&n);
	}
	getch();
}