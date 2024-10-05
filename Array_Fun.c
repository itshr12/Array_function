#include<stdio.h>
int fun(int a);
int fun1(int *b);
int main()
{
    int i;
    int ab[]={1,2,3,4,5,6};
    for(i=0;i<=5;i++)
    {
        fun(ab[i]);
    }
    for(i=0;i<=5;i++)
    {
        fun1(&ab[i]);
    }

}
int fun(int a)
{
    printf("%d ",a);
}


int fun1(int *b)
{
    printf("%d ",*b);
}