#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "power.h"
int main() {
  int def,rebel,choose;
  while (1) {
  printf("Switch Of Power plan\n");
  printf("Press 1 for Set Balanced Plan\n");
  printf("Press 2 for Set Rebel's Plan\n");
  printf("Press 3 for Exit\n");
  system("powercfg -list");
  printf("\n\n");
  printf("Enter Your Action =");
  scanf("%d",&choose);
  switch (choose) {
    case 1:
    on();
    break;
    case 2:
    off();
    break;
    case 3:
    exit(0);
    break;
    default:
    printf("Invalid Choice\n");
    printf("Try Again\n");
    main();
  }
}
getch();
  return 0;
}
