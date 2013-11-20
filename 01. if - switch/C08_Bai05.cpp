// Nhap vao 4 so nguyen a, b, c, d
// Tim so co gia tri nho nhat

#include <stdio.h>

void main()
{
	int a, b, c, d, min, max;
	printf("Nhap a, b, c, d: ");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	
	min = a;
	if (b < min) min = b;
	if (c < min) min = c;
	if (d < min) min = d;

	printf("=> So nho nhat la %d\n", min);
}