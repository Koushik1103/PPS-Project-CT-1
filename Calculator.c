#include <stdio.h>
#include <math.h>

int main()
{

int option, calc_option, temp_calc_option;
float add1, add2, sum;
float sub1, sub2, diff;
double mult1, mult2, prod;
double div1, div2, quotient;
int rem1, rem2, remainder;
double num1, pwr_val; int pwr;
float num2, sqrroot;
float cel, fah, kel;

printf("Pick an option\n1.Arithmetic Calculator\n2.Temperature Conversion Calculator\n");
scanf("%d",&option);

if (option == 1) {
	printf("Welcome to Arithmetic Calculator!");
	printf("Enter your choice\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division(Quotient)\n5.Division(Remainder)\n6.Power\n7.Square Root\n");
	scanf("%d",&calc_option);
	}
	
	if (calc_option == 1) {
		printf("Addition\nEnter two numbers:\n");
		scanf("%f%f", &add1, &add2);
		sum = add1+add2;
		printf("The Sum is %.4f", sum);
		}
		
	else if (calc_option == 2) {
		printf("Subtraction\nEnter two numbers:\n");
		scanf("%f%f", &sub1, &sub2);
		diff = sub1-sub2;
		printf("The Difference is %.4f", diff);
		}
	
	else if (calc_option == 3) {
		printf("Multiplication\nEnter two numbers:\n");
		scanf("%lf%lf", &mult1, &mult2);
		prod = mult1*mult2;
		printf("The Product is %.4lf", prod);
		}
		
	else if (calc_option == 4) {
		printf("Division(Quotient)\nEnter two numbers:\n");
		scanf("%lf%lf", &div1, &div2);
		quotient = div1/div2;
		printf("The Quotient is %.4lf", quotient);
		}
		
	else if (calc_option == 5) {
		printf("Division(Remainder)\nEnter two numbers:\n");
		scanf("%d%d", &rem1, &rem2);
		remainder = rem1%rem2;
		printf("The Remainder is %d", remainder);
		}
		
	else if (calc_option == 6) {
		printf("Power\nEnter a number and power:\n");
		scanf("%lf%d", &num1, &pwr);
		pwr_val = pow(num1, pwr);
		printf("The value is %.4lf", pwr_val);
		}
		
	else if (calc_option == 7) {
		printf("Square Root\nEnter a number:\n");
		scanf("%f", &num2);
		sqrroot = sqrt(num2);
		printf("The Square of %f is %.4f", num2, sqrroot);
		}
		
	else {
		printf("Choice Entered is wrong!");
		}
		
if (option == 2) {
	printf("Welcome to Temperature Conversion Calculator!");
	printf("Enter your choice\n1.Celsius to Fahrenheit\n2.Fahrenheit to Celsius\n3.Celsius to Kelvin\n4.Kelvin to Celsius\n5.Fahrenheit to Kelvin\n6.Kelvin to Fahrenheit\n");
	scanf("%d", &temp_calc_option);
	
	if (temp_calc_option == 1) {
		printf("Celsius to Fahrenheit\nEnter Celsius Value:\n");
		scanf("%f", &cel);
		fah = ((((cel*9)/5))+32);
		printf("The Fahrenheit value is %.3f", fah);
		}
		
	else if (temp_calc_option == 2) {
		printf("Fahrenheit to Celsius\nEnter Fahrenheit Value:\n");
		scanf("%f", &fah);
		cel = (((fah-32)*5)/9);
		printf("The Celsius value is %.3f", cel);
		}
		
	else if (temp_calc_option == 3) {
		printf("Celsius to Kelvin\nEnter Celsius Value:\n");
		scanf("%f", &cel);
		kel = cel + 273.15;
		printf("The Kelvin value is %.3f", kel);
		}
		
	else if (temp_calc_option == 4) {
		printf("Kelvin to Celsius\nEnter Kelvin Value:\n");
		scanf("%f", &kel);
		cel = kel - 273.15;
		printf("The Celsius value is %.3f", cel);
		}
		
	else if (temp_calc_option == 5) {
		printf("Fahrenheit to Kelvin\nEnter Fahrenheit Value:\n");
		scanf("%f", &fah);
		kel = (((((fah-32)*5)/9))+273.15);
		printf("The Kelvin value is %.3f", kel);
		}
	
	else if (temp_calc_option == 6) {
		printf("Kelvin to Fahrenheit\nEnter Kelvin Value:\n");
		scanf("%f", &kel);
		fah = (((((kel-273.15)*9)/5))+32);
		printf("The Fahrenheit value is %.3f", fah);
		}
		
	else {
		printf("Choice Entered is wrong!");
		}

	}
	
}
