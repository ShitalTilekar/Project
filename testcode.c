/*****************************************************************************
 * Copyright (C) Shital Kisan Tilekar tilekarsk15.it@coep.ac.in
 *
 * This program(newmath) is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>. 
 *****************************************************************************/#include<stdio.h>
#include "formulaes.h"
#include<stdlib.h>
void waita() {
	printf("Press any key to continue:");
	getchar();
	getchar();
}
void printmenu() {
	printf("\n*********************MENU**************************************************\n"
		"\t1. square root           \t11. round()\n"
		"\t2. remainder             \t12. abs()function for integer\n"    
		"\t3. absolute value	    \t13. fmax() function\n"\
		"\t4. ceil function	    \t14. fmin() function\n"\
		"\t5. floor function        \t15. fdim() function\n"\
		"\t6. exp() function	    \t16. roundf() function\n"\
		"\t7. hypotenuse fun        \t17. lround() function\n"\
		"\t8. cube root function    \t18. polynomial addition\n"\
		"\t9. power function        \t19. polynomial subtraction\n"\
		"\t10. trunc() function     \t20. div_t1 function\n"\
		"\t21.ldexp() function      \t22. exp2()function\n"\
		"\t23.tgamma()fuction	    \t24. factorial function.\n"\
		"\t25.square function       \t26. cube function\n"\
		"\t27.dec_bin() conversion. \t28.bin_dec()conversion\n"\
		"\t29.decimal_octal()	    \t30.octal_decimal\n"
		"\t31.binary_octal()	    \t32.octal_binary()conversion\n"
		"\t33.binary_hex()          \t34.hex_binary()conversion\n"\
		"\t\t\t\t35.exit()\n\n"\
		"**************************************************************************\n");
}
void printmenu1() {
	printf("\n***************************Main Menu*************************\n"\
	"\t\t1. Read Manual\n"\
	"\t\t2. Enter in Math.h functions\n"\
	"\t\t3. exit\n\n"\
	"********************************END************************************\n");
}
int main()
{
	int choice,  res,  no1, no2, ch;
	double n, m, s1, s2, res1, ans, val, num;
	float x, y;
	double result = 0, n1 = 0, fradecimal;
	long y1;
	char c;
	char frabinary[100], hexa[MAX];
	long int binaryval;
	div_t1 temp;
	poly * poly1, * poly2, * poly3;
	FILE *fp;
	printf("\n\n....NEW USER FIRST READ THE MANUAL TEXT FILE TO UNDERSTANS THE FUNCTIONS USAGE....\n\n");
	while(1) {
		printmenu1();
		printf("Enter your choice\n");
		scanf("%d", &ch);
		switch(ch) {
			case 1:
			
				fp = fopen("Manual.txt", "r");
				if(!fp)
					printf("Cannot open file\n");
				while((c = fgetc(fp) )!= EOF)
					printf("%c", c);
					fclose(fp);
				break;
			case 2:
				while(1) {
					printmenu();
					printf("Enter your choice\n");
					scanf("%d" ,&choice);
					switch(choice) {
						case 1:
							printf(".....sqrt() function finds the square root of a number.....\n");	
							printf("Enter your number:\n");
							scanf("%lf", &n);
							m = sqrt(n); //square root
							if( m == 0) {
								printf(" You entered negative number\n");
								break;				
							}
							printf("square root is %.3lf\n", m);
							waita();
							break;
						case 2:
							printf(".....mod() finds remainder when one number is divided 									by 2nd 	number.....\n"); 
						
							printf("enter the number to be divided :\t\n");
							scanf("%lf",&s1);
							printf("enter the divisor:\t\n");
							scanf("%lf",&s2);
							ans = fmod(s1, s2); //remainder
							printf("remainder is : %lf\n", ans);
							waita();
							break;
						case 3:
							printf(".....fabs()  finds the absolute value of floating 									point number.....\n");
						
							printf("Enter the number to find the absolute value\n");
							scanf("%lf", &val);
							res1 = fabs(val);  //absolute value
							printf("The absolute value of %lf is %lf\n", val, res1);
							waita();
							break;
						case 4:
							printf(".....ceilx() function finds ceil value of a 									number.....\n");	
							printf("Enter the value\n");
							scanf("%lf", &val);
							ans = ceilx(val); //ceil function
							printf("Value=%lf\n", ans);
							waita();
							break;   
 	
						case 5:
							printf(".....floorx() function finds floor value of a 										number.....\n");	
							printf("Enter the value\n");
							scanf("%lf", &val);
   							ans = floorx(val); //floor function
							printf("Value=%lf\n", ans);
							waita();
							break;
						case 6:
							printf(".....expoential() function finds expoential value of a 									number 	i.e. e^x.....\n");
							printf("Enter the value of x\n");
    							scanf("%lf", &n);
   						        printf("e^x = %lf\n", exponential(n)); //exponential function
							waita();
							break;
						case 7:
							printf(".....hypot()finds the value of hypotenuse when two 									sides are given.....\n");
							
							printf("Enter sides: \n");
							scanf ("%lf %lf",&s1,&s2);
							printf("Hypotenus of %f %f is: %f\n", s1, s2,hypot(s1,s2)); 								//hypotenuse function
							waita();
							break;
						case 8: 
							printf(".....cbrt() finds the cube root of proper number i.e. 									cbrt(8)= 2.....\n"); 
						 
							printf("enter the number to find the cube root\n");
 							scanf("%lf",&n1);
 							if(n1 < 0) {
 	
 								 printf("enter only +ve integer value\n");
						  		 waita();
 								 break;
 							}
 							result = cbrtx(n1); //cube root function
 							if(result)
 								 printf("cube root of %lf is %lf\n",n1,result);
 								else {
								printf("not a proper value for finding the cube 										root\n");
								waita();
 								break;
							}	
							
							waita();
							break;
						case 9:
							printf(".....pow() function finds the x^y power.....\n");
							printf("Enter the number and the power\n");
							scanf("%lf%lf", &s1, &s2);
							res1 = Pow(s1, s2); //power function
							printf("The %lf^%lf is %lf\n", s1, s2, res1);
							
							waita();
							break;
						case 10:
							printf(".....trunc() function truncates the floating 									points.....\n");	
							printf("Enter the value for truncating\n");
							scanf("%lf", &s1);
							res1 = trunc(s1); // truncating a number
							printf("The value after truncating is %lf\n", res1);
							
							waita();
							break;
						case 11:
							printf(".....round() function rounds up a floating point 									number..... \n");
							printf("Enter the value for rounding\n");
							scanf("%lf", &s1);
							res1 = round(s1); //rounding a number
							printf("The value after rounding is %lf\n", res1);
							
							waita();
							break;
						case 12:
							printf(".....abs() function finds absolute value of integer 									number.....\n");
							printf("Enter the integer number to find the absolute value\n");
							scanf("%lf", &n);
							if(n - (int)n == 0) {
								res = abs(n);  //absolute value
								printf("The absolute value of %lf is %d\n", n, res);
								waita();
								break;
							}
							else {
								printf("Enter integer number\n");
								waita();
								break;
							}
							waita();
							break;
						case 13:
							printf(".....fmax() function finds maximum between two 									numbers.....\n");	
							printf("Enter two numbers to find maximun number\n");	
							scanf("%lf%lf", &s1, &s2);
							res1 = fmax(s1,s2);
							printf("The max number is %f\n",res1);
							waita();
							break;
						case 14:
							printf(".....fmin() function finds minimum between two 									numbers.....\n");	
							printf("Enter two numbers to find minimum number\n");	
							scanf("%lf%lf", &s1, &s2);
							res1 = fmin(s1,s2);
							printf("The min number is %f\n",res1);
							waita();
							break;
						case 15:
							printf(".....fdim()finds +ve difference bet^n 2 no's & if fails 									it returns 0.....\n"); 
						
							printf("Enter two numbers to find difference of two numbers\n");
							scanf("%lf%lf", &s1, &s2);
							res1 = fdim(s1,s2);
							if(res1 == 0) {
								printf("This functions returns 0 when  first number is 										less than or equal to second number\n");
								waita();
								break;
							}		
							printf("The positive Difference  is %f\n",res1);
							waita();
							break;
						case 16:
							printf(".....roundf() function rounds up a floating 										value.....		\n");	
							printf("Enter the value for rounding\n");
							scanf("%f", &x);
							y = roundf(x);
							printf("The value after rounding is %f\n", y);
							waita();
							break;
						case 17:
							printf(".....lround() function rounds up a long value.....\n");
							printf("Enter the value for rounding\n");
							scanf("%lf", &n);
							y1 = lround(n);
							printf("The value after rounding is %li\n", y1);
							waita();
							break;
						case 18:
							printf(".....add_poly() function adds two polynomials.....\n");
							printf("\nCreate 1st expression\n");
							create(&poly1);
							printf("\nStored the 1st expression");
							show(poly1);
		
							printf("\nCreate 2nd expression\n");
							create(&poly2);
							printf("\nStored the 2nd expression");
							show(poly2);
						
							add_poly(&poly3, poly1, poly2);
							show(poly3);
							waita();
							break;
						case 19:
							printf(".....sub_poly() function subtract two 											polynomials.....		\n");	
							printf("\nCreate 1st expression\n");
							create(&poly1);
							printf("\nStored the 1st expression");
							show(poly1);	
							printf("\nCreate 2nd expression\n");
							create(&poly2);
							printf("\nStored the 2nd expression");
							show(poly2);
	
							sub_poly(&poly3, poly1, poly2);
							show(poly3);
							waita();
							break;
						case 20:
							printf(".....division() function givesquotient and remainder 									after division.....\n");
							printf("Enter divident\n");
							scanf("%d", &no1);
							printf("Enter divisor\n");
							scanf("%d", &no2);
							temp = division(no1, no2);
							printf("quotient=%d\tremainder=%d\n", temp.quot, temp.rem);
							waita();
							break;			
						case 21:
							printf(".....ldexp() function returns value * 									2^expoential.....		\n");
							printf("Enter the value\n");
							scanf("%lf", &n);
							printf("Enter the integer exponent\n");
							scanf("%d", &no1);
							m = ldexp(n, no1);
							printf("value=%lf\n", m);	
							waita();
							break;;
						case 22:
							printf(".....exp2() function returns 2^expoential.....\n");
							printf("Enter the expoential\n");
							scanf("%lf", &n);
							m = exp2(n);
							printf("exp2(%lf)=%lf\n", n, m);
							waita();
							break;
						case 23:
							printf(".....tgamma() fuction calculates gamma value.....\n");
							printf("Enter the number to find gamma value\n");
							scanf("%lf", &num);
							if( num <= 0) {
								printf("Gamma of negative number and 0 is not 										defined		\n");	
								waita();
								break;
							}
							ans = tgamma(num);
							printf("gamma(%lf)=%lf\n", num, ans);
							waita();
							break;			
						case 24:
							printf(".....fact() function returns factorial of a 										number.....		\n");	
							printf("Enter number to find factorial\n");
							scanf("%lf", &n);
							ans = fact(n);
							printf("The factorial of %lf is %lf\n", n, ans);
							waita();
							break;
						case 25:
							printf(".....square() function calculates square of a 									number.....\n");	
							printf("Enter number to find square of entered number\n");
							scanf("%lf", &n);
							ans = square(n);
							printf("The square of %lf is %lf\n",n, ans);
							waita();
							break;
						case 26:
							printf(".....cube() function calculates cube of a 									number.....		\n");	
							printf("Enter number to find cube of a entered number\n");
							scanf("%lf", &n);
							ans = cube(n);
							printf("The cube of %lf is %lf\n",n, ans);
							
							waita();
							break;
						case 27:
							printf("dec_bin() function converts decimal number into 								binary			\n");
							printf("Enter any fractional Decimal number\n");
							scanf("%lf", &fradecimal);
							printf("eduivalent binary value is %lf\n",dec_bin(fradecimal));
							waita();
							break;
						case 28:
							printf("bin_dec() function converts binary number into 								decimal 		\n");
							printf("Enter any fractional Binary number\n");
							scanf("%s", frabinary);
							printf("eduivalent decimal value is %lf\n",bin_dec(frabinary));
							waita();
							break;
						case 29:
							printf("This fun. converts decimal number to octal number\n");
							printf("Enter a decimal number:\n ");
       							scanf("%d", &no1);
       							printf("%d in decimal = %d in octal\n", no1, 									decimal_octal(no1));	
							waita();
							break;
						case 30:
							printf("This fun. converts octal number to decimal number\n");
							printf("Enter a octal number:\n ");
       							scanf("%d", &no1);
       							printf("%d in octal = %d in decimal\n", no1, 									decimal_octal(no1));	
							waita();
							break;
						case 31:
							printf("This fun. converts binary number to octal number\n");
							printf("Enter a binary number:\n ");
       							scanf("%d",&no1);
        						printf("%d in binary = %d in octal\n", no1, binary_octal(no1));
							waita();
							break;
						case 32:
							printf("This fun. converts octal number to binary number\n");
							printf("Enter a octal number:\n ");
        						scanf("%d",&no1);
        						printf("%d in octal = %d in binary\n",no1, octal_binary(no1));
							waita();
   
							break;
						case 33:
							printf("This function converts binary into hex number\n");
							printf("Enter the binary number:\n ");
    							scanf("%ld", &binaryval);
    
    							printf("Equivalent hexadecimal value: %lX\n", 									binary_hex(binaryval));
							waita();
							break;
						case 34:
							printf("This function converts hex into binary number\n");
							printf("Enter the value for hexadecimal\n ");
    							scanf("%s", hexa);
   							hex_binary(hexa);
							waita();
							break;
						case 35:
							return 0;
						default:
							printf(".....wrong choice.....\n");
					}	
				}	
			case 3:	
				return 0;
			default:
				printf("Invalid Choice\n");
			}	
			
		} 
		return 0;		
	}		
