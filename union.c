#include<stdio.h>
#include<string.h>
union student
{
 char name[20];
 char subject[20];
 float per;
};
int main()
{
    union student r1;
    union student r2;
    
strcpy(r1.name,"ABC");
printf("Name = %s\n",r1.name);
strcpy(r1.subject,"Maths");
printf("Subject = %s\n",r1.subject);
r1.per=99.5;
printf("Percentage = %f\n",r1.per);
strcpy(r2.name,"PQR");
printf("Name = %s\n",r2.name);
strcpy(r2.subject,"Maths");
printf("Subject = %s\n",r2.subject);
r2.per=90.2;
printf("Percentage =%f",r2.per);
}
