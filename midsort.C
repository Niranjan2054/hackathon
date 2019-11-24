#include<stdio.h>
#include<conio.h>
#include<string.h>
void midsort(char str[]){
	int len = strlen(str);
	int i,j,temp;
	for(i=1;i<len-2;i++){
		for(j=1;j<len-i-1;j++){
			if(str[j]>str[j+1]){
				temp = str[j];
				str[j] = str[j+1];
				str[j+1]=temp;
			}
		}
	}
}
int instring(char str[], char c){
	int i,len = strlen(str);
	for(i=0;i<len;i++){
		if(str[i]==c){
			return 1;
		}
	}
	return 0;
}
void main(){
	char str[50],c;
	clrscr();
	printf("Enter a word: ");
	scanf("%s",&str);
	fflush(stdin);
	printf("Enter a character: ");
	scanf("%c",&c);
	if(instring(str,c)){
		midsort(str);
		printf("%s", str);
	}else{
		printf("%s",str);
	}
	getch();
}
