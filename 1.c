#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,k=0,c=0,b[100],t;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j] && a[i]!='*')
            {
                a[j]='*';
                b[k]=a[i];
                k++;
            }
        }
    }
    b[k]='\0';
    for(i=k;b[i]!='\0';i++)
    {
        for(j=i+1;b[j]!='\0';j++)
        {
            if(b[i]>b[j])
            {
                t=b[i];
                b[i]=b[j];
                b[j]=t;
            }
        }
    }
    b[i]='\0';
    for(i=0;b[i]!='\0';i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
