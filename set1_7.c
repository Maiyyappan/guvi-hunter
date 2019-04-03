#include <stdio.h>

int main()
{
    int n,a[10],b[10],i,j,count=0,k=0,f;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
      
        if(a[i]%2!=0 && i%2==0)
            {  
                printf("%d",a[i]);
            }
        if(a[i]%2==0 && i%2!=0)
            {  
                printf("%d",a[i]);
            }
        
    }
    
    return 0;
}
