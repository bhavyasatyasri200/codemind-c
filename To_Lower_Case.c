#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str);
   int i=0;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>=65&&str[i]<=90)
        {
            str[i]=str[i]+32;
        }
    }
    printf("%s",str);
}