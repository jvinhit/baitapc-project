// Tinh tien taxi tu so km nhap vao. Biet:
// 1 km dau gia 15.000d
// 2 -> 5 km gia 13.500d
// 6 km -> gia 11.000d
// Neu tren 120km thi duoc giam 10% tong tien

#include <stdio.h>
#define G1 15000
#define G2 13500
#define G3 11000

void main()
{
	int n;
	float sotien;
	printf("Nhap so km (>0): ");
	scanf("%d", &n);

	if (n == 1)
		sotien = G1;
	else
	{
		if (n >= 2 && n <= 5)
			sotien = G1 + (n - 1)*G2;
		else
			sotien = G1 + 4*G2 + (n - 1 - 4)*G3;
	}

	if (n > 120)
		sotien = sotien * 0.9;

	printf("=> So tien phai tra la: %.2f\n", sotien);
}