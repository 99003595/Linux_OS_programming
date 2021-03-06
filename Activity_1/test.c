#include "mystring.h"
#include "myutils.h"
#include "bitmask.h"
#include "stdarg.h"
#include <stdio.h>
int main() {
  char s[]="linux";
  char str1[20]="linux programming";
  char str2[20];
  char str3[100]="This is ",str4[]="madhura";
  char str5[]="abcd",str6[]="aBCd";
  int prime=5,palindrome=787,fact=8,num=2,k=1;
  

  printf("length of the string is %lu\n ",mystrlen(s));
  printf("coping of string is %lu\n ",mystrcpy(str2,str1));
  printf("concatenation of string is is %lu\n ",mystrcat(str3,str4));
  printf("comparison of string is %lu\n ",mystrcmp(str5,str6));
  

  if(isPrime(prime))
      printf("the number is prime\n");

  if(ispalindrome(palindrome))
      printf("the number is palindrome\n");


  printf("factorial of %d is %d \n",fact,factorial(fact));

  printf("setting %d th of %d is %d \n",k,num,set(num,k));
  printf("resetting %d th of %d is %d \n",k,num,reset(num,k));
  printf("flipping %d th of %d is %d \n",k,num,flip(num,k));
  printf("query %d th of %d is %d \n",num,query(num));

  printf("sum of 2,10,20=%d\n",vsum(2,10,20)); 
  printf("sum of 3,10,12,18=%d\n",vsum(3,10,12,18));
  printf("sum of 4,10,12,18,20=%d\n",vsum(4,10,12,18,20));



  return 0;
}
