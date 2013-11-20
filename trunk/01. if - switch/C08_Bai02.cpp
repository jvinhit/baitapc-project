// Nhap mot ky tu
// Neu la ky tu thuong thi doi sang ky tu hoa
// Neu la ky tu hoa thi doi sang ky tu thuong

#include <stdio.h>

void main()
{
	char ch;
	printf("Nhap mot ky tu: ");
	scanf("%c", &ch);

	if (ch >= 'a' && ch <= 'z')
		ch = ch - 32;
	else
		if (ch >= 'A' && ch <= 'Z')
			ch = ch + 32;

	printf("=> Ky tu sau khi doi: %c\n", ch);
}