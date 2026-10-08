#include<stdio.h>
int main()
{
 int n,i,arr[50],max,min;
  printf("Enter the number of elements\n");
  scanf("%d",&n);

  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);

  max=min=arr[0];
for(i=1;i<n;i++){
  if(max<arr[i]){
    max=arr[i];
  }
   if(min>arr[i])
   { 
     min=arr[i];
    }
  }
printf("Maximum element=%d\n",max);
printf("Minimum element=%d\n",min);
return 0;
}

  
