// Giai phuong trinh bac nhat: ax + b = 0

#include <stdio.h>
#include <conio.h>

void main()
{
	int a, b;
	printf("Nhap a, b: ");
	scanf("%d%d", &a, &b);
	
	if (a == 0)
	{
		if (b == 0)
			printf("=> Phuong trinh vo so nghiem\n");
		else
			printf("=> Phuong trinh vo nghiem\n");
	}
	else
		printf("=> Phuong trinh co nghiem x = %.2f\n", (float)-b/a);
}