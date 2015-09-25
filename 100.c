/*
* Problem No. : 100 
* Problem : The 3n + 1 problem
* Solving Date : 24-09-2015 12:20:00 pm
*/

#include <stdio.h>

// recursion fuction
long long recursion(long long n){

    // check if n == 1 then return 1
    // check n == odd then use the 3n+1 formula
    // if n != odd then use n/2 formula
    if(n == 1)
        return 1;

    else if(n % 2 != 0)
        return recursion(3*n+1)+1;

    else
        return recursion(n/2)+1;
}

// cycle counter function
long long cycle_counter(long long i, long long j){

    long long cycle, temp, cnt = 0;

    // if i grater than j then swap the values
    if(i > j){
        temp = i;
        i = j;
        j = temp;
    }

    // until i less than j
    while(i <= j){
        cycle = recursion(i); // call to recursion()

        if(cnt < cycle)
            cnt = cycle;

        i++;
    }

    return cnt;

}

// main function
int main()
{

    long long num1, num2;

    // continue the loop until end of file
    while(scanf("%lld %lld", &num1, &num2) != EOF){
        printf("%lld %lld %lld",  num1, num2, cycle_counter(num1, num2));
    }

    return 0;
}
