// Nhap vao mot so nguyen duong n
// n co phai la so nguyen to?

#include <stdio.h>

void main()
{
	int n, i, souoc;
	do
	{
		printf("Nhap n: ");
		scanf("%d", &n);
	}
	while (n<=0);

	souoc = 0;
	for (i = 1; i <= n; i++)
		if (n % i == 0)
			souoc++;

	if (souoc == 2)
		printf("=> %d la so nguyen to\n", n);
	else
		printf("=> %d khong la so nguyen to\n", n);
}