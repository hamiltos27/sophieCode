#include <stdio.h>

/*
	* File Name: hw1_sophie_hamilton
	* Author: Sophie Hamilton
	* Assignment: Homework 1
	* Date: 01/12/2025
	* Refrences: Google & TA: Andre Leppert
*/

int main()
{
	float numerator = 0;
	float denominator = 0;
	float answer = 0;

	printf("Hello user! Let's do some division. Please enter a numerator value: \n");
	scanf("%f", &numerator);

	printf("Awesome. Now please enter a value for the denominator value: \n");
	scanf("%f", &denominator);

	if (denominator == 0)
	{
		printf("Oh no! Please enter a different denominator value. Any number divided by zero results in an undefined value. \n");
	}
	else
	{
		answer = numerator / denominator;
		printf("Numerator: %.2f; Denominator: %.2f; Answer: %.2f" , numerator, denominator, answer);
	}
}
