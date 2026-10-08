#include<stdio.h>

int main()
{
  int a,b,c;
  printf("Enter the three numbers\n");
  scanf("%d%d%d",&a,&b,&c);
if(a>=b && a>=c)
  printf("%d is largest number\n",a);
else if(b>=a && b>=c)
  printf("%d is largest number\n",b);
else if(c>=a && c>=b)
  printf("%d is largest number\n",c);
else
  printf("All are equal\n");
  return 0;
}
