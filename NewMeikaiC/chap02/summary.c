/*
	æQÍÌÜÆß
*/

#include <stdio.h>

int main(void)
{
	int a;
	int b;
	double r;	/* Œa */

	printf("®aÆbÌlF");
	scanf("%d%d", &a, &b);

	printf("a + b = %d\n", a + b);	/* ÁZFQ+Zq */
	printf("a - b = %d\n", a - b);	/* žZFQ-Zq */
	printf("a * b = %d\n", a * b);	/* Ï@FQ*Zq */
	printf("a / b = %d\n", a / b);	/* €@F/Zq     */
	printf("a %% b = %d\n", a % b);	/* è]F%Zq     */

	printf("(a+b)/2 = %d\n",   (a + b) / 2);
	printf("œÏl  = %f\n\n", (double)(a + b) / 2);

	printf("ŒaF");
	scanf("%lf", &r);

	printf("Œa%.3fÌ~ÌÊÏÍ%.3fÅ·B\n", r, 3.14 * r * r);

	return 0;
}
