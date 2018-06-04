/* Mercy Housh
 * MEHZ76
 */

#include<stdio.h>

void printFizzBuzz(int num);

int main(void) {
    int num;
    printFizzBuzz(num);
    return 0;
}

void printFizzBuzz(int num) {
    for(num = 1; num <= 100; num++) {
        if(num%3 ==0 && num%5 != 0) {
            printf("Fizz\n");
        }

        if(num%3 != 0 && num%5 == 0){
            printf("Buzz\n");
        }

        if(num%3 == 0 && num%5 == 0) {
            printf("FizzBuzz\n");
        }

        if(num%3 != 0 && num%5 !=0) {
            printf("%d\n", num);
        }
    }
}
