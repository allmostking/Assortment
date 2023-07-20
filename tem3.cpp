#include <stdio.h>

main()
{
    int i, n,j,end;
    int a[100];

    printf("Enter 10 elements in array:");
    for(i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter number of times to right rotate: ");
    scanf("%d", &n);

    n = n%10;

    printf("\nArray before rotation:\n");

    for(i=0; i<10; i++) 
    {
        printf("%d ", a[i]);
    }

    for(i=0;i<n;i++)
    {
         end = a[9];

        for(j=9; j>0; j--)
        {
            a[j] = a[j-1];
        }
       a[0] = end;
    }

    printf("\n\nArray after rotation\n");

    for(i=0; i<10; i++)
    {
        printf("%d ", a[i]);
    }
}
