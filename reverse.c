#include<stdio.h>
int main()
{
    int n;
    int r=0;
    scanf("%d",&n);
    while(n!=0)
    {
        int R=n%10;
        r=r*10+R;
        n=n/10;
    }
    printf("%d",r);
    return 0;
}