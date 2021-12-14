int main()
{
int array[100], n,i;
printf("Enter number of elements\n");
scanf("%d", &n);
printf("Enter %d Number\n", n);
for(i = 0; i < n; i++) {
    scanf("%d", &array[i]);
}
printf("the original array is \n");
for(i=0; i<n; i++) {
    printf(" %d ",array[i]);
}
SelSort(array,n);
return 0;
}
void SelSort(int array[], int n)
{
int i, j, position, swap;
for(i = 0; i < (n - 1); i++)
{
position=i;
for(j = i + 1; j < n; j++)
{
if(array[position]>array[j])
position=j;
}
if(position != i)
{
swap=array[i];
array[i]=array[position];
array[position]=swap;
}
}
printf("\nSorted Array is \n");
for(i = 0; i < n; i++)
printf(" %d ", array[i]);
}
