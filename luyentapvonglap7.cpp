#include<stdio.h>

	int main(){
		int n,i;
		printf("hay nhap mot so nguyen duong N: ");
		scanf("%d",&n);
		
		if( n<1){
			printf("N khong hop le, vui long nhap lai!");
			return 1;
		}
		else{
		for(i=1;i<=n;i++){
			if(n%i==0){
				printf("%d\n",i);
			}
		}
	}
	
	return 0;
		
	}
