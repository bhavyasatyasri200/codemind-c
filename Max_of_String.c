#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%99[^
]",str);
   char maxChar=str[0];
   int i;
    for(i=1;str[i]!=NULL;i++)
    {
        if(str[i]>maxChar)
        {
            maxChar=str[i];
        }
    }
    printf("%c
",maxChar);
    
}