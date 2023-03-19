#include <stdio.h>
void
main ()
{
  
int mat1[6][6], mat2[6][6], i, j;
  
printf ("Enter the elements of 1st matrix:");
  
for (i = 0; i < 6; i++)
    
for (j = 0; j < 6; j++)
      
scanf ("%d", &mat1[i][j]);
  
printf ("Enter the elements of matrix 2:");
  
for (i = 0; i < 6; i++)
    
for (j = 0; j < 6; j++)
      
scanf ("%d", &mat2[i][j]);
  
printf ("Matrix 1 + Matrix 2:-\n");
  
for (i = 0; i < 6; i++)
    {
      
for (j = 0; j < 6; j++)
	
printf ("%d ", mat1[i][j] + mat2[i][j]);
      
printf ("\n");
    }

}
