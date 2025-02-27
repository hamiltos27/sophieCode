#include <stdio.h>

/*
	* File Name: hw2_sophie_hamilton
	* Author: Sophie Hamilton
	* Assignment: Homework 2
	* Date: 01/19/2025
	* Refrences: Google, TA: Andre Leppert, and Professor Simcox
*/

int main()
{
	float ambientTemp = 0;
	float beforeFuel = 0;
	float takeoffTemp = 0;


	printf("Please enter the ambient temperature of the jet (in degrees F): \n");
	scanf("%f", &ambientTemp);


	printf("How many gallons of fuel are present in the jet before warming it up? \n");
	scanf("%f", &beforeFuel);
	
	if (beforeFuel <= 0)
	{
		printf("Oh no! The jet has no fuel. Please fuel it by entering the number of gallons of fuel present in the jet before warming it up.\n");
	}
	else
	{
		printf("What is the required jet temperature (in degrees F) for takeoff? \n");
		scanf("%f", &takeoffTemp);

		if (takeoffTemp <= ambientTemp)
		{
			printf("This temperature is not valid or realistic. Please enter a valid takeoff temperature for the jet. \n");
		}
		else
		{
			printf("Now warming up the jet:\n");
			float newTemp = ambientTemp +3;
      float afterFuel = beforeFuel;
      float iteration = 0;
      
			while (takeoffTemp >= newTemp)
			{
        newTemp += 1.25;
        afterFuel -= 2;
        iteration ++;
				printf("%.2f degrees Fahrenheit...\n" , newTemp);
				sleep (1);
			}
      
      float fuelUsage = beforeFuel - afterFuel;
      
      printf("The jet is now warmed up! It took a total of %.1f seconds.\n" , iteration);
      sleep(1);
      printf("The jet used %.1f gallons of fuel during warmup.\n" , fuelUsage);
      sleep(1);
      printf("There are %.1f gallons of fuel remaining in the jet.\n" , afterFuel);
		}
	}
}
