#include <stdio.h>
#include <math.h>

	int main(){
		int i,n,trangthai;
		printf("Hay Nhap So N muon kiem tra: ");
		scanf("%d",&n);
		
		for( i=2;i<=sqrt(n);i++){
			if(n%i==0){
				trangthai=0;
			}
		}
		if(trangthai){
			printf("so nay la so nguyen to!");
		}
		else{
			printf("so nay khong phai so nguyen to!");
		}
		return 0;
	}
