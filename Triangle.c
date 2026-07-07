#include<stdio.h>
int main (){
    float breadth , length, area;
    printf ("Enter the breath: ");
    scanf ("%f", &breadth);

    printf ("Enter the length: ");
    scanf ("%f", &length);

    area=length*breadth;

    printf("Area is: %f", area);
    

    return 0;
}