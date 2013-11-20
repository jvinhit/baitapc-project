// Nhap vao mot so nguyen duong n
// Tinh S(n) = 1 + 2 + ... + (n - 1) + n
// => S(n) = S(n - 1) + n

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
		s = s + i;

	printf("=> 1 + 2 + ... + %d = %d\n", n, s);
}