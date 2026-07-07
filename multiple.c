#include <stdio.h>
#include<math.h>
int main (){
    int n;
    printf ("Enter a number\n");
    scanf ("%d",& n);
    int digit=0;
    while(n>0){
        n/=10;
        digit++;
    }
    printf("%d", digit);
    return 0;
}