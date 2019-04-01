#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,k,c=0;
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
                a[i]='*';
                a[j]='*';
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!='*')
        {
            printf("%d",a[i]);
        }
    }
}
