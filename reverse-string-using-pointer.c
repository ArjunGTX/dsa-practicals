#include <stdio.h>
#include <string.h>
int main() {
    int i,n;
    char str[50];
    char *ptr;
    printf("Enter a string \n");
    gets(str);
    n = strlen(str);
    ptr = str;
    printf("the reversed string is : \n");
    for (i = n-1; i >= 0; i--) {
        printf("%c",*(ptr+i));
    }
    return 0;
}
