// Giai phuong trinh bac 2: ax^2 + bx + c = 0

#include <stdio.h>
#include <math.h>

void main()
{
	int a, b, c;
	printf("Nhap a, b, c: ");
	scanf("%d%d%d", &a, &b, &c);
	
	if (a == 0)
	{
		// Giai phuong trinh bac 1: bx + c = 0
		if (b == 0)
		{
			if (c == 0)
				printf("=> Phuong trinh vo so nghiem\n");
			else
				printf("=> Phuong trinh vo nghiem\n");
		}
		else
			printf("=> Phuong trinh co nghiem x = %.2f\n", (float)-c/b);
	}
	else
	{
		int delta = b*b - 4*a*c;

		if (delta < 0)
			printf("=> Phuong trinh vo nghiem\n");
		else
		{
			if (delta == 0)
				printf("=> Phuong trinh co nghiem kep x1 = x2 = %.2f\n", (float)-b/(2*a));
			else
			{
				float x1 = (float)(-b - sqrt(delta))/(2*a);
				float x2 = (float)(-b + sqrt(delta))/(2*a);
				printf("=> Phuong trih co 2 nghiem phan biet x1 = %.2f, x2 = %.2f\n", x1, x2);
			}
		}
	}
}
