// Nhap vao 4 so nguyen
// Sap xep cac so nay theo thu tu tang dan

#include <stdio.h>

void main()
{
	int a, b, c, d, tam;

	printf("Nhap a, b, c, d: ");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	
	if (a > b) { tam = a; a = b; b = tam; }
	if (a > c) { tam = a; a = c; c = tam; }
	if (a > d) { tam = a; a = d; d = tam; }
	if (b > c) { tam = b; b = c; c = tam; }
	if (b > d) { tam = b; b = d; d = tam; }
	if (c > d) { tam = c; c = d; d = tam; }

	printf("=> Cac so theo thu tu tang dan: %d %d %d %d\n", a, b, c, d);
}