#include <stdio.h>

main()

{
    int A[3][3];  
    int B[3][3];  

    int row, col;

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
        for(col=0; col<3; col++)
        {
            B[col][row] = A[row][col];
        }
    }

    printf("\nOriginal matrix: \n");
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            printf("%d ", A[row][col]);
        }

        printf("\n");
    }

    printf("Transpose matrix of A: \n");
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            printf("%d ", B[row][col]);
        }

        printf("\n");
    }

}
