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
 *  along with newmath. If not, see <http://www.gnu.org/licenses/>.
*****************************************************************************/

#define MAX_NUMBER 5000
#define MAX 1000

typedef struct polynomial {           //polynomial structure
	int coeff;
	int pow;
	struct polynomial *next;
}poly;

void create(poly **);                      //polynomial creation
void show(poly *);                         //polynomial display
void add_poly(poly **, poly *, poly *);    //polynomial addition
void sub_poly(poly **, poly *, poly *);    //polynomial subtraction

typedef struct div_t1 {                  //integer division structure
	int quot;
	int rem;
}div_t1;

div_t1 division(int divident, int divisor);  //returns quotient and remainder

double sqrt(double);                     // square root
double fmod(double , double);            //remainder
double fabs(double);                     //absolute value of double
double ceilx(double);                    //ceil function
double floorx(double);                    //floor function
double exponential(double);        //exponential function
double hypot(double, double);             //hypotenuse function
double cbrtx(double);	                  //cube root function
double Pow(double, double);	           //power function
double trunc(double);	                  // truncating a number
double round(double);                      //rounding a number	
double fmax(double, double);               //maximum number returns
double fmin(double, double);               //minimum number returns
double fdim(double, double);             ////fdim returns positive difference between two numbers & if fails it returns 0
double ldexp(double, int);		//returns floating point * 2^int number
double exp2(double);                    //compute 2 raised to the given power

int abs(int);                          //absolute value of an integer	
float roundf(float);                   // this function rounds up a floating point value
long lround(double);		      // this function rounds up double value & return long value

double fact(double);			//returns the factorial of a number
double tgamma(double);			//returns the gamma value of a number
double square(double);			//returns the square of number
double cube(double);			//returns the cube of a number
double dec_bin(double);			//decimal to binary conversion
double bin_dec(char[]);			//binary to decimal conversion

int decimal_octal(int);		//decimal to octal conversion
int octal_decimal(int);		//octal to decimal conversion
int binary_octal(int);		//binary to octal conversion
int octal_binary(int);		//octal to binary
long int binary_hex(long int);		//binary to hexadecimal conversion
void hex_binary(char*);			//hexadecimal to binary conversion
