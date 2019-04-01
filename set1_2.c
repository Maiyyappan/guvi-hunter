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
       for(j=i+1;j<n;j++)
       {
           if(a[i]<a[j])
           {
           f=a[i];
           a[i]=a[j];
           a[j]=f;
           }
       }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
