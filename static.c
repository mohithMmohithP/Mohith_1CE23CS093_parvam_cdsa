#include<stdio.h>
void add(){
    static int a=7;
    a++;{
        printf("%d  ",a);
    }
    int main(){
        add();
    }
}