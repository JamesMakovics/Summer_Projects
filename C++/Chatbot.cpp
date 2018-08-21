/*
* A simple chat bot to learn how to C++s
*/
#include <stdio.h>
//#include <boost/algorithm/string.hpp>

int getColor(void){
  char color[20];
  printf("What's your favorite color?: ");
  fgets(color,20,stdin);
  if(color == "blue" || color == "red" || color == "yellow")
    printf("%s", color, ", is a cool color.");
  else
    printf("%s", color, ", I've never heard that color.");

  return 0;
}

int getFavoriteProgrammingLanguage(void){
  char language[20];
  printf("What's your favorite programming language?: ");
  fgets(language,20,stdin);
  if(language == "C++")
    printf("%s",language, ", is my favorite language too!");
  else
    printf("%s",language, ", have you heard of C++?");
  return 0;
}

int main(void){
  char name[20];
  printf("Hello! What's your name?: ");
  fgets(name,20,stdin);
  printf("Hello, %s", name);
  getColor();
  getFavoriteProgrammingLanguage();
  return 0;
}
