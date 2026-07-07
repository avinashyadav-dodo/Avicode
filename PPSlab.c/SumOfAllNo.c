#include<stdio.h>
int main (){
    int n,  sum = 0;
    printf ("Enter the number upto which you want the sum:");
    scanf ("%d",&n);
    for (int i=1;i<=n;i++)
    {
        sum += i;
    }
    printf ("Required sum upto %d is \n %dn",sum);
    return 0;
}