#include <stdio.h>
int main()
{
   int rows, i, j, number = 1,s;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; i++) {
   	for (s = 1; s<= rows - i; s++)
         printf("  ");
      for (j = 1; j <= i; ++j) {
         printf("%d ", number);
         ++number;
      }
    for (s = 1; s <= rows - i; s++)
         printf("  ");
      printf("\n");
   }
}
