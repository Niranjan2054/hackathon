#include<stdio.h>
#include<conio.h>
#include<string.h>
//here a is inclusive and b in not inclusive
int ispalindrome(char str[],int a,int b){
	int i;
	for(i=a;i<=b;i++){
		if(str[i]!=str[b-i+a]){
			return 0;
		}
	}
	return b-a+1;
}
void splitstring(char str[]){
	int len = strlen(str);
	int i,j;
	int s_len=0,flag;
	int start, end;
	for(i=0;i<len;i++){
		for(j=i;j<len;j++){
			flag = ispalindrome(str,i,j);
			if(s_len < flag){
				s_len = flag;
				start = i;
				end = j;
			}
		}
	}
	printf("%d ",s_len);
	for(i=start;i<=end;i++){
		printf("%c",str[i]);
	}
	printf("\n");
}
void main(){
	int n,i;
	char str[50];
	clrscr();
	printf("Enter the no. of iteration: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter a string: ");
		scanf("%s",str);
		splitstring(str);
	}
	getch();

}