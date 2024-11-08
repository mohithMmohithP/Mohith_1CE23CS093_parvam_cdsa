#include<stdio.h>
int main(){
    int a[3][3]={{2,4,5},{5,6,7},{8,9,3}};
    printf("The values of 2D array are as follows:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}