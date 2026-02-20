#include<stdio.h>
int main (){
    float m1,m2,m3,m4,m5,percentage;
    printf ("Enter the marks of first sunject:");
    scanf ("%f",&m1);
    printf ("Enter the marks of second sunject:");
    scanf ("%f",&m2);
    printf ("Enter the marks of third sunject:");
    scanf ("%f",&m3);
    printf ("Enter the marks of forth sunject:");
    scanf ("%f",&m4);
    printf ("Enter the marks of fifth sunject:");
    scanf ("%f",&m5);
    percentage =(m1+m2+m3+m4+m5)*100 /500;
    printf("The percentage is: %f",percentage);
    return 0;
    }