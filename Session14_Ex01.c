#include <stdio.h>
#include <string.h>
int main(){
    char chuoi[100];
    printf("nhap chuoi ky tu: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    fputs(chuoi, stdout);
    printf("do dai cua chuoi la %d", strlen(chuoi));
    return 0;
}