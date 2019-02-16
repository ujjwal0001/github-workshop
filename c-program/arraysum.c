#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, avg, n, a[10], sum=0;
    printf("Display number upto:");
    scanf("%d", &n);
    printf("Enter the elements one by one \n");

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++)
        printf("a[%d]=%d\n", i, a[i]);
 
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    avg = sum / n;
    printf("The sum is %d and average is %d", sum, avg);
    return 0;
}
