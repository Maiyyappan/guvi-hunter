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
        if(a[i]==a[j])
            {
            count=1;
            a[j]='\0';
            }
        }
        if(count==1)
        {
            b[k]=a[i];
            k++;
        }
        count=0;
    }
    for(i=0;b[i]!='\0';i++)
    {
       for(j=i+1;b[j]!='\0';j++)
       {
           if(a[i]>a[j])
           {
           f=b[i];
           b[i]=b[j];
           b[j]=f;
           }
       }
    }
    for(i=0;b[i]!='\0';i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
