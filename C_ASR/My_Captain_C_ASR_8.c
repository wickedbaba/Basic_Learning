#include <stdio.h>

#define ROWS 3
#define COLS 3

void input(int a[][COLS], int rows, int cols);
void print(int a[][COLS], int rows, int cols);



int main()
{
    int a[ROWS][COLS];
    int i, j;


printf("Enter elements\n");
    input(a, ROWS, COLS);

printf("Priniting in main\n");
    print(a, ROWS, COLS);


    return 0;
}





void input(int a[][COLS], int rows, int cols)
{
    int i, j;


    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {

            scanf("%d", (*(a + i) + j));
        }
    }
      printf("Prinitng in the same function-\n");
        print(a, ROWS, COLS);
}



void print(int (*a)[COLS], int rows, int cols)
{
    int i, j;


    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {

            printf("%d ", *(*(a + i) + j));
        }

        printf("\n");
    }

}
