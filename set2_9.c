#include <stdio.h>

int main()
{
    int m,n,a[10],b[10],i,j=1,count=0,k=0,f;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
           for(j=i+1;j<n;j++)
           {
                if(a[i]+a[j]==0)
                {
                 printf("%d %d",a[i],a[j]);
                }
            
           }
    }        
      
    
    return 0;
}
