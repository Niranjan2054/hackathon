#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,a[50],n,temp=0;
	clrscr();
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			temp+=a[i]^a[j];
		}
	}
	printf("%d",temp);
	getch();
}