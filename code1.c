#include<stdio.h>
int main()
{
    int m = 1, n = 1 ;   
    printf("please input the first number:\n");
    scanf("%d",&m);
    printf("please input the second number:\n");
    scanf("%d",&n);
    int d = m;
    while(d > 1 && (m%d)+(n%d)!=0)
    {
        d--;
    }
    printf("%d",d);
    return 0;
}
