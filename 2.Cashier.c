#include <stdio.h>
int main()
{
  int n=0,sum=0;
  do
    {
      printf("ENTER THE PRICE:");    
      scanf("%d",&n);
       sum=sum+n;
    } 
    while(n>0);
     printf("Total price: %d",sum);
     printf("\nTHANKING YOU ^_^");
    //enter the value "0" when there is no item left in your basket...
} 
