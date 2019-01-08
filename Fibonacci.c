// This code develops the fibonacci series 1123581321

#include<stdio.h>
 void main()
 {
     int fibo[20];
     int fib_temp=1;

     fibo[0]=fib_temp;

     printf("The fibonacci series for 1-20 is as follows\n%d",fibo[0]);
     fib_temp--;

     for (int i=1; i<=19; i++)
    {


        fibo[i]=fib_temp+fibo[i-1];
        fib_temp=fibo[i-1];
        printf("\n%d",fibo[i]);


    }
 }


