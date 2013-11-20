// Nhap vao 3 so nguyen
// 3 so nguyen nay co tao thanh 3 canh cua mot tam giac khong?
// Neu co thi do la tam giac gi

#include <stdio.h>

void main()
{
	int a, b, c;
	printf("Nhap 3 so nguyen: ");
	scanf("%d%d%d", &a, &b, &c);

	if (a + b > c && a + c > b && b + c > a)
	{
		// Day chinh la 3 canh cua mot tam giac
		if (a == b && b == c)
			printf("=> Day la tam giac deu\n");
		else
		{
			if (a == b || b == c || c == a)
				printf("=> Day la tam giac can\n");
			else
			{
				if (a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b)
					printf("=> Day la tam giac vuong\n");
				else
					printf("=> Day la tam giac thuong\n");
			}
		}
	}
	else
		printf("=> Day khong phai la 3 canh cua mot tam giac\n");
}