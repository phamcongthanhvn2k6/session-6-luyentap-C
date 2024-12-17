#include<stdio.h>

	int main(){
		
		int a,b,c,d,e;
		int chan=0;
		int le=0;
		
		printf("Hay Nhap Vao 5 So Nguyen: \n");
		printf("\n Hay Nhap So Thu Nhat: ");
		scanf("%d",&a);
		printf("\n Hay Nhap So Thu Hai: ");
		scanf("%d",&b);
		printf("\n Hay Nhap So Thu Ba: ");
		scanf("%d",&c);
		printf("\n Hay Nhap So Thu Tu: ");
		scanf("%d",&d);
		printf("\n Hay Nhap So Thu Nam: ");
		scanf("%d",&e);
		
		if(a % 2 ==1){
			le++;
		}
		else {
			chan++;
		}
		
		if(b % 2 ==1){
			le++;
		}
		else {
			chan++;
		}
		
		if(c % 2 ==1){
			le++;
		}
		else {
			chan++;
		}
		
		if(d % 2 ==1){
			le++;
		}
		else {
			chan++;
		}
		
		if(e % 2 ==1){
			le++;
		}
		else {
			chan++;
		}
		
		printf("so luong cac so le la: %d\n",le);
		printf("so luong cac so chan la: %d\n",chan);
		
		return 0;
	}
