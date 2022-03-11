#include <stdio.h>

#define X 10

main()
{
  int Z[10];
  int i, j, k;

  printf("Prosze wpisac %d liczb calkowitych", X);
  printf(" oddzielonych spacjami, w dowolnej kolejnosci.\n");
  for ( i = 0; i < X; i++ )
    scanf("%d", &Z[i]);
  printf("Ciag wpisanych liczb do uporzadkowania:\n");
  for ( i = 0; i < X; i++ )
    printf("%d, ", Z[i]);
  printf("\n");


  for ( i = 1; i < X; i++ )
    {
    k = Z[i];
    for ( j = i; (j > 0) && (Z[j-1] > k) ; j-- )
      Z[j] = Z[j-1];
    Z[j] = k;
  }

  printf("Ciag uporzadkowany:\n");
  for ( i = 0; i < X; i++ )
    printf("%d, ", Z[i]);
  printf("\n");

  return 0;

}
