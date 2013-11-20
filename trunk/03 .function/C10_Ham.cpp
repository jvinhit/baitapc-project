#include <stdio.h>
#include <math.h>

// Bai 5a. Ham doi ky tu hoa sang thuong va nguoc lai
// Dau vao: Ky tu can doi ch
// Dau ra: Ky tu sau khi doi
char DoiKyTu(char ch);

// Bai 5b. Ham giai phuong trinh bac nhat ax + b = 0
// Dau vao: 2 he so nguyen a, b
// Dau ra: Khong co
void GiaiPTBac1(int a, int b);

// Bai 5c. Ham giai phuong trinh bac hai ax^2 + bx + c = 0
// Dau vao: 3 he so nguyen a, b, c
// Dau ra: Khong co
void GiaiPTBac2(int a, int b, int c);

// Bai 5d. Ham tim gia tri nho nhat cua 4 so nguyen cho truoc
// Dau vao: 4 so nguyen a, b, c, d
// Dau ra: So nguyen nho nhat
int TimSoNhoNhat(int a, int b, int c, int d);

// Bai 5e. Ham hoan vi gia tri cua 2 so nguyen cho truoc
// Dau vao: 2 so nguyen a, b
// Dau ra: Khong co
void HoanVi(int &a, int &b);

// Bai 5f. Ham sap xep gia tri cua 4 so nguyen cho truoc tang dan
// Dau vao: 4 so nguyen a, b, c, d
// Dau ra: Khong co
void SapXepTang(int &a, int &b, int &c, int &d);

// Bai 6a. Ham tim so dao cua mot so nguyen cho truoc
// Dau vao: So nguyen n can tim so dao
// Dau ra: So dao cua so nguyen n
int TimSoDao(int n);

// Bai 6b. Ham kiem tra mot so nguyen cho truoc co phai la so doi xung hay khong
// Dau vao: So nguyen n can kiem tra doi xung
// Dau ra: 0 neu n khong la so doi xung, 1 neu n la so doi xung
int KiemTraSoDoiXung(int n);

// Bai 6c. Ham kiem tra mot so nguyen cho truoc co phai la so chinh phuong hay khong
// Dau vao: So nguyen n can kiem tra chinh phuong
// Dau ra: 0 neu n khong la so chinh phuong, 1 neu n la so chinh phuong
int KiemTraSoChinhPhuong(int n);

// Bai 6d. Ham kiem tra mot so nguyen cho truoc co phai la so nguyen to hay khong
// Dau vao: So nguyen n can kiem tra tinh nguyen to
// Dau ra: 0 neu n khong la so nguyen to, 1 neu n la so nguyen to
int KiemTraSoNguyenTo(int n);

// Bai 6e. Ham tinh tong cac chu so le cua mot so nguyen cho truoc
// Dau vao: So nguyen n can tinh tong cac chu so le
// Dau ra: Tong cac chu so le
int TinhTongChuSoLe(int n);

// Bai 6f. Ham tinh tong cac chu so nguyen to cua mot so nguyen cho truoc
// Dau vao: So nguyen n can tinh tong cac chu so nguyen to
// Dau ra: Tong cac chu so nguyen to
int TinhTongChuSoNguyenTo(int n);

// Bai 6g. Ham tinh tong cac chu so chinh phuong cua mot so nguyen cho truoc
// Dau vao: So nguyen n can tinh tong cac chu so chinh phuong
// Dau ra: Tong cac chu so chinh phuong
int TinhTongChuSoChinhPhuong(int n);

// Bai 7a. Tinh tong S = 1 + 2 + ... + n
// Dau vao: So nguyen n
// Dau ra: Tong can tinh
int TinhTongBai7a(int n);

// Bai 7b. Tinh tong S = 1^2 + 2^2 + ... + n^2
// Dau vao: So nguyen n
// Dau ra: Tong can tinh
int TinhTongBai7b(int n);

