#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,k,c=0,n1,p=1,t,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    n1=n;
    n=n-1;
    while(n>0)
    {
        p=p*10;
        n--;
    }
    for(i=0;i<n1;i++)
    {
        for(j=i+1;j<n1;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=n1-1,j=p;i>=0,j>0;i--,j=j/10)
    {
            sum=sum+(a[i]*j);
    }
   printf("%d",sum);
}
