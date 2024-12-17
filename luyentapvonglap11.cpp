#include <stdio.h>

int main() {
    int n, count = 0, num = 2;

    
    printf("Nhap vao mot so nguyen duong n: ");
    scanf("%d", &n);

    printf("Cac so nguyen to dau tien la: ");

    
    while (count < n) {
        int isPrime = 1; 

        if (num <= 1) {
            isPrime = 0;
        } else {
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime) {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    printf("\n");
    return 0;
}

