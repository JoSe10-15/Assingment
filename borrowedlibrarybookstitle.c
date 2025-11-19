//books borrowed daily

/*
Name: Joseph Mokua
Reg No: PA106/G/28832/25
Description: C file keeping track of the titles of books borrowed daily
*/

#include <stdio.h>

int main() {
  FILE * fptr;
  char titlename;
  
  //create file
  fptr=fopen("borrowed_books.txt","w");
  
  if (fptr==NULL){
  printf("Error.File couldn't be created");
  }
  //get user's input
  printf("The title of the book borrowed\n:",titlename);
  scanf("%c",&titlename);
  
  //writing to file
  fprintf(fptr, "%c\n",titlename);
  
  fclose(fptr);
  printf("Text has been successfully updated\n");
return 0;
}
    