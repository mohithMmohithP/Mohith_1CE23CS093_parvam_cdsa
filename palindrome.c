#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int r=0;
    int temp=n;
    while(n!=0)
    {
        int R=n%10;
        r=r*10+R;
        n=n/10;
            printf("%d\n",r);
    printf("%d\n",n);

    }
    if(r==temp){
        printf("it is palindrome");
    }else{
        printf("it is not paldindron");
    }

}