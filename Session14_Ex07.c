#include <stdio.h>
#include <string.h>

int main(){
    char chuoi[1000];
    int demChuCai = 0;
    int demChuSo = 0;
    int demKyTuDacBiet = 0;
    printf("Nhap chuoi bat ky: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    for(int i = 0; i < strlen(chuoi) - 1; i++){
        if((chuoi[i] >= 'a' && chuoi[i] <= 'z') || (chuoi[i] >= 'A' && chuoi[i] <= 'Z')){
            demChuCai++;
        } else if (chuoi[i] >= '0' && chuoi[i] <= '9'){
            demChuSo++;
        } else {
            demKyTuDacBiet++;
        }
    }
    printf("So ky tu la chu cai: %d\n", demChuCai);
    printf("So ly tu la chu so: %d\n", demChuSo);
    printf("So ky tu dac biet: %d", demKyTuDacBiet);

    return 0;
}