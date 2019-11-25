#include<stdio.h>
#include<conio.h>
#include<string.h>
int isset(char c){
	if(c=='1'){
		return 1;
	}
	return 0;
}
int count(char str[],int m,int k){
	int len = strlen(str),i,j,count_1,count=0;
	for(i=0;i<len-m+1;i++){
		count_1=0;
		for(j=0;j<m;j++){
			count_1+=isset(str[i+j]);
			printf("%d",count_1);
		}
		if(count_1>=k){
			count++;
		}

	}
	return count;
}
void main(){
	char bitstring[100];
	int m,k,n,i;
	clrscr();
	printf("Enter the length of the string: ");
	scanf("%d",&n);
	scanf("%s",bitstring);
	bitstring[n] ='\0';
	printf("%s\n",bitstring);
	fflush(stdin);
	printf("Enter the length of substring: ");
	scanf("%d",&m);
	printf("Enter the no. of set bit");
	scanf("%d",&k);
	printf("The no. of susbstring is %d.",count(bitstring,m,k));
	getch();
}