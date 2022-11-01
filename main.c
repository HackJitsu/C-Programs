/*
  Have the user enter a line of input.
 Scan the line of input using getchar looking for a numerical dollar amount.
Print out each dollar amount that you find on the line.
  */

#include <stdio.h>

int main() {
  //declare variables
  char amount[200], ch;
  int i=0, j;
  printf("Enter input string:");
  
  while((ch = getchar())!='\n') {
    amount[i] = ch;
    i++;
  }
  j = 0;
  while(j<i){

    if(amount[j]=='$'){
      printf("\n");
      while(amount[j]!=' ' && j < i) {
        printf("%c", amount[j]);
        j++;
      }
    }
    j++;
  }
  return 0;
}