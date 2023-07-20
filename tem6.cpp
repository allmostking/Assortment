#include <stdio.h>

main()

{
    int A[3][3];
    int row, col, sum = 0;

    printf("Enter elements in matrix of size %dx%d: \n", 3, 3);
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    for(row=0; row<3; row++)
    {
        sum = sum + A[row][row];
    }

    printf("\nSum of main diagonal elements = %d", sum);

}
