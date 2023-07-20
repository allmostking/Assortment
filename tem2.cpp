#include <stdio.h>

main()

{
    int a[100], n, i,big,max;
    


    printf("Enter size of the array: ");
    scanf("%d", &n);

    printf("Enter elements in the array:\n ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<=n; i++)
    {
        if(a[i] > big)
        {
            max = big;
            big = a[i];
        }
        else if(a[i] > max && a[i] < big)
        {
            max = a[i];
        }
    }
    printf("Second largest number  = %d", max);

}
