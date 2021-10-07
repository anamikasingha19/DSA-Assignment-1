#include<stdio.h>

int main()
{
    char ch[1000];
    printf("Enter the value: \n");
    scanf("%s",ch);

    int i=0,p=0,q=0;

    while(ch[i]!='\0')
    {
        if(ch[i]=='.')
        {
            p++;
            if(ch[i+1]!='\0')
            q++;
        }
        i++;
    }
    
    if(p==1 && q==1)
    printf("Valid\n");
    else
    printf("Invalid\n");
    return 0;
}