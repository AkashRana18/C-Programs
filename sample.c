#include<stdio.h>
struct sample
{
    int no;
    float avg;
}a;
void func(struct sample b)
{
    printf("%d\n%f",b.no,b.avg);}

int main()
{
    a.no=60;
    a.avg=93.5;
    func(a);
}

