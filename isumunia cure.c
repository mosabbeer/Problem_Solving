#include<stdio.h>
int main()
{
    int k,l,m,n,d,p=0,i,count=0;
    scanf("%d %d %d %d",&k,&l,&m,&n,&d);
    int arrk[100],arrl[100],arrm[100],arrn[100],arrd[1000];
    for(i=1;i<=d;i++)
    arrd[i]=i;
    for(i=1;i<=d;i++)
    {
        arrn[i]=i*n;
        p++;
    }
    for(i=1;i<=p;i++)
    {
        if(arrn[i]== arrd[i])
            arrd[i]=0;
    }
    p=0;
    for(i=1;i<=i*m;i++)
    {
        arrm[i]=i*m;
        p++;
    }
    for(i=1;i<=d;i++)
    {
        if(arrm[i]== arrd[i])
            arrd[i]=0;
    }
    p=0;
    for(i=1;i<=d;i++)
    {
        arrl[i]=i*l;
        p++;
    }
    for(i=1;i<=p;i++)
    {
        if(arrl[i]== arrd[i])
            arrd[i]=0;
    }
    p=0;
    for(i=1;i<=d;i++)
    {
        arrk[i]=i*k;
        p++;
    }
    for(i=1;i<=p;i++)
    {
        if(arrk[i]== arrd[i])
            arrd[i]=0;
    }
    for(i=1;i<=d;i++)
    {
        if(arrd[i]>0)
            count++;
    }
    for(i=1;i<=d;i++)
    {
    printf("%d\n",count);
    printf("%d ",arrd[i]);
    }
    return 0;
}
