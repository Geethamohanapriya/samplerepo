/*#include<stdio.h>
struct rect
{
    int l;
    int b;
};
int main()
{
    struct rect r;
    r.l=10;
    r.b=5;
    struct rect te={2,3};
    printf("%d%d",r.l,r.b);
       printf("%d%d",te.l,te.b);
}*/
#include<stdio.h>
int main()
{
    int n=10,*p;
    p=&n;
    printf("%d %d",n,p);
}