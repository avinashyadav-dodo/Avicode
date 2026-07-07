#include<stdio.h>

int main(){
    float celcius, fahrenheit;

    printf("Enter Celcius Temperature: ");
    scanf("%f", &celcius);

    fahrenheit=(9.0/5.0)*celcius+32;
    
    printf("fahrenheit Temperature is: %f", fahrenheit);


    //fahrenheit to celcius
    printf("\nEnter fahrenheit Temperature: ");
    scanf("%f", &fahrenheit);

    celcius=(fahrenheit-32)*(5.0/9.0);

    printf(" Celcius Temperature is: %f", celcius);
    
    
    
    
    return 0;
}