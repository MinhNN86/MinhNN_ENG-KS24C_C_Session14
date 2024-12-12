#include <stdio.h>

int main() {
    char chuoi[100];
    int doDaiChuoi, dem = 0;
    printf("Hay nhap chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    doDaiChuoi = strlen(chuoi);
    printf("Cac ky tu chu cai trong chuoi la: ");
    for (int i = 0; i < doDaiChuoi; i++) {
        if ((chuoi[i] >= 'a' && chuoi[i] <= 'z') || (chuoi[i] >= 'A' && chuoi[i] <= 'Z')) {
            printf("%c", chuoi[i]);
            dem++;
        }
    }
    if (dem > 0) {
        printf("\nSo ky tu chu cai co trong chuoi la %d", dem);
    } else {
        printf("\nKhong co ky tu chu cai trong chuoi");
    }

    return 0;
}