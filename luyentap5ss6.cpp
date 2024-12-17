#include<stdio.h>

	int main(){
		int thang,nam;
		
		printf("Nhap thang cua ban: ");
		scanf("%d",&thang);
		printf("Nhap nam cua ban: ");
		scanf("%d",&nam);
		
		
		if(thang==1 || thang==3 || thang==5 || thang==7 || thang==8 || thang==10 || thang==12){
			printf("Thang %d co 31 ngay\n",thang);
			}
		
		if (thang==4||thang==6|| thang==9||thang==11){
			printf("Thang %d co 30 ngay\n",thang);
			}
		if (thang == 2){
			if((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)){
				printf("Thang %d co 29 ngay\n",thang);
			}
			else{
				printf("Thang %d co 28 ngay\n",thang);
			}	
		}
		
		if((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)){
			printf("Nam %d la Nam Nhuan Co 366 ngay\n",nam);
		}
		else{
			printf("Nam %d khong phai la nam nhuan nen co 365 ngay\n",nam);
		}				
			return 0;
		}
