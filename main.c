#include <stdio.h>

int main(void){
int i, j, tmp;
int number[100];
int total;
printf("総数　＝");
scanf("%d", &total);

printf("%d個の数値入力 \n", total);
  for (i=0; i<total; ++i)
    scanf("%d", &number[i]);

for (i=0; i<total; ++i) {
    for (j=i+1; j<total; ++j) {
      if (number[i] > number[j]) {
        tmp =  number[i];
        number[i] = number[j];
        number[j] = tmp;
      }
    }
  }

