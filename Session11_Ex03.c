#include <stdio.h>
int tinhGiaiThua(int a){
    int giaiThua = 1;
    for(int i = a; i > 0; i--){
        giaiThua *= i;
    }
    return giaiThua;
}
int main(){
    int a, giaiThua;
    printf("nhap so bat ky de tinh giai thua: ");
    scanf("%d", &a);
    giaiThua = tinhGiaiThua(a);
    printf("giai thua so %d la %d", a, giaiThua);
    return 0;
}