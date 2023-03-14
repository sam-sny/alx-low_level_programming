#include "main.h"
#include<stdlib.h>
/**
 * free_grid - frees D previously created by alloc
 * @grid: the address of the two dimemsional grid
 * @height: height of the grid
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}

