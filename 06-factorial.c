#include<stdio.h>

int main()
{
    int i,fact=1,n;

  printf("Enter a positive integer\n");
  scanf("%d",&n);

  if(n<0)
    printf("ERROR! factorial of negative number is not there\n");
  else{
    for(i=2;i<=n;i++)
      fact*=i;
  }
 printf("factorial of %d is %d\n",n,fact);
return 0;
}
