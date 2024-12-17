#include<stdio.h>
#include<string.h>

	int main(){
		
		char matkhaudung [20] = "thanhdeptrai";
		char matkhaunhap [20];
		
		printf("Nhap Mat Khau Cua Ban: ");
		scanf("%19s",matkhaunhap);
		
		if(strcmp( matkhaudung, matkhaunhap) == 0 ){
			printf("Mat Khau Dung!\n");
		}
		else{		
		printf("Mat Khau Sai!\n");
	}
	return 0;
	}
