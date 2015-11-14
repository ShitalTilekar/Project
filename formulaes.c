/*****************************************************************************
 *  This file is part of newmath project.
 *
 *  This is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  newmath is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with newmath.  If not, see <http://www.gnu.org/licenses/>.
*****************************************************************************/


#include<stdio.h>
#include<stdlib.h>
#include "formulaes.h"
// mod() function
double fmod(double dividend, double divisor) {
	double questient, remainder;
	int trick;
	if(divisor == 0.0) {
		printf("we cannot divide by zero\n");
		return 0;
	}
	if(divisor < 0.0) { 
		divisor = -divisor;
	}
	if(dividend < 0.0) {
		dividend = -dividend;
	}
	questient = dividend / divisor;
	trick = questient;
	questient = trick;
	remainder = dividend - (questient * divisor);
	if(remainder < 0.0)
		remainder = -remainder;
 	return remainder;
}
// fabs() function
double fabs(double n) {
	if(n < 0)
		return -n;
	else
		return n;
}
// ceil() function
double ceilx(double x) {
	double y;
	y = (int)x;
	if(y < x)  {
        	x = x + 1;
               y = (int)x;
       }
	return y;
}

// floor() function
double floorx(double x) {
	double y;
	y = (int)x;
	if(y > x)  {
        	x = x - 1;
               y = (int)x;
       }
	return y;
}
// exponential function
double exponential(double x)
{	
	int n = 10;
    	double sum = 1.0; // initialize sum of series
     	int i;
    	for(i = n - 1; i > 0; --i) {
       		 sum = 1 + x * sum / i;
 	}
    	return sum;
}
//hypotenuse function
double hypot(double side1, double side2) {
	double sum = 0, hypotenuse;
	side1 = side1 * side1;
	side2 = side2 * side2;
	sum = side1 + side2;
	hypotenuse = sqrt(sum);
	return hypotenuse;
}
// cube root function
double cbrtx(double number) {

	int i;
	double cube= 0;
	for(i = 0; i < MAX_NUMBER; i++)  {
		cube = i * i * i;
   		if(cube == number)
     			return i;
   		else if(cube > number)
     			break;
 	}
 	return 0;
}
// power function
double Pow(double a, double b) {
	if(b < 0)
		return 1 / Pow(a, -b);
	else if(b == 0)
		return 1;
	else if(b == 1)
		return a;
	else
		return a*Pow(a, b-1);
}
// sqrt();
double sqrt(double n) {
	double m, x, y;
	y = 0.0001;
	for(x = 0.0; x < n; x = x + y) {
		if((x * x) > n) {
			x = x - y;
			break;
		}
	}
	return x;
}
//trunc()
double trunc(double no) {
	double answer;
	int d;
	d = (int)no;
	answer = (double) d;
	return answer;	
}
//round()
double round(double no) {
	double answer;
	if(no > 0) 
		answer = (int)(no + 0.5);
	else
		answer = (int)(no - 0.5);
	return answer;	
}
// absolute value of an interger
int abs(int n) {
	if(n < 0)
		return -n;
	else
		return n;
}
//returns the maximum number
double fmax(double a, double b) {
	if(a > b)
		return a;
	else
		return b;
}
//returns minimum number
double fmin(double a, double b) {
	if(a < b)
		return a;
	else
		return b;
}
//fdim returns positive difference between two numbers and if fails it returns 0.
double fdim(double a, double b) {
	if(a < b)
		return 0;
	else
		return (a - b);
}
// this function rounds up a floating point value
float roundf(float no) {
	float answer;
	if(no > 0) 
		answer = (int)(no + 0.5);
	else
		answer = (int)(no - 0.5);
	return answer;	
}
 // this function rounds up double value & return long value
long lround(double no) {
	long answer;
	if(no > 0) 
		answer = (int)(no + 0.5);
	else
		answer = (int)(no - 0.5);
	return answer;	
}
// returns quotient and remainder
div_t1 division(int divident, int divisor) {
	div_t1 temp;
	temp.quot = divident / divisor;
	temp.rem = divident - (temp.quot * divisor);
	return(temp);
}	

//ldexp function returns x*2^exp
double ldexp(double x, int exp) {
	double ans;
	ans = x * Pow(2, exp);
	return ans;
}
//compute 2 raised to the given power
double exp2(double b) {
	if(b < 0)
		return 1 / exp2(-b);
	else if(b == 0.0)
		return 1;
	else if(b == 1.0)
		return 2;
	else
		return 2*exp2(b-1); 
}
//computes gamma function
double tgamma(double n) {
	
	if( n == 0.5)
		return 1.772453851;
	if(n == 1)
		return 1;
	
	n = n-1;
	
	return(fact(n)); 
}
//factorial function
double fact(double n) {
	if(n == 0)
		return 1;
	return (n * fact(n-1));
}

//returns the square of number
double square(double n) {
	n = n * n;
	return(n);
}

