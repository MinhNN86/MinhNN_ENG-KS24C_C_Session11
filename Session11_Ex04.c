#include <stdio.h>
int phanTuMax(int mang[], int soPhanTu){
    int max = mang[0];
    for(int i = 0; i < soPhanTu; i++){
        if(max < mang[i]){
            max = mang[i];
        }
    }
    return max;
}
int main(){
    int max;
    int mang[5]= {100, 2, 3, 4, 5};
    max = phanTuMax(mang, 5);
    printf("so lon nhat trong mang %d", max);
    return 0;
}