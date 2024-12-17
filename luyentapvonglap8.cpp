#include <stdio.h>
#include <math.h>

int main() {
    double tienBanDau, laiSuat, tienLai, tienNhanDuoc;
    int soThang;

    printf("Nhap so tien gui ngan hang ban dau: ");
    scanf("%lf", &tienBanDau);
    printf("Nhap lai suat thang (%%): ");
    scanf("%lf", &laiSuat);
    printf("Nhap so thang gui: ");
    scanf("%d", &soThang);

    tienNhanDuoc = tienBanDau * pow(1 + laiSuat / 100, soThang);
    tienLai = tienNhanDuoc - tienBanDau;

    printf("Tien ban dau: %.2lf\n", tienBanDau);
    printf("Lai suat: %.2lf%%\n", laiSuat);
    printf("So thang gui: %d\n", soThang);
    printf("Tien lai: %.3lf\n", tienLai);
    printf("Tien nhan duoc: %.3lf\n", tienNhanDuoc);

    return 0;
}