//returns the cube of a number		
double cube(double n) {
	n = n * n * n;
	return(n);
}			
//creating polynomial
void create(poly **node) {
	int flag; //A flag to control the menu
	int coeff, pow;
	poly * tmp; //To hold the temporary last address
	tmp = (poly *)malloc(sizeof(poly)); //create the first node
	*node = tmp; //Store the head address to the reference variable
	do {
		//Get the user data
		printf("\nEnter Coeff:");
		scanf("%d", &coeff);
		tmp->coeff = coeff;
		printf("\nEnter Pow:");
		scanf("%d", &pow);
		tmp->pow = pow;
		//Done storing user data
		tmp->next = NULL;
		printf("\nContinue adding more terms to the polynomial list?(Y = 1/N = 0):");//Ask user for continuation
		scanf("%d", &flag);
		if(flag) {
			tmp->next = (poly *)malloc(sizeof(poly)); //Grow the list
			tmp = tmp->next;
			tmp->next = NULL;
		}
	} while(flag);
}
//Prints the Polynomial in user readable format
void show(poly *node) {
	printf("\nThe polynomial expression is:\n");
	while(node != NULL) {
		printf("%dx^%d", node->coeff, node->pow);
		node = node->next;
		if(node != NULL) {
			if(node->coeff < 0)
				printf(" ");
			else
				printf(" + ");
		}
		
	}
	printf("\n");
}

void add_poly(poly **result, poly *poly1, poly *poly2) {
	poly * tmp; //Temporary storage for the linked list
	tmp = (poly*) malloc(sizeof(poly));
	tmp->next = NULL;
	*result = tmp; //Copy the head address to the result linked list

	//Loop while both of the linked lists have value
	while(poly1 && poly2) {
		if (poly1->pow > poly2->pow) {
			tmp->pow = poly1->pow;
			tmp->coeff = poly1->coeff;
			poly1 = poly1->next;
		}
		else if (poly1->pow < poly2->pow) {
			tmp->pow = poly2->pow;
			tmp->coeff = poly2->coeff;
			poly2 = poly2->next;
		}
		else {
			tmp->pow = poly1->pow;
			tmp->coeff = poly1->coeff + poly2->coeff;
			poly1 = poly1->next;
			poly2 = poly2->next;
		}

		//Grow the linked list on condition
		if(poly1 && poly2) {
			tmp->next = (poly *)malloc(sizeof(poly));
			tmp = tmp->next;
			tmp->next = NULL;
		}
	}

	//Loop while either of the linked lists has value
	while(poly1 || poly2) {
		
		tmp->next = (poly *)malloc(sizeof(poly));
		tmp = tmp->next;
		tmp->next = NULL;

		if(poly1) {
			tmp->pow = poly1->pow;
			tmp->coeff = poly1->coeff;
			poly1 = poly1->next;
		}
		if(poly2) {
			tmp->pow = poly2->pow;
			tmp->coeff = poly2->coeff;
			poly2 = poly2->next;
		}
	}

	printf("Addition Complete\n");
}

//subtract two polynomials
void sub_poly(poly **result, poly *poly1, poly *poly2) {
	poly *tmp; //Temporary storage for the linked list
	tmp = (poly*)malloc(sizeof(poly));
	tmp->next = NULL;
	*result = tmp; //Copy the head address to the result linked list

	//Loop while both of the linked lists have value
	while(poly1 && poly2) {
		if (poly1->pow > poly2->pow) {
			tmp->pow = poly1->pow;
			tmp->coeff = poly1->coeff;
			poly1 = poly1->next;
		}
		else if (poly1->pow < poly2->pow) {
			tmp->pow = poly2->pow;
			tmp->coeff = poly2->coeff;
			poly2 = poly2->next;
		}
		else {
			tmp->pow = poly1->pow;
			tmp->coeff = poly1->coeff - poly2->coeff;
			poly1 = poly1->next;
			poly2 = poly2->next;
		}

		//Grow the linked list on condition
		if(poly1 && poly2) {
			tmp->next = (poly *) malloc(sizeof(poly));
			tmp = tmp->next;
			tmp->next = NULL;
		}
	}

	//Loop while either of the linked lists has value
	while(poly1 || poly2) {
		
		tmp->next = (poly *) malloc(sizeof(poly));
		tmp = tmp->next;
		tmp->next = NULL;

		if(poly1) {
			tmp->pow = poly1->pow;
			tmp->coeff = poly1->coeff;
			poly1 = poly1->next;
		}
		if(poly2) {
			tmp->pow = poly2->pow;
			tmp->coeff = poly2->coeff;
			poly2 = poly2->next;
		}
	}

	printf("Subtraction Complete\n");
}

