
#include <stdio.h>
#include <math.h>
void kiemTraSoNguyen()
{
		int x;
		printf("Nhap so nguyen x: ");
		scanf("%d", &x);
		printf("%d la so nguyen.\n", x);

		// 2. Kiem tra so nguyen to
		int count = 0;
		for (int i = 1; i <= x; i++) {
			if (x % i == 0) {
				count++;
			}
		}

		if (x >= 2 && count == 2)
			printf("%d la so nguyen to.\n", x);
		else
			printf("%d KHONG la so nguyen to.\n", x);

		// 3. Kiem tra so chinh phuong
		int a = sqrt(x);//square root
		if (a * a == x)
			printf("%d la so chinh phuong.\n", x);
		else
			printf("%d khong phai la so chinh phuong.\n", x);
		
		return 0;
	}

void uocChungBoiChung()
{
		int x, y;
		printf("Nhap x: ");
		scanf("%d", &x);
		printf("Nhap y: ");
		scanf("%d", &y);

		int a = x;
		int b = y;

		// Tim UCLN bang cach tru dan
		while (a != b) {
			if (a > b) {
				a = a - b;
			}
			else {
				b = b - a;
			}
		}

		int ucln = a;                 // luc nay a == b chinh la UCLN
		int bcnn = (x * y) / ucln;    // cong thuc BCNN

		printf("UCLN cua %d va %d = %d\n", x, y, ucln);
		printf("BCNN cua %d va %d = %d\n", x, y, bcnn);

		return 0;
	}

void tinhtienhatkaraoke()
{
	int start, end;
	printf("Nhap gio bat dau: ");// từ 12h đến23h
	scanf("%d", &start);
	printf("Nhap gio ket thuc: "); //12 đến 23
	scanf("%d", &end);

	// Kiem tra gio hop le
	if (start < 12 || end > 23 || start >= end) {
		printf("Gio khong hop le!\n");
		return 0;
	}

	int gio = end - start;
	float tien = 0;

	if (gio <= 3) {
		tien = gio * 50000;          // 3 gio dau: 50k 1gio
	}
 else {
  tien = 3 * 50000;            // 3 gio dau = 150k
  tien = tien + (gio - 3) * 35000;  // cac gio sau 35k / gio (giam 30%)
}

	// Giam them 10% neu bat dau tu 14h den 17h
	if (start >= 14 && start <= 17) {
		tien = tien * 0.9;
	}

	printf("Tong tien phai tra: %.0f VND\n", tien);

	return 0;
}


void lapChucNang(int chonChucNang)
{
	int tiepTuc = 1;
	while (tiepTuc == 1)
	{
		switch (chonChucNang)
		{
		case 1:
			kiemTraSoNguyen();
			break;
		case 2:
			uocChungBoiChung();
			break;
		case 3:
			tinhtienhatkaraoke();
			break;
		case 0:
			return;
		default:
			printf("Hay chon lai [0-3]");
			break;
		}

		printf("\n");
		printf("Tiep tuc CN nay? [1=Co | 0=Khong]: ");
		scanf("%d", &tiepTuc);
		system("cls");
	}
}

int main()
{
	int chonChucNang;
	do
	{
		printf("Menu");
		printf("\n");
		printf("1. Kiem Tra So Nguyen");
		printf("\n");
		printf("2. kiemTraSoNguyen");
		printf("\n");
		printf("3. tinhtienhatkaraoke");
		printf("\n");
		printf("Hay chon CN [0-3]: ");
		scanf("%d", &chonChucNang);
		lapChucNang(chonChucNang);
	} while (chonChucNang != 0);
}
