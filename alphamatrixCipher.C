#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,k,no_of_character,a,b,n;
	char mat[5][5],rogue,iter;
	char str[20];
	int num[20];
	clrscr();
	printf("Enter number of iteration: ");
	scanf("%d",&n);
	for(k=0;k<n;k++){
		fflush(stdin);
		printf("\nEnter a Rogue Text: ");
		scanf("%c",&rogue);
		iter='a';
		for(i=0;i<5;i++){
			for(j=0;j<5;j++){
				if(iter == rogue){
					iter++;
				}
				mat[i][j]=iter;
				printf("%c ",mat[i][j]);
				iter++;
			}
			printf("\n");
		}
		printf("Enter number of character: ");
		scanf("%d",&no_of_character);
		printf("Enter %d no. of two digit number: \n",no_of_character);
		for(i=0;i<no_of_character;i++){
			scanf("%d",&num[i]);
			b = num[i]%10;
			a = num[i]/10;
			str[i]=mat[a-1][b-1];
		}
		str[i]='\0';
		printf("%s",str);
		getch();
	}

}