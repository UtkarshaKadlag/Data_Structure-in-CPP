#include<stdio.h>
#define SIZE 5
#define SWAP(n1, n2, data_type){data_type temp;temp=n1;n1=n2;n2=temp;}
void accept_array(int a[], int size);
void display_array(const int *a, int size);
void selection_sort_desc(int a[], int size);
int main(void)
{
    int A[SIZE];

    printf("\n Enter the elements of array : ");
    accept_array(A, SIZE);

    printf("\n Elenments of array : ");
    display_array(A, SIZE);

    printf("\n Elements of array in decending order by selection sort : ");
    selection_sort_desc(A, SIZE);
    display_array(A, SIZE);

    return 0;

}
void accept_array(int a[], int size)
{
    int index;
    for(index=0;index<size;++index)
    {
        printf("\n Enter a[%d] :",index);
        scanf("%d", &a[index]);
    }
    return;
}
void display_array(const int *a, int size)
{
    int index;
    for(index=0; index<size;++index)
    {
        printf("\n a[%d] \t %d \t [%u]", index, a[index], &a[index]);
    }
    return;
}
void selection_sort_desc(int a[], int size)
{
    int i, j;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            printf("\n a[%d] \t %d \t [%u] \t a[%d] \t %d \t [%u]", i, a[i], &a[i], j, a[j], &a[j]);
            if(a[i]<a[j])
            SWAP(a[i], a[j], int);
        }
    if(i<(size-1))
    printf("\n iteration = %d", i+1);
    }
    return;
}