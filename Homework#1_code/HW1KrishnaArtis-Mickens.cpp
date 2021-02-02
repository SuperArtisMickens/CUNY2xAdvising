#include <iostream>
using namespace std;

/*

HOMEWORK 1
NAME: [Krishna Artis-Mickens]

*/

#define MAX_NUMBER_OF_PRIMES 20

//prototypes of the functions to be defined in this assignment
int  isPrime(int pr[], int np, int x);

void genPrimes(int pr[]);


int main() {
    //the provided main function shows how to test your functions
    
    int primes[MAX_NUMBER_OF_PRIMES]; //create an array for primes and allocate
                        //enough space for MAX_NUMBER_OF_PRIMES
    int primeFactors[MAX_NUMBER_OF_PRIMES]; //an array to store the prime
                        //    factors of a number once necessary
    int numberOfPrimes; //stores the number of primes currently held in the
                        //    primes array
	
	// Set the first four primes and numberOfPrimes
	primes[0] = 2;
	primes[1] = 3;
	primes[2] = 5;
	primes[3] = 7;
	numberOfPrimes = 4;
    
	// Quick test of isPrime function - one test for each type of answer
    //13 is prime, so should print "13 is prime"
	int test = isPrime(primes, numberOfPrimes, 13);
	if(test==1)      cout << "13 is prime.\n\n";
	else if(test==0) cout << "13 is not prime.\n\n";
	else             cout << "Can't tell if 13 is prime or not.\n\n";

    //47 is prime, so should print "47 is prime"
    test = isPrime(primes, numberOfPrimes, 47);
    if(test==1)      cout << "47 is prime.\n\n";
    else if(test==0) cout << "47 is not prime.\n\n";
    else             cout << "Can't tell if 47 is prime or not.\n\n";
    
    //49 is not prime, so should print "49 is not prime"
	test = isPrime(primes, numberOfPrimes, 49);
	if(test==1)      cout << "49 is prime.\n\n";
	else if(test==0) cout << "49 is not prime.\n\n";
	else             cout << "Can't tell if 49 is prime or not.\n\n";

    //we can't tell if 169 is prime because 169 > 7*7
	test = isPrime(primes, numberOfPrimes, 169);
	if(test==1)      cout << "169 is prime.\n\n";
	else if(test==0) cout << "169 is not prime.\n\n";
	else             cout << "Can't tell if 169 is prime or not.\n\n";
	
	// Generate the rest of the primes and display
	genPrimes(primes);
	numberOfPrimes = MAX_NUMBER_OF_PRIMES;
	for(int j=0; j<MAX_NUMBER_OF_PRIMES; j++)
		cout << "The " << j << "th prime is " << primes[j] << "\n";
	cout << "\n\n";
	
    return 0; 
}


/**
 *  Checks to see if a number is prime.
 *
 *  @param pr   an array of known prime numbers in ascending order
 *  @param nump the number of primes stored in the pr array
 *  @param x    the number we are checking
 *
 *  @return returns 0 if x is not prime. returns 1 if x is prime. returns -1 if
 *          we don't have enough primes in our array to determine if x is prime
 */
int isPrime(int pr[], int nump, int x) {
    /*  WRITE YOUR FUNCTION HERE */ 
   if((x==0) || (x<0) || (x%pr[0]==0) || (x%pr[1]==0) || (x%pr[2]==0) || (x%pr[3]==0))  return 0;
	else if ((x%pr[0]!=0) || (x%pr[1]!=0) || (x%pr[2]!=0) || (x%pr[3]!=0)) return 1;
	else  return -1;  //dummy value
}

/**
 *  Generates and populates the prime number array, stopping once we reach 
 *  MAX_NUMBER_OF_PRIMES primes.
 *
 *  @param pr the initial prime number array
 */
void genPrimes(int pr[]) {
    /*  WRITE YOUR FUNCTION HERE */ 
	int remainder;
	remainder = 16;

	int i = 1;
  	for ((int j = 8; j < 5041; j++) && ((i+3)< 20)) {
		isPrime(primes, numberOfPrimes, j);
		if isPrime(primes, numberOfPrimes, j) = 1	
		{
		pr[3+i] = j;
		i=i+1;
		}  
	}
	return; //dummy value
}