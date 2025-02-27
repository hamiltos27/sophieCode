#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	Author: Sophie Hamilton
	Course: CS125
	Assignment: Homework 5 - Functional Binary Helper Tool
	File Name: hw5_sophie_hamilton.c
	Resources: Professor Simcox's Lecture Slides, Previous Assignments By Me, Google Examples
	Date: 02/09/2025
*/

void xor (int one, int two)
{
  //XOR Function (Exclusive OR) 
  printf("num1^num2 = %u\n" , one ^ two);
  return;
}




void or (int one, int two)
{
  //OR Function
  printf("num1|num2 = %u\n" , one | two);
  return;
}




void and (int one, int two)
{
  //AND Function
  printf("num1&num2 = %u\n" , one & two);
  return;
}




void complement (int one, int two)
{
  //2's Complement Function
  printf("~num1 + 1 = %u\n" , ~one + 1);
  printf("~num2 + 1 = %u\n" , ~two + 1);
  return;
}



int main()
{
  int quit = 1;
  int num1 = 0;
  int num2 = 0;
  int menu = 0;
  
  printf("Hello user. Please enter an integer!\n");
  scanf("%d" , &num1);
  
    
  printf("Please enter one more integer!\n");
  scanf("%d" , &num2);
    
  while (quit == 1)
  {
    printf("Please enter 1 for XOR, 2 for OR, 3 for AND, 4 for 2's Complement, and 5 to change numbers.\n");
    scanf("%d" , &menu);
    
    switch (menu)
    {
    case 1:
      //XOR Function
      printf("You selected 'XOR'. Now performing XOR:\n");
      xor(num1 , num2);
      printf("Please enter 1 if you want to return to the menu. Enter 0 if you would like to quit.\n");
      scanf("%d" , &quit);
      (quit == 0) ? printf("Bye.\n") , (quit = 0)
                  : (quit = 1);
      break;
    case 2:
      //OR Function
      printf("You selected 'OR'. Now performing OR:\n");
      or(num1 , num2);
      printf("Please enter 1 if you want to return to the menu. Enter 0 if you would like to quit.\n");
      scanf("%d" , &quit);
      (quit == 0) ? printf("Bye.\n") , (quit = 0)
                  : (quit = 1);
      break;
    case 3:
      //AND Function
      printf("You selected 'AND'. Now performing AND:\n");
      and(num1, num2);
      printf("Please enter 1 if you want to return to the menu. Enter 0 if you would like to quit.\n");
      scanf("%d" , &quit);
      (quit == 0) ? printf("Bye.\n") , (quit = 0)
                  : (quit = 1);
      break;
    case 4:
      //2's Compliment Function
      printf("You selected '2's Complement'. Now performing 2's Complement:\n");
      complement(num1 , num2);
      printf("Please enter 1 if you want to return to the menu. Enter 0 if you would like to quit.\n");
      scanf("%d" , &quit);
      (quit == 0) ? printf("Bye.\n") , (quit = 0)
                  : (quit = 1);
      break;
    case 5:
      //Edit Numbers
      printf("Please enter an integer!\n");
      scanf("%d" , &num1);
      
      printf("Please enter another integer!\n");
      scanf("%d" , &num2);
      quit = 1;
      break;
    }//end of switch
  }//end of game
}