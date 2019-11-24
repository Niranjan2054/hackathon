#include<stdio.h>
#include<conio.h>
#define MAX 100
int is_in(int a[],int b){
	int i;
	for(i=0;i<MAX;i++){
		if(a[i]==b){
			return 1;
		}
	}
	return 0;
}
void sort(int a[],int count){
	int i,j,temp;
	for(i=0;i<count-1;i++){
		for(j=0;j<count-1-i;j++){
			if(a[j]>a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}
void main(){
	int a[MAX],b[MAX],c[MAX],i,j,m,n,p,voter[MAX],count=0;
	clrscr();
	scanf("%d%d%d",&m,&n,&p);
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<p;i++){
		scanf("%d",&c[i]);
	}
	for(i=0;i<m;i++){
		if(is_in(b,a[i])){
			if(!is_in(voter,a[i])){
				voter[count++] = a[i];
			}
		}else if(is_in(c,a[i])){
			if(!is_in(voter,a[i])){
				voter[count++] = a[i];
			}
		}
	}

	for(i=0;i<n;i++){
		if(is_in(c,b[i])){
			if(!is_in(voter,b[i])){
				voter[count++] = b[i];
			}
		}
	}
	sort(voter,count);
	printf("\n%d\n",count);
	for(i=0;i<count;i++){
		printf("%d\n",voter[i]);
	}
	getch();
}