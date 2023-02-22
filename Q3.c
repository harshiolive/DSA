#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of an array:");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter the elements of the array:");
    for(int i=0;i<n;i++)
    scanf("%d", &a[i]);
    
    printf("\nResulted array:");
    for(int i=0;i<n;i++)
    {
        if((a[i]%2) == 0)
        printf("%d ", a[i]);
    }
    for(int j=0;j<n;j++)
    {
        if(a[j]%2 != 0)
        printf("%d ", a[j]);
    }
    
    return 0;
}