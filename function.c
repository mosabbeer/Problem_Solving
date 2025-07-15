#include<stdio.h>
void sum()
{
    int x,y,sum;
    scanf("%d %d",&x,&y);
    sum=x+y;
    printf("%d\n",sum);
}
void sub(int x, int y)
{
   int div;
   div=x-y;
   printf("%d\n",div);

}
  void tax(int p, int x)
{
    float n;
    if (p>3000)
     n=(p*x)/100;
     printf("%f",n);
}

  int main()
  {
      sum();
      int a,b;
      scanf("%d %d",&a,&b);
      sub(a,b);
      tax( 4000,10);
      return 0;
  }
