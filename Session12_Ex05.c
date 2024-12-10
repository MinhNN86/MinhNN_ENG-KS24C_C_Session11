#include <stdio.h>

void kiemTraSoNguyenTo(int a){
    int check = 1;
    if(a < 2){
        check = 0;
    }
    for(int j = 2; j < a; j++){
            if(a % j == 0){
            check = 0;
        }
    }
    if (check == 1){
        printf("true");
    } else {
        printf("false");
    }
}
int main(){
    int a, b;
    printf("nhap so thu nhat: ");
    scanf("%d", &a);
    printf("nhap so thu hai: ");
    scanf("%d", &b);
    kiemTraSoNguyenTo(a);
    printf("\n");
    kiemTraSoNguyenTo(b);
    return 0;
}