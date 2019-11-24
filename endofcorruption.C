#include<stdio.h>
#include<conio.h>
int not_in(int a[],int b){
	int i;
	for(i=0;i<100;i++){
		if(a[i]==b){
			return 0;
		}
	}
	return 1;
}
void main(){
	int i,j,citizen[100],n,k,corr[100],corrupted_number=0,large;
	clrscr();
	scanf("%d%d",&n,&k);
	for(i=0;i<n+k;i++){
		scanf("%d",&citizen[i]);
	}
	printf("\n");


	for(i=0;i<n+k;i++){
//		printf("%d\n",citizen[i]);
		if(citizen[i]==-1){
			large = 0;
			for(j=0;j<i;j++){
				if(citizen[j]>=citizen[large]){
					if(not_in(corr,citizen[j])){
						large = j;
					}
				}
			}
			printf("\n%d",citizen[large]);
			corr[corrupted_number++] = citizen[large];
		}
	}
	getch();
}