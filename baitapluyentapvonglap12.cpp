#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, bientam;

    printf("Nhap vào so luong so Fibonacci can in: ");
    scanf("%d", &n);

    printf("Day so Fibonacci: ");

    for (int i = 1; i <= n; ++i) {
        printf("%d\n ", t1);
        bientam = t1 + t2;
        t1 = t2;
        t2 = bientam;
    }
    
    printf("\n");
    return 0;
}
