#include<stdio.h>
#include<string.h>
void main()
{
    int i=0,l=0,flag=0;
    char str[20];
    printf("enter the string: ");
    scanf("%s",str);
    while(str[i]!='\0')
       { 
        l++;
        i++;
       }
       l-=1;
    for(i=0;i<l;i++)
    {
        if(str[i]!=str[l-i])
           { flag+=1;
            break;}
        else
            continue;
    }
    if(flag==0)
        printf("palindrome");
    else
        printf("not palindrome");
}