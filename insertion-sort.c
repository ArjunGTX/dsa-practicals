#include <stdio.h>  
void insert(int a[], int n)
{  
    int i, j, temp;  
    for (i = 1; i < n; i++) {  
        temp = a[i];  
        j = i - 1;  
        while(j>=0 && temp <= a[j]) 
        {    
            a[j+1] = a[j];     
            j = j-1;    
        }    
        a[j+1] = temp;    
    }  
}  
int main()  
{  
    int a[100],i,n;
    printf("enter number of elements in array : ");
    scanf("%d",&n);
    printf("\nEnter the elements \n");
    for(i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    printf("Before sorting array elements are - \n");  
     for (i = 0; i < n; i++)  
        printf(" %d ", a[i]);  
    insert(a, n);  
    printf("\nAfter sorting array elements are - \n");    
     for (i = 0; i < n; i++)  
        printf(" %d ", a[i]);  
    return 0;  
} 
