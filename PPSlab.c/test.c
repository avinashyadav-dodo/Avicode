#include <stdio.h>

int main() {
int x;
printf ("Enter a number:");
scanf ("%d",&x);
if (x%5==0){
printf ("It is divisible");
}
else {
printf("It is not divisible");
}
  return 0;
}