//decimal to binary conversion
double dec_bin(double fradecimal) {
	double frabinary, bfractional = 0.0, dfractional, frafactor = 0.1;
	long int dIntegral, bIntegral = 0;
	long int intfactor = 1, rem, temp, i;

	dIntegral = fradecimal;
	dfractional = fradecimal - dIntegral;
	
	while(dIntegral != 0) {
		rem = dIntegral % 2;
		bIntegral = bIntegral + rem * intfactor;
		dIntegral = dIntegral / 2;
		intfactor = intfactor * 10;
	}
	
	for(i = 1; i<= 6; i++) {
		dfractional = dfractional * 2;
		temp = dfractional;
		bfractional = bfractional + frafactor * temp;
		if(temp == 1)
			dfractional = dfractional -temp;	
		frafactor = frafactor / 10;
	}
	frabinary = bIntegral + bfractional;
	return frabinary;
}
//binary to decimal conversion
double bin_dec(char frabinary[100]) {
	double fradecimal = 0.0, dfractional = 0.0, frafactor = 0.5;
	long int dIntegral = 0, bIntegral = 0, bfractional[MAX];
	long int intfactor = 1, rem = 0, i = 0, k = 0, flag = 0;
 
	while(frabinary[i]) {
		if(frabinary[i] == '.')
			flag = 1;
		else if(flag == 0)
			bIntegral = bIntegral * 10 + (frabinary[i] - 48);
		else
			 bfractional[k++] = frabinary[i] - 48;
		i++;
	}

	
	while(bIntegral != 0) {
		rem = bIntegral % 10;
		dIntegral = dIntegral + rem * intfactor;
		intfactor = intfactor * 2;
		bIntegral = bIntegral / 10;
		
	}
	
	for(i = 0; i< k; i++) {
		dfractional = dfractional + bfractional[i] * frafactor;
		frafactor = frafactor / 2;
	}
	fradecimal = dIntegral + dfractional;
	return fradecimal;
}

/* Function to convert decimal to octal */
int decimal_octal(int n) {

	int rem, i = 1, octal = 0;
	while (n != 0) {
		rem = n % 8;
	        n /= 8;
	        octal += rem * i;
	        i *= 10;
	}
    	return octal;
}

 /* Function to convert octal to decimal */
int octal_decimal(int n) {
	int decimal = 0, i = 0, rem;
    	while (n != 0) {
		rem = n % 10;
        	n /= 10;
        	decimal += rem * Pow(8,i);
        	++i;
    	}
    	return decimal;
}

/* Function to convert binary to octal. */
int binary_octal(int n) {  
	int octal = 0, decimal = 0, i = 0;
    	while(n != 0) {
    		decimal += (n % 10) * Pow(2,i);
        	++i;
        	n /= 10;
   	 }
/*At this point, the decimal variable contains corresponding decimal value of binary number. */
	i = 1;
    	while (decimal != 0) {
    
        	octal += (decimal % 8) * i;
        	decimal /= 8;
        	i *= 10;
    	}
    	return octal;
}

/* Function to convert octal to binary.*/
int octal_binary(int n) {  

	int decimal = 0, binary = 0, i = 0;
    	while (n != 0) {
		decimal += (n % 10) * Pow(8,i);
	        ++i;
        	n /= 10;
    	}
/* At this point, the decimal variable contains corresponding decimal value of that octal number. */
    	i = 1;
    	while(decimal != 0) {
   
        	binary += (decimal % 2) * i;
        	decimal /= 2;
        	i *= 10;
    	}
    	return binary;
}

//binary to hexadecimal conversion
long int binary_hex(long int binaryval) {
	long int  hexadecimalval = 0, i = 1, remainder;
	while (binaryval != 0) {
   
        	remainder = binaryval % 10;
        	hexadecimalval = hexadecimalval + remainder * i;
        	i = i * 2;
        	binaryval = binaryval / 10;
    	}
	return hexadecimalval;
}

//hexadecimal to bunary conversion
void hex_binary(char* hexa) {
	long int i = 0;
	 printf("\n Equivalent binary value: ");
    while (hexa[i])
    {
        switch (hexa[i])
        {
        case '0':
            printf("0000"); break;
        case '1':
            printf("0001"); break;
        case '2':
            printf("0010"); break;
        case '3':
            printf("0011"); break;
        case '4':
            printf("0100"); break;
        case '5':
            printf("0101"); break;
        case '6':
            printf("0110"); break;
        case '7':
            printf("0111"); break;
        case '8':
            printf("1000"); break;
        case '9':
            printf("1001"); break;
        case 'A':
            printf("1010"); break;
        case 'B':
            printf("1011"); break;
        case 'C':
            printf("1100"); break;
        case 'D':
            printf("1101"); break;
        case 'E':
            printf("1110"); break;
        case 'F':
            printf("1111"); break;
        case 'a':
            printf("1010"); break;
        case 'b':
            printf("1011"); break;
        case 'c':
            printf("1100"); break;
        case 'd':
            printf("1101"); break;
        case 'e':
            printf("1110"); break;
        case 'f':
            printf("1111"); break;
        default:
            printf("\n Invalid hexa digit %c ", hexa[i]);
            
        }
        i++;
    }
}




