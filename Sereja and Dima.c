#include<stdio.h>
int main()
{
int a[100],n,i,j,s1=0,s2=0,temp;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(a[j]<a[i])
{
temp= a[j];
a[j]= a[i];
a[i]=temp;
}
}
}
for(i=0;i<n;i=i+2)
s1=s1+a[i];
for(i=1;i<n;i=i+2)
s2=s2+a[i];
if(n%2==0)
printf("%d %d",s2,s1);
else
printf("%d %d",s1,s2);
return 0;
}
