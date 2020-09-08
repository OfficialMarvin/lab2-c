  
// Author: Marvin Jakobs mkj5388@psu.edu
// Collaborator: Brian Chettle bjc5969@psu.edu
// Collaborator: Fletcher Henneman fdh5031@psu.edu
// Collaborator: Andrew Ou ajo5499@psu.edu
// Collaborator: Michael Sullivan mls6888@psu.edu

#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>


int main(void) {
  char *letter = "F";
  char *a = readline("Enter your CMPSC 131 grade: ");
  double grade = atof(a);
  if (grade >= 93.0 ) {
  letter = "A";
  }
  else if (grade >= 90.0 ) {
  letter = "A-";
  }
  else if (grade >= 87.0 ) {
  letter = "B+";
  }
  else if (grade >= 83.0 ) {
  letter = "B";
  }
  else if (grade >= 80.0 ) {
  letter = "B-";
  }
  else if (grade >= 77.0 ) {
  letter = "C+";

  }
  else if (grade >= 70.0 ) {
  letter = "C";
  }
  else if (grade >= 60.0 ) {
  letter = "D";
  }
  else if (grade < 60.0 ) {
  letter = "F";
  }
  printf("Your letter grade for CMPSC 131 is %s.\n",letter);
  return 0;
}
