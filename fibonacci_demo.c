#include <stdio.h>
int fibo(int n)
{
    if((n==1)||(n==0))
    {
        return(n);
    }
    else
    {
        return(fibo(n-1)+fibo(n-2));
    }
}
int main()
{
    int n,i=0;
    printf("Input the number of terms for Fibonacci Series:");
    scanf("%d",&n);
    printf("\nFibonnaci Series is as follows\n");
    while(i<n)
    {
        printf("%d ",fibo(i));
        i++;
    }
    return 0;
}