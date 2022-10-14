#include <stdio.h>
int main()
{
    char s1[20],s2[20];
    int i=0 , c=0;
    printf("enter the strings");
    scanf("%s%s",s1,s2);
    while((s1[i]!='\0')&&(s2[i]!='\0'))
    {
        if(s1[i]!=s2[i])
        {
            c=1;
            break;
            
        }
        i++;
        

        if(c==0)
        printf("strings are equal");
        else
        printf("strings are not equal");
        
    }
}