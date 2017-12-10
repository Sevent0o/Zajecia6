#include <stdio.h>
#include <stdlib.h>
void iloczyn(int tab1[3][3],int a)
{
int i,j,temp;
for(i=0; i<3; i++)
 for(j=0; j<3; j++){
  temp=a*tab1[i][j];
  printf("%d\n",temp);
}

}
int main()
{
  int i,j;
  int x=5;
  int tablica[3][3];
    printf("Podaj liczby tablicy: \n");
  for(i=0; i<3; i++)

  { for(j=0; j<3; j++)

  scanf("%d",&tablica[i][j]);
  }
    iloczyn(tablica,x);
}
