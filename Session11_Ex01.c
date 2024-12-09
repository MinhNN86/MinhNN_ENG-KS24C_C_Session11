#include <stdio.h>
int tong(int a, int b);
int main(){
    int a, b;
    int sum = 0;
    printf("nhap so a: ");
    scanf("%d", &a);
    printf("nhap so b: ");
    scanf("%d", &b);
    sum = tong(a, b);
    printf("tong cua %d va %d la: %d", a, b, sum);
}
int tong(int a, int b){
    int sum = a + b;
    return sum;
}
