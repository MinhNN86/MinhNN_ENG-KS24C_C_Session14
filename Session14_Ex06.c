#include <stdio.h>
#include <string.h>

int main(){
    char string[]= "1234567890 ";
    char chuoi[100];
    int doDaiChuoi;
    int dem = 0;
    printf("hay nhap chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    doDaiChuoi = strlen(chuoi);
    printf("cac ky tu chu cai trong chuoi la: ");
    for(int i = 0; i < doDaiChuoi; i++){
        int laSo = 0;
        for(int j = 0; j < strlen(string) - 1; j++){
            if(chuoi[i] == string[j]){
                laSo = 1;
                break;
            }
        }
        if(!laSo && chuoi[i] != '\n' && chuoi[i] != ' '){
            printf("%c", chuoi[i]);
            dem++;
        }
    }
    if(dem > 0){
        printf("\nso ky tu chu cai co trong chuoi la %d", dem);
    } else {
        printf("\nkhong co ky tu chu cai trong chuoi");
    }
    return 0;
}