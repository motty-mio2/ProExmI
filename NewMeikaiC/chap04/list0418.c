/*
	ΆΊͺΌpΜΌpρΣOp`π\¦
*/

#include <stdio.h>

int main(void)
{
	int i, j, len;

	puts("ΆΊΌpρΣOp`πμθά·B");
	printf("ZΣF");
	scanf("%d", &len);

	for (i = 1; i <= len; i++) {		/* isii = 1, 2, c , lenj */
		for (j = 1; j <= i; j++)		/* esΙiΒΜ'*'π\¦ */
			putchar('*');
		putchar('\n');					/* όs */
	}

	return 0;
}
