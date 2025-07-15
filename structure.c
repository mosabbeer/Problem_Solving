#include<stdio.h>
struct person
{
    int age;
    float salary;
};
int main()
{
    struct person person1[4];
    int i;
    for(i=1;i<=4;i++)
    {
        printf("enter information for person %d\n",i);
        printf("age=");
        scanf("%d",&person1[i].age);
        printf("salary=");
        scanf("%f",&person1[i].salary);
    }
    for(i=1;i<=4;i++)
    {
        printf("information for person %d\n",i);
        printf("age=");
        printf("%d",person1[i].age);
        printf("salary=");
        printf("%+f",person1[i].salary);
    }
}
