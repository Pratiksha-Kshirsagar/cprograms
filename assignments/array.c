#include<stdio.h>
int main()
{

    char arr[4][10]={"sunbeam","karad","pahd"};
    char *ptr = (char*)arr[3];
    *ptr++;
    printf("%s %s\n",arr[ptr - arr[3]3],--ptr);
    return 0;
}