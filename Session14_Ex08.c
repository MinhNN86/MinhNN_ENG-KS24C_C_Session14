#include <stdio.h>
#include <string.h>

int main(){
    char chuoi[1000];
    printf("hay nhap chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    for(int i = 0; i < strlen(chuoi) - 1; i++){
        if((i == 0) || chuoi[i - 1] == ' '){
            if (chuoi[i] >= 'a' && chuoi[i] <= 'z') {
                chuoi[i] = chuoi[i] - ('a' - 'A');  
            }
        }
    }
    printf("%s", chuoi);
    return 0;
}