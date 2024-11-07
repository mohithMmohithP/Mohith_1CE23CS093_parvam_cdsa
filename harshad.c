#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
     int temp=n;
    int s=0;
    while(n!=0){
        int r=n%10;
         s=r+s;
        n=n/10;
    }
    if((temp%s)==0){
        printf("harshad number");
    }else{
        printf("not a harshad");
    }
}