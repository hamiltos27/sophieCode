/*
	Author: Sophie Hamilton
	Course: CS125
	Assignment: Homework 3
	File Name: hw3_sophie_hamilton.c
	Date: 01/26/2025
  Refrences: Professor Simcox Lectures
*/

#include <stdio.h>

int main()
{
  float hoursWorked = 0;
  float employeeID = 0;
  float hourlyRate = 0;
  int employeeType = 0;
  int dollars = 0;
  float perWeek = 0;
  float perYear = 0;
  
  printf("Hello employee! Please enter how many hours you have worked.\n");
  scanf("%f" , &hoursWorked);
  
  if (hoursWorked > 60.0)
  {
    printf("Your hours are above 60.0, please talk to the manager.\n");
  }
  else
  {
    printf("Please enter your employee ID# (1,000 - 1,000,000).\n");
    scanf("%f" , &employeeID);
    
    if (employeeID < 1000 || employeeID > 1000000)
    {
      printf("This is not an acceptable employee ID#. Please speak to the manager.\n");
    }
    else
    {
      printf("Please enter your hourly rate.\n");
      scanf("%f" , &hourlyRate);
    
      if (hourlyRate > 100.0)
      {
        printf("This hourly rate is not acceptable, please talk to the manager.\n");
      }
      else
      {
        printf("What type of employee are you? Please enter 1 for 'Hourly' and 2 for 'Salary'.\n");
        scanf("%d" , &employeeType);
      
        switch (employeeType)
        {
        case 1:
          printf("You entered 1 for 'Hourly Employee'.\n");
          break;
        case 2:
          printf("You entered 2 for 'Salary Employee'.\n");
          break;
        default:
          printf("This type of employee does not exist. Please speak to the manager.\n");
        }
        
        sleep (1);
        printf("Hello There:\n");
        sleep(1);
        printf("ID# %.1f \n" , employeeID);
        sleep(1);
        printf("Hourly Rate: %.1f \n" , hourlyRate);
        sleep(1);
        printf("Employee Type %d \n" , employeeType);
        sleep(1);
        printf("Number of Hours Worked: %.1f \n" , hoursWorked);
        
        float done = 0;
        printf("If you are done, please enter 1. However if you would like more options, please enter 2.\n");
        scanf("%f" , &done);
        
        if (done == 1)
        {
          printf("Bye, have a good day!\n");
        }
        else
        {
          while (done == 2)
          {
            int menu = 0;
            
            printf("Please enter 1 if you would like to edit information. The empoyee ID# cannot be changed...\n");
            sleep(1);
            printf("Please enter 2 if you would like to see your current pay based on the number of hours worked, hourly rate, and employee type...\n");
            sleep(1);
            printf("Please enter 3 if you would like to speak to the manager...\n");
            sleep (1);
            printf("Please enter 4 if you would like to view the summary again.\n");
            sleep (1);
            printf("Enter your number choice here:\n");
            scanf("%d" , &menu);
            
            switch (menu)
            {
            case 1:
              //edit info
              printf("Please re-enter how many hours you have worked, or change the number you previously entered.\n");
              scanf("%f" , &hoursWorked);
              
              if (hoursWorked > 60.0)
              {
                printf("Your hours are above 60.0, please speak to the manager.\n");
              }
              else
              {
                printf("Please re-enter your hourly rate, or change the number you previously entered.\n");
                scanf("%f" , &hourlyRate);
                
                if (hourlyRate > 100.0)
                {
                  printf("This hourly rate is not acceptable, please talk to the manager.\n");
                }
                else
                {
                  printf("Please re-enter what kind of employee you are, or change what you previously entered.\n");
                  printf("Enter 1 for 'Hourly' and 2 for 'Salary'.\n");
                  scanf("%d" , &employeeType);
                  
                  switch (employeeType)
                  {
                  case 1:
                    printf("You entered 1 for 'Hourly Employee'.\n");
                    break;
                  case 2:
                    printf("You entered 2 for 'Salary Employee'.\n");
                    break;
                  default:
                    printf("This type of employee does not exist. Please speak to the manager.\n");
                  }
                  
                  sleep(1);
                  printf("Hello there:\n");
                  sleep(1);
                  printf("ID# %.1f \n" , employeeID);
                  sleep(1);
                  printf("Hourly Rate: %.1f \n" , hourlyRate);
                  sleep(1);
                  printf("Employee Type %d \n" , employeeType);
                  sleep(1);
                  printf("Number of Hour Worked: %.1f \n" , hoursWorked);
                  sleep(1);
                  
                  printf("If you are done, please enter 1. However if you would like more options, please enter 2.\n");
                  scanf("%f" , &done);
                  
                  (done == 1) ? printf("Bye, have a good day!\n") , (done = 1)
                              : (done = 2);
                }
              }
              break;
            case 2:
              //view current pay rate
              perWeek = (hoursWorked * hourlyRate);
              perYear = (perWeek * 52);
              printf("Would you like to view your current pay rate in exact or whole dollars?\n");
              printf("Please enter 1 for exact dollars, and 2 for whole dollars.\n");
              scanf("%d" , &dollars);
              
              switch (dollars)
              {
              case 1:
                if (employeeType == 1)
                {
                  printf("You make %.2f dollars per week.\n" , perWeek);
                  sleep (1);
                  printf("If you are done, please enter 1. However if you would like more options, please enter 2.\n");
                  scanf("%f" , &done);
                  
                  (done == 1) ? printf("Bye, have a good day!\n") , (done = 1)
                              : (done = 2);
                }
                else
                {
                  printf("You make %.2f dollars per year.\n" , perYear);
                  sleep(1);
                  printf("If you are done, please enter 1. However if you would like more options, please enter 2.\n");
                  scanf("%f" , &done);
                  
                  (done == 1) ? printf("Bye, have a good day!\n") , (done = 1)
                              : (done = 2);
                }
                break;
              case 2:
                if (employeeType == 1)
                {
                  printf("You make %.0f dollars per week.\n" , perWeek);
                  sleep(1);
                  printf("If you are done, please enter 1. However if you would like more options, please enter 2.\n");
                  scanf("%f" , &done);
                  
                  (done == 1) ? printf("Bye, have a good day!\n") , (done = 1)
                              : (done = 2);
                }
                else
                {
                  printf("You make %.0f dollars per year.\n" , perYear);
                  sleep(1);
                  printf("If you are done, please enter 1. However if you would like more options, please enter 2.\n");
                  scanf("%f" , &done);
                  
                  (done == 1) ? printf("Bye, have a good day!\n") , (done = 1)
                              : (done = 2);
                }
                break;
              }
              break;
            case 3:
              // Speak to manager
              printf("You chose to speak to the manager.\n");
              sleep(1);
              printf("You are currently in line to speak to the manager.\n");
              sleep(1);
              printf("If you are done, please enter 1. However if you would like more options, please enter 2.\n");
              scanf("%f" , &done);
              
              (done == 1) ? printf("Bye, have a good day!\n") , (done = 1)
                          : (done = 2);
              break;
            case 4:
              // Summary
              printf("Hello there:\n");
              sleep(1);
              printf("ID# %.1f \n" , employeeID);
              sleep(1);
              printf("Hourly Rate: %.1f \n" , hourlyRate);
              sleep(1);
              printf("Employee Type %d \n" , employeeType);
              sleep(1);
              printf("Number of Hours Worked: %.1f\n" , hoursWorked);
              sleep(1);
              
              printf("If you are done, please enter 1. However if you would like more options, please enter 2.\n");
              scanf("%f" , &done);
              
              (done == 1) ? printf("Bye, have a good day!\n") , (done = 1)
                          : (done = 2);
              break;
            }
            //switch code ends
          }
          //while statement ends here
        }
      }
    }
  }
}
