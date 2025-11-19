//Results binary file

/*
Name: Joseph Mokua
Reg No: PA106/G/28832/25
Description: C file storing the exam results of university students in a binary file 
*/

#include <stdio.h>

int main() {
  FILE * fptr;
  char name, co;
  int regno,marks;
  //create file
  fptr=fopen("results.dat","b");
  
  if (fptr==NULL){
  printf("Error.File couldn't be created");
  return 1;
  }
  //get user's input
  printf("Name:");
  scanf("%s",&name);
  printf("Registration number:");
  scanf("%d",&regno);
  printf("Results =");
  scanf("%d",&marks);
  //writing to file
  fprintf(fptr, "%s\n",name);
  fprintf(fptr,"Reg:%d\tResults:%d\n",regno,marks);
  
  //get from file
  while((co=fgetc(fptr)) !=EOF){
     putchar(co);
  }
  
  fclose(fptr);
  printf("Text has been successfully updated\n");
return 0;
}
    