#include<stdio.h>
int main(){
    int n;

    printf("Enter a number:");
    scanf("%d",&n);

  // if (n%2==0)
  //    printf("number is even");
    //}
   // else 
    //{
    //    printf("number is odd");
    //}
//}
switch (n % 2)
{
    case 0: 
    printf ("the number is even :",n);
    break;

    default:
    printf ("the number is odd:",n);
    break;
}


}
