
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
//factorial
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
// prime number
int isPrime(int num) 
{
    int i;
    
    for(i=2; i<=num/2; i++)  // If the number is divisible by any number other than 1 and self then it is not prime 
          
    {  
    
        if(num%i == 0)  
        {
            return 0;
        }  
    } 
    
    return 1; 
}

//ispalindrome 
int checkpalindrome(char *s)
{
    int i,c=0,n;
    n=strlen(s);
	for(i=0;i<n/2;i++)  
    {
    	if(s[i]==s[n-i-1])
    	c++;
 
 	}
 	if(c==i)
        return 1;
    else
        return 0;
 
 	
	  
 }

 // vsum

int sum(int N, ...)
{
    int loop,sum;
    va_list va; /*for argument list*/
     
    va_start(va,N); /*init with number of arguments*/
     
    /*access arguments & calculating sum*/
    sum=0;
    for(loop=0;loop<N;loop++){
        sum+=va_arg(va,int);
    }
     
    return sum;
}
