#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

int main (){ 
  int cont, N, soma=0, X=1, T=0, Y=0;
  do {
  scanf ("%d", &N);
  } while (N<=0 || N>=46);
  for (cont=1; cont<N; cont++){
  printf ("%d ", Y);
  Y=T+X;
  X=T;
  T=Y;
  }
  printf ("%d\n", Y);
  return 0;
}

## João Ricardo Simplício Soares ##

