#include <stdio.h>

void kiemTraSoHoanHao(int a) {
    int check = 1;
    if (a <= 1) {
        check = 0;
    }
    int sum = 0;
    for (int i = 1; i <= a / 2; i++) {
        if (a % i == 0) {
            sum += i; 
        }
    }
    if (sum == a){
        printf("true");
    } else {
        printf("false");
    }
}

int main() {
    int a, b;
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);
    kiemTraSoHoanHao(a);
    printf("\n");
    kiemTraSoHoanHao(b);
    return 0;
}
