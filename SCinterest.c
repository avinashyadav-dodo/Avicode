#include<stdio.h>
#include<math.h>
int main (){
    float p , r , t, SI, CI;
    printf("Enter the principal value:");
    scanf("%f",&p);
    printf("Enter the rate:");
    scanf("%f",&r);
    printf("Enter the time:");
    scanf("%f",&t);
    SI = (p*r*t)/100;
    CI = p*pow(1+r/100,t)-p;
    printf("Simple Interest = %f\n",SI);
    printf("Compound Interest = %f",CI);
    return 0;

}