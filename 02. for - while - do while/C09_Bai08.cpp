// Xuat tat ca so co hai chu so sao cho tich 2 chu so cua no bang 2 lan tong hai chu so cua no

#include <stdio.h>

void main()
{
	int n, i, donvi, chuc;
	
	printf("=> Cac so thoa yeu cau la: ");
	for (i = 10; i <= 99; i++)
	{
		donvi = i % 10;
		chuc = i / 10;

		if (chuc*donvi == 2*(chuc + donvi))
			printf("%d ", i);
	}

	printf("\n");
}
