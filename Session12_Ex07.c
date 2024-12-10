#include <stdio.h>

void taoMang(int row, int col, int mang[row][col]){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("mang[%d][%d]= ", i, j);
            scanf("%d", &mang[i][j]);
        }
    }
}
void inMang(int row, int col, int mang[row][col]){    
    printf("ma tran: \n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j ++){
            printf("%d ", mang[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int row, col;
    printf("nhap so hang trong mang: ");
    scanf("%d", &row);
    printf("nhap so cot trong mang; ");
    scanf("%d", &col);
    if(row <= 0 || col <= 0){
        printf("cot hoac hang khong hop le");
        return 1;
    }
    int mang[row][col];
    taoMang(row, col, mang);
    inMang(row, col, mang);
    return 0;
}