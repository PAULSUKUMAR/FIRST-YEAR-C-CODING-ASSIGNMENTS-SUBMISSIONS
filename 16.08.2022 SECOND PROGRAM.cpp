#include<stdio.h>
int main()
{
     int a[10],n,i,j,count=0,prime[10],t=0;
     
     scanf("%d",&n);
     
     for(i=0;i<n;i++)
     {
          scanf("%d",&a[i]);
     }
     for(i=0;i<n;i++)
     {
          count=0;
          for(j=2;j<a[i];j++)
          {
               if(a[i]%j==0)
               {
                    count=1;
                    break;
               }
          }
          if(count==0)
          {
               prime[t]=a[i];
               t++;
          }
     }
     
     for(i=t-1;i>=0;i--)
     {
          printf(" %d ",prime[i]);
     }
     return 0;
}
