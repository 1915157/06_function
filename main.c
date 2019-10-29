#include<stdio.h>
#include<stdlib.h>

// 06_03

int sumTwo (int a, int b)
{
	int output;
	output = a + b ;
	return output;
}

int square (int n)
{
	return n*n;
}

int get_max (int a, int b)
{
	if (a>b)
		return(a);
	else 
	return(b);
}


int main(int argc, char *argv[])  {

 int x, y;
 int output;
 
 x=2;
 y=5;
 
 output = sumTwo(x,y);
 printf("sumTwo : %i\n", output);
 printf("square : %i\n", square(x));
 printf("get_max : %i\n", get_max(x,y));
 
 return 0;
}

//06_04

int square(int n);

int main(void)
{
	int result;
	result = square(5);  
	printf("%d", result);
}

int square(int n)
{
	return(n*n);
}

// 06_06

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i;
	int max = 45;
	
	srand( (unsigned) time(NULL));
	for (i=0; i<6; i++)
		printf("%d ", 1+rand()%max);
		
		return 0;
}

// 06-07

int factorial(int n)
{
	int res = 1;
	int i; 
	
	for (i=1; i<=n; i++)
	{
		res = res * i;
	}

	return res;	
}


int calcCombination(int n, int r)
{
	int high,low;
	high = factorial(n);
	low = factorial(n-r) * factorial(r);
	
	return (high/low);
	
}


int main(void)
{
	int n,r;
	int res; 
	
	printf("input the number n, r : ");
	scanf("%d %d", &n, &r);
	
	res = calcCombination(n,r); 
	printf("combination result is %d\n", res);

	return 0; 
}
