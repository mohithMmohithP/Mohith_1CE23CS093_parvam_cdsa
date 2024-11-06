#include<stdio.h>
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int l=0;l<n;l++){
                   printf("%d %d %d \n",i,j,l);
            }
        }
    }
}