// Bai 7c. Tinh tong S = 1 + 1/2 + ... + 1/n
// Dau vao: So nguyen n
// Dau ra: Tong can tinh
float TinhTongBai7c(int n);

// Bai 7d. Tinh n! = 1*2*3*...*n
// Dau vao: So nguyen n
// Dau ra: n!
int TinhGiaiThua(int n);

// Bai 7e. Tinh tong giai thua S = 1! + 2! + ... + n!
// Dau vao: So nguyen n
// Dau ra: Tong can tinh
int TinhTongGiaiThua(int n);

// Bai 8. Ham tim USCLN cua 2 so nguyen duong cho truoc
// Dau vao: 2 so nguyen duong a, b
// Dau ra: USCLN cua a va b
int TimUSCLN(int a, int b);

void main()
{
	/*
	// Bai 5a
	char ch;
	printf("Nhap mot ky tu: ");
	scanf("%c", &ch);
	printf("=> Ky tu sau khi doi la %c\n", DoiKyTu(ch));
	*/

	/*
	// Bai 5b
	int a, b;
	printf("Nhap a, b: ");
	scanf("%d%d", &a, &b);
	GiaiPTBac1(a, b);
	*/

	/*
	// Bai 5c
	int a, b, c;
	printf("Nhap a, b, c: ");
	scanf("%d%d%d", &a, &b, &c);
	GiaiPTBac2(a, b, c);
	*/

	/*
	// Bai 5d
	int a, b, c, d;
	printf("Nhap a, b, c, d: ");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	printf("=> So nho nhat la %d\n", TimSoNhoNhat(a, b, c, d));
	*/

	/*
	// Bai 5f
	int a, b, c, d, tam;
	printf("Nhap a, b, c, d: ");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	SapXepTang(a, b, c, d);
	printf("=> Cac so theo thu tu tang dan: %d %d %d %d\n", a, b, c, d);
	*/

	// Dung chung cho cac bai 6 va 7
	int n;
	do
	{
		printf("Nhap n > 0: ");
		scanf("%d", &n);
	}
	while (n<=0);

	/*
	// Bai 6a
	printf("=> So dao cua %d la %d\n", n, TimSoDao(n));
	*/

	/*
	// Bai 6b
	if (KiemTraSoDoiXung(n) == 1)
		printf("=> %d la so doi xung\n", n);
	else
		printf("=> %d khong la so doi xung\n", n);
	*/

	/*
	// Bai 6c
	if (KiemTraSoChinhPhuong(n) == 1)
		printf("=> %d la so chinh phuong\n", n);
	else
		printf("=> %d khong la so chinh phuong\n", n);
	*/

	/*
	// Bai 6d
	if (KiemTraSoNguyenTo(n) == 1)
		printf("=> %d la so nguyen to\n", n);
	else
		printf("=> %d khong la so nguyen to\n", n);
	*/

	/*
	// Bai 6e
	printf("=> Tong cac chu so le cua %d la %d\n", n, TinhTongChuSoLe(n));
	*/

	/*
	// Bai 6f
	printf("=> Tong cac chu so nguyen to cua %d la %d\n", n, TinhTongChuSoNguyenTo(n));
	*/

	/*
	// Bai 6g
	printf("=> Tong cac chu so chinh phuong cua %d la %d\n", n, TinhTongChuSoChinhPhuong(n));
	*/

	/*
	// Bai 7a, b, c, d, e
	printf("1 + 2 + ... + %d = %d\n", n , TinhTongBai7a(n));
	printf("1 + 2^2 + ... + %d^2 = %d\n", n , TinhTongBai7b(n));
	printf("1 + 1/2 + ... + 1/%d = %.2f\n", n , TinhTongBai7c(n));
	printf("%d! = 1*2*...*%d = %d\n", n, n , TinhGiaiThua(n));
	printf("1! + 2! + ... + %d! = %d\n", n , TinhTongGiaiThua(n));
	*/

	/*
	// Bai 8
	int a, b;
	do
	{
		printf("Nhap a, b > 0: ");
		scanf("%d%d", &a, &b);
	}
	while (a<=0 || b<=0);
	printf("=> USCLN cua %d va %d la %d\n", a, b, TimUSCLN(a, b));
	*/
}

