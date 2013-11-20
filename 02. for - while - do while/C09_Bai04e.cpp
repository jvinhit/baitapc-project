// Nhap vao mot so nguyen duong n
// Tinh S = 1! + 2! + ... + n!

#include <stdio.h>

void main()
{
	int n, i, j, s, igt;
	do
	{
		printf("Nhap n: ");
		scanf("%d", &n);
	}
	while (n<=0);

	s = 0;	
	for (i = 1; i <= n; i++)
	{	
		igt = 1;
		for (j = 2; j <= i; j++)
			igt = igt * j;
		s = s + igt;
	}
	
	printf("=> 1! + 2! + ... + %d! = %d\n", n, s);
}
