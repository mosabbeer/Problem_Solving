 #include<stdio.h>
 int main()
 {
     float price[3];
     printf("enter 3 number");
     scanf("%d",&price[0]);
     scanf("%d",&price[1]);
     scanf("%d",&price[2]);
     printf("the 1st price is %f\n",price[0]+.18*price[0]);
     printf("the 2nd price is %f\n",price[1]+.18*price[1]);
     printf("the 3rd price is %f",price[2]+.18*price[2]);
     return 0;
 }
