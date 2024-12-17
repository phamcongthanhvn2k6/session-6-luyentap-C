#include<stdio.h>

	int main(){
		
		int a,b,c,d,e,tong;
		
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
			tong+=a;
		}
		if(b % 2 ==1){
			tong+=b;
		}
		if(c % 2 ==1){
			tong+=c;
		}
		if(d % 2 ==1){
			tong+=d;
		}
		if(e % 2 ==1){
			tong+=e;
		}
		
		printf("Tong cua cac so le la: %d",tong);
		
		return 0;
	}
