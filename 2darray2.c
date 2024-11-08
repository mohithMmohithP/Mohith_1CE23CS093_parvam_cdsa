#include<stdio.h>
int main(){
    int r;
    scanf("%d",&r);
    int c;
    scanf("%d ",&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d ",&a[i][j]);
        }
        printf("The values of 2D array are as follows:\n");
       for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",a[i][j]); 
        }
       }
}
}