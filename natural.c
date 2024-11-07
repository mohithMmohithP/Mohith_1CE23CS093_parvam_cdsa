#include<stdio.h>
void natu (int a){
    if(a<=0){
        return
    
    natu(a-1);
    printf("%d \n",a);
    }
}
    int main()
    {
        int a;
        scanf("%d",&a);
        natu (a);
        
    }
