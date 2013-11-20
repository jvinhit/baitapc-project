// Nhap vao mot so nguyen duong n
// Tinh n!

#include <stdio.h>

void main()
{
	int n, i, gt;
	do
	{
		printf("Nhap n: ");
		scanf("%d", &n);
	}
	while (n<=0);

	gt = 1;	
	for (i = 2; i <= n; i++)
		gt = gt * i;

	printf("=> %d! = %d\n", n, gt);
}