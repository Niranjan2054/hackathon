#include<stdio.h>
#include<conio.h>
void main(){
	int a[20],b[20],n,i;
	int leadscore=0,winner;
	clrscr();
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
		if(abs(a[i]-b[i]) > leadscore){
			leadscore = abs(a[i]-b[i]);
			if(a[i]>b[i]){
				winner =1;
			}else if(a[i]<b[i]){
				winner = 2;
			}
		}
	}
	printf("%d %d",winner, leadscore);
	getch();
}