// Bai 5a. Ham doi ky tu hoa sang thuong va nguoc lai
// Dau vao: ky tu can doi (ch)
// Dau ra: ky tu sau khi doi
char DoiKyTu(char ch)
{
	if (ch >= 'a' && ch <= 'z')
		ch = ch - 32;
	else
		if (ch >= 'A' && ch <= 'Z')
			ch = ch + 32;

	return ch;
}

// Bai 5b. Ham giai phuong trinh bac nhat ax + b = 0
// Dau vao: 2 he so nguyen a, b
// Dau ra: Khong co
void GiaiPTBac1(int a, int b)
{
	printf("Phuong trinh bac nhat: %dx + %d = 0\n", a, b); 
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

// Bai 5c. Ham giai phuong trinh bac hai ax^2 + bx + c = 0
// Dau vao: 3 he so nguyen a, b, c
// Dau ra: Khong co
void GiaiPTBac2(int a, int b, int c)
{
	printf("Phuong trinh bac hai: %dx^2 + %dx + %d = 0\n", a, b, c);
	if (a == 0)
	{
		// Giai phuong trinh bac 1: bx + c = 0
		GiaiPTBac1(b, c);
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

// Bai 5d. Ham tim gia tri nho nhat cua 4 so nguyen cho truoc
// Dau vao: 4 so nguyen a, b, c, d
// Dau ra: So nguyen nho nhat
int TimSoNhoNhat(int a, int b, int c, int d)
{
	int min = a;
	if (b < min)
		min = b;
	if (c < min)
		min = c;
	if (d < min)
		min = d;

	return min;
}

// Bai 5e. Viet ham hoan vi gia tri cua 2 so nguyen cho truoc
// Dau vao: 2 so nguyen a, b
// Dau ra: Khong co
void HoanVi(int &a, int &b)
{
	int tam = a;
	a = b;
	b = tam;
}

// Bai 5f. Viet ham sap xep gia tri cua 4 so nguyen cho truoc tang dan
// Dau vao: 4 so nguyen a, b, c, d
// Dau ra: Khong co
void SapXepTang(int &a, int &b, int &c, int &d)
{
	if (a > b)
		HoanVi(a, b);
	if (a > c)
		HoanVi(a, c);
	if (a > d)
		HoanVi(a, d);
	if (b > c)
		HoanVi(b, c);
	if (b > d)
		HoanVi(b, d);
	if (c > d)
		HoanVi(c, d);
}

// Bai 6a. Ham tim so dao cua mot so nguyen cho truoc
// Dau vao: So nguyen n can tim so dao
// Dau ra: So dao cua so nguyen n
int TimSoDao(int n)
{
	int sodao = 0, donvi;

	while (n > 0)
	{
		donvi = n % 10;
		n = n / 10;
		sodao = sodao*10 + donvi;
	}

	return sodao;
}

// Bai 6b. Ham kiem tra mot so nguyen cho truoc co phai la so doi xung hay khong
// Dau vao: So nguyen n can kiem tra doi xung
// Dau ra: 0 neu n khong la so doi xung, 1 neu n la so doi xung
int KiemTraSoDoiXung(int n)
{
	if (n == TimSoDao(n))
		return 1;
	else
		return 0;

	// Hoac return (n == TimSoDao(n));
}

// Bai 6c. Ham kiem tra mot so nguyen cho truoc co phai la so chinh phuong hay khong
// Dau vao: So nguyen n can kiem tra chinh phuong
// Dau ra: 0 neu n khong la so chinh phuong, 1 neu n la so chinh phuong
int KiemTraSoChinhPhuong(int n)
{
	int n_can_nguyen = (int)sqrt(n);
	if (n_can_nguyen*n_can_nguyen == n)
		return 1;
	else
		return 0;

	// Hoac return (n_can_nguyen*n_can_nguyen == n);
}

// Bai 6d. Ham kiem tra mot so nguyen cho truoc co phai la so nguyen to hay khong
// Dau vao: So nguyen n can kiem tra tinh nguyen to
// Dau ra: 0 neu n khong la so nguyen to, 1 neu n la so nguyen to
int KiemTraSoNguyenTo(int n)
{
	int i, souoc = 0;
	for (i = 1; i <= n; i++)
		if (n % i == 0)
			souoc++;

	if (souoc == 2)
		return 1;
	else
		return 0;

	// Hoac return (souoc == 2);
}

// Bai 6e. Ham tinh tong cac chu so le cua mot so nguyen cho truoc
// Dau vao: So nguyen n can tinh tong cac chu so le
// Dau ra: Tong cac chu so le
int TinhTongChuSoLe(int n)
{
	int donvi, tong;

	tong = 0;
	while (n > 0)
	{
		donvi = n % 10;
		n = n / 10;
		if (donvi % 2 != 0)
			tong = tong + donvi;
	}

	return tong;
}

// Bai 6f. Ham tinh tong cac chu so nguyen to cua mot so nguyen cho truoc
// Dau vao: So nguyen n can tinh tong cac chu so nguyen to
// Dau ra: Tong cac chu so nguyen to
int TinhTongChuSoNguyenTo(int n)
{
	int donvi, tong;

	tong = 0;
	while (n > 0)
	{
		donvi = n % 10;
		n = n / 10;
		if (KiemTraSoNguyenTo(donvi) == 1)
			tong = tong + donvi;
	}

	return tong;
}

// Bai 6g. Ham tinh tong cac chu so chinh phuong cua mot so nguyen cho truoc
// Dau vao: So nguyen n can tinh tong cac chu so chinh phuong
// Dau ra: Tong cac chu so chinh phuong
int TinhTongChuSoChinhPhuong(int n)
{
	int donvi, tong;

	tong = 0;
	while (n > 0)
	{
		donvi = n % 10;
		n = n / 10;
		if (KiemTraSoChinhPhuong(donvi) == 1)
			tong = tong + donvi;
	}

	return tong;
}

// Bai 7a. Tinh tong S = 1 + 2 + ... + n
// Dau vao: So nguyen n
// Dau ra: Tong can tinh
int TinhTongBai7a(int n)
{
	int i, s = 0;	
	for (i = 1; i <= n; i++)
		s = s + i;
	
	return s;
}

// Bai 7b. Tinh tong S = 1^2 + 2^2 + ... + n^2
// Dau vao: So nguyen n
// Dau ra: Tong can tinh
int TinhTongBai7b(int n)
{
	int i, s = 0;	
	for (i = 1; i <= n; i++)
		s = s + i*i;
	
	return s;
}

// Bai 7c. Tinh tong S = 1 + 1/2 + ... + 1/n
// Dau vao: So nguyen n
// Dau ra: Tong can tinh
float TinhTongBai7c(int n)
{
	float i, s = 0;
	for (i = 1; i <= n; i++)
		s = s + 1.0/i;
	
	return s;
}

// Bai 7d. Tinh n! = 1*2*3*...*n
// Dau vao: So nguyen n
// Dau ra: n!
int TinhGiaiThua(int n)
{
	int i, gt = 1;
	for (i = 2; i <= n; i++)
		gt = gt * i;
	
	return gt;
}

// Bai 7e. Tinh tong giai thua S = 1! + 2! + ... + n!
// Dau vao: So nguyen n
// Dau ra: Tong can tinh
int TinhTongGiaiThua(int n)
{
	int i, s = 0;
	for (i = 1; i <= n; i++)
		s = s + TinhGiaiThua(i);
	
	return s;
}

// Bai 8. Ham tim USCLN cua 2 so nguyen duong cho truoc
// Dau vao: 2 so nguyen duong a, b
// Dau ra: USCLN cua a va b
int TimUSCLN(int a, int b)
{
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}

	return a;
}