#include<stdio.h>
#include<conio.h>
#define MAX 100
void main(){
	int amount,cost,total_pizza,total_piece,total_piece_consume=0;
	int piece[MAX],i;
	int sara_consume=0, arjun_consume=0;
	clrscr();
	do{
		printf("Enter total money:(<10000)  and total price of each pizza: (<1000)");
		scanf("%d%d",&amount,&cost);
	}while(amount>10000 || cost>1000);
	total_pizza = (int)(amount/cost);
	total_piece = total_pizza * 6;
	printf("Enter number of slice ate in each turn: ");
	printf("The number must be less than 11: ");
	for(i=0;i<MAX && total_piece_consume<total_piece;i++){
		scanf("%d",&piece[i]);
		if(i%2==0){
			arjun_consume+=piece[i];
		}else{
			sara_consume+=piece[i];
		}
		total_piece_consume+=piece[i];
	}
	if(arjun_consume>sara_consume){
		printf("Arjun Wins with score %d",arjun_consume);
	}else(arjun_consume<sara_consume){
		printf("Sara Wins with score %d",sara_consume);
	}else{
		printf("Draw with score: %d of each team",sara_consume);
	}
	getch();
}