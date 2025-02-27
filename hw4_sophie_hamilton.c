#include <stdio.h>
#include <stdlib.h>

/*
	Author: Sophie Hamilton
	Course: CS125
	Assignment: Homework 4: Autopilot Sim Game
	File Name: hw4_sophie_hamilton.c
	Date: 02/02/2025
*/

int main()
{
  int gameDuration = 1;
  
  while (gameDuration == 1)
  {
    int flightPathDistance = rand () % (70 - 50 +1) + 50;
    int marginOfError = 5;
    int elevation = 38000;
    int secondsToDestination = 10;
    int autoPilot = 0;
    int increase;
    int decrease;
    int newDistance = flightPathDistance;
  
    printf("Hello Pilot. You have entered the Autopilot Sim Game.\n");
    sleep(1);
    printf("Your current elevation is %d feet.\n" , elevation);
    printf("You are %d seconds from your destination.\n" , secondsToDestination);
    
    while (secondsToDestination > 0)
    {
      int action = rand () % (25 - 1 + 1) + 1;
      
      printf("Your current distance from the flight path is %d feet.\n" , newDistance);
      printf("TIP: If the current distance is greater than what you would like, it is a good idea to correct the path.\n");
      printf("TIP: If the current distance is less than what you would like, it is a good idea to stay on the path.\n");
      printf("Would you like to correct the plane path or stay on the current one? Please enter 0 to correct, and 1 to stay.\n");
      scanf("%d" , &autoPilot);
      
      switch (autoPilot)
      {
      case 0:
        //autoPilot = 0
        //decrease = newDistance - action;
        newDistance = newDistance - action;
        secondsToDestination -- ;
        sleep(1);
        break;
      case 1:
        //autoPilot = 1
        //increase = newDistance + action;
        newDistance = newDistance + action;
        secondsToDestination -- ;
        sleep(1);
        break;
      } // switch statement
    }//while seconds to destination > 0 
    
    printf("You have used up your game ticks. You are %d feet from the flight path.\n" , newDistance);
    (newDistance > 5 | newDistance < -5) ? printf("You are too far away. You lose. Enter 1 to play again.\n")
                                        : printf("You reached the flight path! You win! Enter 1 to play again.\n");
    scanf("%d" , &gameDuration);
  }//game duration while loop
}// int main()
