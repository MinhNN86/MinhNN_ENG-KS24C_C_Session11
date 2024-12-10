#include <stdio.h>
int inMang(int mang[], int soPhanTu){
    for(int i = 0; i < soPhanTu; i++){
        printf("mang[%d]= %d\n", i, mang[i]);
    }
}
int main(){
    int mang[5]={1, 2, 3, 4, 5};
    inMang(mang, 5);
    return 0;
}