#include<stdio.h>
void main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
      int n;
      scanf("%d",&n);
      int arr[n];
      for(int i=0;i<n;i++)
      {
          scanf("%d",&arr[i]);
      }
      int count;
      for(int i=0;i<n;i++)
      {
          count=0;
          for(int j=0;j<n;j++)
          {
              if(arr[i] == arr[j])
              {
                  count++;
              }
          }
          if(count == 1)
          {
              printf("%d",arr[i]);
          }
      }
  }
}
