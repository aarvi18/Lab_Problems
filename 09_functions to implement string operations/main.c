/*[Q10.] Write functions to implement string operations such as compare, concatenate, string
length. Convince the parameter passing techniques.*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void strcopy(char str1[30],char tr2[30]);
void strcomp(char str1[30],char str2[30]);
void strcon(char str1[30],char str2[30]);
void strlength(char str1[30]);
void main()
{
    int ch;
    char str1[30] , str2[30];
              printf("Enter your choice:\n1: For string copy\n2:For string compare\n3:For string concatenation\n4:For string length:\n");
              scanf("%d",&ch);
              switch(ch)
    {
case 1:
        strcopy(str1,str2);
        break;
    case 2:
        strcomp(str1,str2);
        break;
    case 3:
        strcon(str1,str2);
        break;
    case 4:
        strlength(str1);
        break;
    default:
        printf("Invalid choice, try with valid input");
        exit(0);
    }
}
void strcopy(char str1[], char str2[])
{
    int i;
    printf("Enter the string to copy:\n");
    scanf("%s",str2);
    i=0;
    while(str2[i]!='\0')
    {
        str1[i]=str2[i];
        i++;
    }
    str1[i]='\0';
    printf("After copying string1 and string1 are %s %s", str1,str2);
}
void strcomp(char str1[], char str2[])
{
    int i;
    printf("Enter the string1:\n");
    scanf("%s",str1);
    printf("Enter the string2:\n");
    scanf("%s",str2);
    for(i=0; str1[i]!='\0'; i++);
    {
        if(str1[i]!=str2[i])
        {
            printf("Strings are not equal\n");
            exit(0);
        }
    }
    printf("The string are equal\n");
}
void strcon(char str1[], char str2[])
{
    int i,len=0;
    printf("Enter the string1:\n");
    scanf("%s",str1);
    printf("Enter the string2:\n");
    scanf("%s",str2);
    len=strlen(str1);
    for(i=0; str2[i]!='\0'; i++)
        str1[len+i]=str2[i];
    str1[len+i]='\0';
    printf("After concatenation String 2 to string 1 is: %s\n",str1);
}
void strlength(char str1[])
{
    int i,len=0;
    printf("Enter the string1: \n");
    scanf("%s",str1);
    for(i=0; str1[i]!= '\0'; i++)
        len++;
    printf("The length of the given string is: %d \n",len);
}
