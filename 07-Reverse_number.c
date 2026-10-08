#include<stdio.h>

int main()
{
   int rev=0,digit,n;
  printf("Enter an integer\n");
  scanf("%d",&n);

while(n!=0)
{
  digit=n%10;
  rev=rev*10+digit;
  n/=10;
}
printf("Reversed Number=%d\n",rev);
return 0;
}
