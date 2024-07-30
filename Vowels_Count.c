#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%[^
]s",s);
    int count=0,i;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='a' ||  s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            count++;
        }
    }
    printf("%d",count);
}