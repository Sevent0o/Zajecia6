#include <stdio.h>
#include <stdlib.h>
int iloczynskalarny(int tab1[3], int tab2[3])
{
int i;
int TEMP=0;
for(i=0; i<3; i++){
TEMP=TEMP+tab1[i]*tab2[i];
}
return TEMP;
}




int main()
{
  int i,j,test;
  int tablica1[3];
  int tablica2[3];
  printf("Podaj liczby 1 tablicy: \n");
  for(i=0; i<3;i++){
  scanf("%d",&tablica1[i]);

  }
  printf("Podaj liczby 2 tablicy: \n");
  for(i=0; i<3; i++){
  scanf("%d",&tablica2[i]);
}
printf("PODALES: \n");

  for(i=0; i<3; i++)
{  printf("%d ",tablica1[i]);
}
  putchar('\n');
  for(i=0; i<3; i++){
 printf("%d ",tablica2[i]);
}
    putchar('\n');
    printf("Po uzyciu funkcji: \n");
    printf("WYNIK:");
test=iloczynskalarny(tablica1,tablica2);
printf("%d\n",test);
return 0;
}
