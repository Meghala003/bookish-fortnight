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
        int p[n+1];
        for(int i=0;i<n;i++)
        {
            p[i]=0;
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i] > 0 && arr[i] <= n)
            {
                p[arr[i]]=1;
            }
        }
        for(int i=1;i<=n;i++)
        {
            if(!p[i])
            {
                printf("%d  ",i);
            }
        }

    }

}
