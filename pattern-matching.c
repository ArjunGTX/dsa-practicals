#include <stdio.h>
#include <string.h>
int main() {
    int i,j,l1,l2,count,pos;
    char a[50],b[20];
  
    printf("Enter a string \n");
    gets(a);
    printf("Enter a sub string \n");
    gets(b);
    l1 = strlen(a);
    l2 = strlen(b);
    for (i = 0; i < l1; i++) {
        count = 1;
        if(b[0] == a[i]) {
            pos = i;
            for(j=1;j<l2;j++) {
                if(b[j] == a[i+j]) {
                    count++;
                }
                else {
                    count = 1;
                    break;
                }
                if(l2 == count) {
                    break;
                }
            }
            if(l2 == count) {
                printf("String found at position %d ",pos);
            } 
            else  {
                printf("String not found");
            }
        }
    }
    return 0;
}
