#include <stdio.h>

int uocChungNhoNhat(int a, int b){
    int bienNho;
    while (b != 0){
        bienNho = b;
        b = a % b;
        a = bienNho;
    }
    return a;
}
int main(){
    int a, b, UCLN;
    printf("nhap so a: ");
    scanf("%d", &a);
    printf("nhap so b: ");
    scanf("%d", &b);
    UCLN = uocChungNhoNhat(a, b);
    printf("uoc chung lon nhat so %d va %d la: %d", a, b, UCLN);
    return 0;
}