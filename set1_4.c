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
       for(j=0;j<n;j++)
       {
           if(a[i]==a[j])
           {
               
           count++;
          
           }
       }
       if(count==1)
       {
           printf("%d ",a[i]);
       }count=0;
    }
   
    return 0;
}
