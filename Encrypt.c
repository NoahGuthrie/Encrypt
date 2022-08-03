#include <stdio.h>

int main(void) {

int sum, remainder, num;
int remA, remB, remC, remD;

puts("Please entre a four digit number");
scanf("%d", &num);

remD = num % 10;
num = num / 10;

remC = num % 10;
num = num / 10;

remB = num % 10;
num = num / 10;

remA = num % 10;

remA = (remA + 7) % 10;
remB = (remB + 7) % 10;
remC = (remC + 7) % 10;
remD = (remD + 7) % 10;

printf("%d%d%d%d", remC, remD, remA, remB);
}