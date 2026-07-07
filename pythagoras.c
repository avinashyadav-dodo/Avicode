#include<stdio.h>
#include<math.h>

int main(){
    float perpendicular, base, hypotenus;
    printf("Enter Perpedicular: ");
    scanf("%f", &perpendicular);

    printf("Enter Base: ");
    scanf("%f", &base);

    hypotenus=pow((base*base+perpendicular*perpendicular), 0.5);
    printf("Hypotenus is: %f", hypotenus);

    return 0;


}