#include<stdio.h>
int main(){
    int c=0;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(n%i==0){
            c++;
        }
        if(c==2){
            printf("it is prime");
        }else{
            printf("its not prime number");
        }
    }
}