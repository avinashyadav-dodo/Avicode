#include <stdio.h>
int main(){
    int n;
    printf ("enter a number/n");
    scanf ("%d",& n);
        if (n%5==0 || n%3==0){
            printf("The number is divisible");
        }
        else {
            printf ("The number is not divisible");
        }
         return 0;

}
