#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int i,a[n],j=0,k,c=0,b[100],t;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==i)
        {
            b[j]=a[i];
            j++;
        }
        else
        {
            c++;
        }
    }
    b[j]='\0';
    if(c==n)
    {
        printf("-1");
    }
    for(i=j;b[i]!='\0';i++)
    {
        for(k=i+1;b[k]!='\0';k++)
        {
            if(b[i]>b[k])
            {
                t=b[i];
                b[i]=b[k];
                b[k]=t;
            }
        }
    }
    for(i=0;b[i]!='\0';i++)
    {
        printf("%d ",b[i]);
    }
    
}
