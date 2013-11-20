// Nhap n sao cho 0 < n < 50
// Tinh tong cac so nguyen to nho hon n

#include <stdio.h>

void main()
{
	int n, i, j, souoc, s;
	do
	{
		printf("Nhap n: ");
		scanf("%d", &n);
	}
	while (!(n > 0 && n < 50));

	s = 0;
	for (i = 2; i < n; i++)
	{
		// Dem xem i co bn uoc so?
		souoc = 0;
		for (j = 1; j <= i; j++)
			if (i % j == 0)
				souoc++;

		if (souoc == 2)
			s = s + i;
	}
	printf("=> Tong cac so nguyen to nho hon %d la %d\n", n, s);
}
