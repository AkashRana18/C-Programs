#include<stdio.h>
int main()
{
    FILE *fp;
char ch;
fp=fpopen("one.txt",'w');
printf("Enter Data : ");
while ((ch==getchar())!=EOF)
{
putc(ch,fp);
}
fclose(fp);
fp=fopen("one.txt",'r');

while (ch==getc(fp)!=EOF)

printf("%c",ch);
fclose(fp);
}
