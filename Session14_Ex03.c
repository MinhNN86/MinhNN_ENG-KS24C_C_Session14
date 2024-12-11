#include <stdio.h>
#include <string.h>
int main(){
    char chuoi[100];
    int doDaiChuoi;
    printf("nhap chuoi ky tu: ");
    fgets(chuoi, sizeof(chuoi), stdin);  
    doDaiChuoi = strlen(chuoi);
    for(int i = doDaiChuoi - 2; i >= 0; i--){
        printf("%c ", chuoi[i]);
    }
    return 0;
}