// Nhap vao mot so nguyen duong n
// Tinh S = 1 + 1/2 + ... + 1/n

#include <stdio.h>

void main()
{
	int n, i;
	float s;
	do
	{
		printf("Nhap n: ");
		scanf("%d", &n);
	}
	while (n<=0);

	s = 0;	
	for (i = 1; i <= n; i++)
		s = s + 1.0/i;

	printf("=> 1 + 1/2 + ... + 1/%d = %.2f\n", n, s);
}