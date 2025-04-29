#include <stdio.h>
#include "mymath.h"

int main(){
	int num=0;
	printf("input a number\n");
	scanf("%d",&num);
	printf("factorial of %d is %lu\n",num,factorial(num));
	printf("%d fibonachi number is %lu\n",num,fibonachi(num));
	printf("%d is ",num);
	printf(prime_check(num)?"Prime\n":"Not prime\n");
	int a=0;
	int b=0;
	printf("input 2 numbers\n");
	scanf("%d %d",&a,&b);
	printf("gcd of %d and %d is %d\n",a,b,gcd(a,b));
	return 0;
}
