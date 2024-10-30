#include<stdio.h>
#include<string.h>

int main()
{
    char arr[]={'a','e','i','o','\0'};
    char arr1[]="aeio";
    char *ptr="aeio";
    printf("%s\n",arr);
    printf("%s\n",arr1);
    printf("%s\n",ptr);
    printf("%d\n",sizeof(arr1));
    printf("%d\n",strlen(arr1));
    printf("%d\n",sizeof(arr));
    printf("%d\n",strlen(arr));
    return 0;
}