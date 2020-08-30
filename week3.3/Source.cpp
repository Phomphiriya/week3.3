#include<stdio.h>
int main()
{
	float x,k,y;
	printf("Body mass index calculator");
	printf(" \nEnter your weight(Kg) : ");
	scanf_s("%f", &x);
	printf("Enter your height(m) : ");
	scanf_s(" %f", &y);
	k = x/(y*y);
	printf("BMI = %.2f", k);
	return 0;
}