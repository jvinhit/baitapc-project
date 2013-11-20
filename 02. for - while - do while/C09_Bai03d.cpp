// Nhap vao mot so nguyen duong n
// Tim chu so nho nhat va lon nhat cua n

#include <stdio.h>

void main()
{
	int n, min, max, donvi;
	do
	{
		printf("Nhap n: ");
		scanf("%d", &n);
	}
	while (n<=0);

	max = min = n % 10;
	n = n / 10;

	while (n>0)
	{
		donvi = n % 10;
		n = n / 10;
		if (donvi < min) min = donvi;
		if (donvi > max) max = donvi;
	}

	printf("=> So nho nhat la %d\n", min);
	printf("=> So lon nhat la %d\n", max);
}