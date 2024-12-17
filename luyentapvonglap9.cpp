#include<stdio.h>

	int main(){
		int so1,so2,so3,sum,num;
		
		printf("Chuong trinh in ra cacs so Armstrong có 3 chu so: \n");
		for ( num =100;num< 1000;num++){
			so1=num/100;
			so2=(num/10)%10;
			so3=num%10;
			
			sum= (so1*so1*so1)+(so2*so2*so2)+(so3*so3*so3);
			
			if(num == sum ){
				printf("%d\n",num);
			}	
		}
	
	return 0;
		
	}
