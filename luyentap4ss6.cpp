#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    float delta, x1, x2;

    printf("Giai phuong trinh bac 2: ax^2 + bx + c = 0\n");
    printf("Nhap he so a: ");
    scanf("%d", &a);
    printf("Nhap he so b: ");
    scanf("%d", &b);
    printf("Nhap he so c: ");
    scanf("%d", &c);
    printf("Giai phuong trinh bac 2: %dx^2 + %dx + %d = 0 \n", a, b, c);

    delta = (b * b) - (4 * a * c);

    if (delta == 0) {
        x1 = -b / (2.0 * a);
        printf("Phuong trinh co nghiem kep: %.1f\n", x1);
    } else if (delta < 0) {
        printf("Phuong trinh vo nghiem\n");
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Phuong trinh co hai nghiem phan biet: \n");
        printf("Nghiem thu nhat: %.1f\n", x1);
        printf("Nghiem thu hai: %.1f\n", x2);
    }

    return 0;
}

