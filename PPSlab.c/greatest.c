#include<stdio.h>
int main(){
    float n1,n2,n3;
    printf("enter first number:\n");
    scanf("%f",&n1);
    printf("enter second number:\n");
    scanf("%f",&n2);
    printf("enter third number:\n");
    scanf("%f",&n3);

    if (n1>n2 && n1>n3)
    {
        printf("first number is the greatest");
    }
    else 
          if (n2>n3)
          {
            printf("second number is the greatest");
          }
    else 
        {
            printf("third number is the greatest");
        }

    return 0;
}