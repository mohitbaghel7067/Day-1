#include <stdio.h>

int main() {
    // Write C code here
   int n;printf("enter your number:");scanf("%d",&n);
   int sum=0;
   int digits,i=n;
   while(i>0)
   {
       digits=i%10;
       sum=sum+digits;
       i=i/10;
   }
   printf("sum of digits=%d",sum);
   return 0;
}  