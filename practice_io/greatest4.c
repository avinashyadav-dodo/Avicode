#include <stdio.h>
int main (){
    int a , b , c ,d ;
    printf ("Enter a first number\n");
    scanf ("%d" , &a);
    printf ("Enter a second number\n");
    scanf ("%d" , &b);
    printf ("Enter a third number\n");
    scanf ("%d" , &c);
    printf ("Enter a fourth number\n");
    scanf ("%d" , &d);
    if (a>b  && a>c && a>d){
        printf ("%d is greatest",a);
    }
    if (b>a  && b>c && b>d){
        printf ("%d is greatest",b);
    }
    if (c>a  && c>b && c>d){
        printf ("%d is greatest",c);
    }
    if (d>a  && d>b && d>c){
        printf ("%d is greatest",d);
    }
    return 0 ;

}