#include <stdio.h>
int main() {
    int a[20],b[20],c[40],i,j,la,lb;
    printf("Enter size of first array : ");
    scanf("%d",&la);
    printf("enter the elements of first array \n");
    for(i=0; i<la; i++) {
        printf("Arr[%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("the first array is : ");
    for(i=0; i<la; i++) {
        printf(" %d ",a[i]);
    }
    printf("\nEnter size of second array : ");
    scanf("%d",&lb);
    printf("enter the elements of second array \n");
    for(i=0; i<lb; i++) {
        printf("Arr[%d] = ",i);
        scanf("%d",&b[i]);
    }
    printf("\nthe second array is : ");
    for(i=0; i<la; i++) {
        printf(" %d ",a[i]);
    }
    for(i=0; i<la; i++) {
        c[i] = a[i];
    }
    for(j=0; j<lb; j++,i++) {
        c[i] = b[j];
    }
    printf("\nthe merged array is : ");
    for(i=0; i<la+lb; i++) {
        printf(" %d ",c[i]);
    }
    return 0;
}
