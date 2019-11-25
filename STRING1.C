#include<conio.h>
#include<stdio.h>
int isnum(char a){
	if(a>=48 && a<58){
		return a-48;
	}
	return 0;
}
int isparanthesis(char a){
	if(a=='('){
		return 1;
	}else if(a==')'){
		return 2;
	}
	return 0;
}
int isalpha(char a){
	if(a>=97&&a<=122 || a>=65&&a<=90){
		return 1;
	}
	return 0;
}
void main(){
	int i,j,len=0,num=0,flag=0,pointer=0;
	char str[100],finalstring[100]="",temp[100];
	clrscr();
	printf("Enter a string: ");
	scanf("%s",str);
	len = strlen(str);
	for(i=0;i<len;i++){
		if(isnum(str[i])){
			num = isnum(str[i]);
		}
		if(flag==1 && isalpha(str[i])){
			temp[pointer++]=str[i];
		}
		if(isparanthesis(str[i])==1){
			flag = 1;
		}else if(isparanthesis(str[i])==2){
			flag = 0;
			temp[pointer++] ='\0';
			pointer =0;
			for(j=0;j<num;j++){
				strcat(finalstring,temp);
			}
		}
	}
	printf("%s",finalstring);
	getch();
}