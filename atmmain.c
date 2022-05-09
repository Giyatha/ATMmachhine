#include<stdio.h>
#include<stdlib.h>
#include"headerfile.h"

int main()
{
int anothertrans;
  choice();


  printf("DO YOU WANT TO PERFORM ANOTHER TRANSACTION? \n");
  printf("1-yes. \t 2- no.\n\n");
  scanf("%d",&anothertrans);
  if(anothertrans != 1){
    printf("...THANK YOU FOR YOUR SERVICE...");
  };
 choice();

  return 0;
}