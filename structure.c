#include<stdio.h>
struct book
{
    char bname[20];
    int price;
    int year;
    }b[5];
     int main()
    {
        int i;
        for(i=0;i<5;i++)
        {
            printf("Enter the Book %d Name =  ",i+1);
            scanf("%s",b[i].bname);
            printf("Enter the Price of the book %d = ",i+1);
            scanf("%d",&b[i].price);
            printf("Enter the Year of the Book  %d = ",i+1);
            scanf("%d",&b[i].year);
        }
        for(i=0;i<5;i++)
        {
        printf("%s\t %d\t %d\n",b[i].bname,b[i].price,b[i].year);}
    }