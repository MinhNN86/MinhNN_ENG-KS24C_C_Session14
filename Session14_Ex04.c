#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[100];
    int demTu = 0;
    int i = 0;
    printf("Nhap chuoi bat ky: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    while (chuoi[i] != '\0') {
        if ((i == 0 || chuoi[i - 1] == ' ') && chuoi[i] != ' ') {
            demTu++;
        }
        i++;
    }
    printf("So tu trong chuoi la: %d\n", demTu);
    return 0;
}
