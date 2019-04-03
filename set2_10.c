#include <stdio.h>

int main()
{
    int m,n,a[10],b[10],i,j,count=0,k=0,f;
    scanf("%d",&m);
    scanf("%d",&n);
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
             if(a[i]==b[j])
             {
                 count++;
                 
             }
        }  
        
             
    }        
          
            if(count==n)
                {
                    printf("Yes");
                }
            else
            {
                printf("No");
            }
        
    
    return 0;
}
   
