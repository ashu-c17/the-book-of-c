#include <stdio.h>

int main (int argc, char* argv[] ){
  /* Write a program that reads the month number (1-12) and prints its equivalent name (January for 1, February for 2, and so on).
  Input: One integer on a line, e.g. 4
  Output: Correponding name of month, e.g. April
  Please do not use abbreviations. First character is capital, rest are small case,  no trailing newline
  In case of invalid input, output should be "Invalid" (without quotes) 
  Output is case sensitive */
  int month=0;
  
  
  scanf("%d",&month);
  if(month == 1){
     printf("January");
  }else if(month == 2){
    printf("February");
  }else if (month == 3);
    printf("March");
  
  
  
  
  
  
  
  return 0
}
