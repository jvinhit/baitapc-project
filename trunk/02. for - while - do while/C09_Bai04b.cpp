// Nhap vao mot so nguyen duong n
// Tinh S = 1^2 + 2^2 + ... + n^2

#include <stdio.h>

void main()
{
	int n, i, s;
	do
	{
		printf("Nhap n: ");
		scanf("%d", &n);
	}
	while (n<=0);

	s = 0;	
	for (i = 1; i <= n; i++)
		s = s + i*i;

	printf("=> 1^2 + 2^2 + ... + %d^2 = %d\n", n, s);
}