
#include <stdio.h>
#include "num.h"

int print_square_matrix(double *matrix, int neq)
{
  int i = 0;
  int j = 0;
  
  for (i = 0; i < neq; i++)
  {
    for (j = 0; j < neq; j++)
      printf("% .5f ", matrix[i + neq*j]);
    printf("\n");
  }
  printf("\n");
  return 0;
}

int print_matrix(double *matrix, int neq)
{
  int i = 0;
  int j = 0;
  
  for (i = 0; i < neq; i++)
  {
    for (j = 0; j <= neq; j++)
      printf("% .5e ", matrix[i + neq*j]);
    printf("\n");
  }
  printf("\n");
  return 0;
}

int print_vec(double *vec, int neq)
{
  int i;
  for (i = 0; i < neq; i++)
    printf("% .5e ", vec[i]);
  printf("\n");
  return 0;
}
