#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size on the array:");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter the elements of the array:");
    for(int i=0;i<n;i++)
    scanf("%d", &a[i]);

    int temp=a[0];
    for(int i=0;i<n;i++)
    {
        if(temp<a[i])
        temp=a[i];
    }
    int count =0;
    for(int j=0;j<n;j++)
    {
        if(temp==a[j])
        count++;
    }
    printf("\nThe largest number in the loop is %d and it occurs %d times.", temp,count);
    return 0;
}