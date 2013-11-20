// Nhap vao a, b va n sao cho a,b < n
// Tinh tong cac so nguyen duong nho hon n chia het cho a nhung khong chia het cho b

#include <stdio.h>

void main()
{
	int a, b, n, i, s;
	do
	{
		printf("Nhap a, b, n: ");
		scanf("%d%d%d", &a, &b, &n);
	}
	while (a >= n || b >= n);

	s = 0;	
	for (i = 1; i < n; i++)
		if (i % a == 0 && i % b != 0)
			s = s + i;
	
	printf("=> Tong cac thoa yeu cau la %d\n", s);
}
