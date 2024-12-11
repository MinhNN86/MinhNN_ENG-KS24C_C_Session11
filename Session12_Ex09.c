#include <stdio.h>
//Nhap gia tri cac phan tu cua mang
void nhapMang(int row , int col, int mang[row][col]){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j ++){
            printf("mang[%d][%d]= ", i, j);
            scanf("%d", &mang[i][j]);
        }
    }
}
//In gia tri cac phan tu cua mang theo ma tran
void inMang(int row, int col, int mang[row][col]){   
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j ++){
            printf("%d ", mang[i][j]);
        }
        printf("\n");
    }
}
//In ra cac phan tu o goc theo ma tran
void inPhanTuOGoc(int row, int col, int mang[row][col]){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(i == 0 && j == 0 || i == row - 1 && j == col - 1 || i == 0 && j == col - 1 || j == 0 && i == row - 1){
                printf("%d", mang[i][j]);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}
//In ra cac phan tu nam tren duong bien theo ma tran
void inDuongBien(int row, int col, int mang[row][col]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i == 0 || i == row - 1 || j == 0 || j == col - 1) {
                printf("%d ", mang[i][j]);
            } else {
                printf("  "); 
            }
        }
        printf("\n");
    }
}
//In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran
void inDuongCheoChinhPhu(int row, int col, int mang[row][col]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i == j || i + j == col - 1) { 
                printf("%d ", mang[i][j]);
            } else {
                printf("  ");
            }
        }
    printf("\n");
    }
}
//In ra cac phan tu la so nguyen to theo ma tran
void inSoNguyenTo(int row, int col, int mang[row][col]){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            int check = 1;
            if(mang[i][j] < 2){
                check = 0;
            } else {
                for (int k = 2; k < mang[i][j]; k++){
                    if(mang[i][j] % k == 0){
                        check = 0;
                    }
                }
            }
            if(check == 1){
                printf("%d ", mang[i][j]);
            } else{
                printf("  ");
            }
        }
        printf("\n");
    }
}
int main(){
    int nguoiDungNhap;
    int row, col;
    int check = 0;
    printf("nhap so cot trong mang: ");
    scanf("%d", &row);
    printf("nhap so hang trong mang: ");
    scanf("%d", &col);
    if(row <= 0 || col <= 0){
        printf("cot hoac hang khong hop le");
        return 1;
    }
    int mang[row][col];
    do{
        printf("\n1. Nhap gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In ra cac phan tu o goc theo ma tran\n");
        printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");
        printf("6. In ra cac phan tu la so nguyen to theo ma tran\n");
        printf("7. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &nguoiDungNhap);
        switch(nguoiDungNhap){
            case 1: //Nhap gia tri cac phan tu cua mang
                check = 1;
                nhapMang(row, col, mang);
                break;
            
            case 2: //In gia tri cac phan tu cua mang theo ma tran
                if(check == 0){
                    printf("chua nhap mang");
                    break;
                }
                inMang(row, col, mang);
                break;

            case 3: //In ra cac phan tu o goc theo ma tran
                if(check == 0){
                    printf("chua nhap mang");
                    break;
                }
                inPhanTuOGoc(row, col, mang);
                break;

            case 4: //In ra cac phan tu nam tren duong bien theo ma tran
                if(check == 0){
                    printf("chua nhap mang");
                    break;
                }
                inDuongBien(row, col, mang);
                break;

            case 5: //In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran
                if(check == 0){
                    printf("chua nhap mang");
                    break;
                }
                if(row != col){
                    printf("khong phai mang vuong");
                    break;
                }
                inDuongCheoChinhPhu(row, col, mang);
                break;

            case 6: //In ra cac phan tu la so nguyen to theo ma tran
                if(check == 0){
                    printf("chua nhap mang");
                    break;
                }
                inSoNguyenTo(row, col, mang);
                break;
        }
    } while (nguoiDungNhap != 7);
    return 0;
}