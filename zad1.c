#include <stdio.h>
#include <stdlib.h>
void sumatablic(int tab1[3][3], int tab2[3][3], int tab12[3][3])
{
int i,j;
for(i=0; i<3; i++)
{ for(j=0; j<3; j++)
tab12[i][j]=tab1[i][j]+tab2[i][j];
}
}




int main()
{
  int i,j;
  int tablica1[3][3];
  int tablica2[3][3];
  int tablica3[3][3];
  printf("Podaj liczby 1 tablicy: \n");
  for(i=0; i<3; i++)

  { for(j=0; j<3; j++)

  scanf("%d",&tablica1[i][j]);
  }

  { for(j=0; j<3; j++)

  scanf("%d",&tablica1[i][j]);
  }
  printf("Podaj liczby 2 tablicy: \n");
  for(i=0; i<3; i++)

  { for(j=0; j<3; j++)

  scanf("%d",&tablica2[i][j]);
  }
printf("PODALES: \n");

  for(i=0; i<3; i++)

  { for(j=0; j<3; j++)

  printf("%d ",tablica1[i][j]);
  }
  putchar('\n');
  for(i=0; i<3; i++)

  { for(j=0; j<3; j++)

  printf("%d ",tablica2[i][j]);
  }
    putchar('\n');
  sumatablic(tablica1,tablica2,tablica3);
  printf("Po uzyciu funkcji: \n");
  for(i=0; i<3; i++)

  { for(j=0; j<3; j++)

  printf("%d ",tablica3[i][j]);
}
return 0;
}
