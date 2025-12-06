
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
	printf("Nhap gio bat dau ( tu 12h-23h): ");// từ 12h đến23h
	scanf("%d", &start);
	printf("Nhap gio ket thuc ( tu 12h-23h): "); //12 đến 23
	scanf("%d", &end);

	// Kiem tra gio hop le
	if (start < 12 || end > 23 || start >= end) {
		printf("Gio khong hop le\n");
		return 0;
	}

	int gio = end - start;
	float tien = 0;

	if (gio <= 3) {
		tien = gio * 50000;          // 3 gio dau: 50k 1gio
	}
 else {
  tien = 3 * 50000;            // 3 gio dau = 150k
  tien = tien + (gio - 3) * 35000;  // cac gio sau 35k tren gio (giam 30%)
}

	// Giam them 10% neu bat dau tu 14h den 17h
	if (start >= 14 && start <= 17) {
		tien = tien * 0.9;
	}

	printf("Tong tien phai tra la: %.0f VND\n", tien);

	return 0;
}

void tinhTienDien() 
{
		int kwh;
		long tong = 0;
		printf("Nhap so kWh su dung: ");
		scanf("%d", &kwh);

		if (kwh <= 0) {
			printf("So kWh khong hop le!");
			return;
		}

		if (kwh > 400) {
			tong += (kwh - 400) * 2927;
			kwh = 400;
		}
		if (kwh > 300) {
			tong += (kwh - 300) * 2834;
			kwh = 300;
		}
		if (kwh > 200) {
			tong += (kwh - 200) * 2536;
			kwh = 200;
		}
		if (kwh > 100) {
			tong += (kwh - 100) * 2014;
			kwh = 100;
		}
		if (kwh > 50) {
			tong += (kwh - 50) * 1734;
			kwh = 50;
		}

		tong += kwh * 1678;

		printf("Tien dien phai tra: %ld dong\n", tong);
		return 0;
}

void doiTien()
{
	int i = 1;
	// vong lap
	while (i == 1)
	{
		// khai bao
		int	soTien;
		int	menhGia[] = { 500,200,100,50,20,10,5,2,1 };
		int	soToTien = 0;
		// Nhap so Tien
		printf("Moi Nhap Vao So Tien Can Doi: ");
		scanf("%d", &soTien);
		for (int j = 0; j < 9; j++)
		{
			soToTien = soTien / menhGia[j];
			printf("Co %d to tien menh gia %d\n ", soToTien, menhGia[j]);
			soTien = soTien % menhGia[j];
		}

		printf("Ban vua nhap:%d\n", i);
		printf("Ban co muon thuc hien tiep hay khong[1-Co|khac-Khong]: ");
		scanf("%d", &i);
		system("cls");//clear screen
	}
	return 0;
}

void TinhLaiSuatVayNganHangVayTraGop()
{
		printf("Bang lai suat vay ngan hang \n\n");
		int tienVay;

		printf("Moi nhap so tien can vay (VND): ");
		scanf("%d", &tienVay);

		int tienGoc = tienVay / 12;
		int tienLai;
		int tienTra;
		int tienCon = tienVay;

		printf("Ky han | Lai phai tra | Goc phai tra | So tien phai tra | So tien con lai |\n");

		for (int j = 1; j <= 12; j++)
		{
			tienLai = tienCon * 0.05;
			tienTra = tienGoc + tienLai;
			tienCon = tienCon - tienGoc;

			printf("---------------------------------------------------------------------------\n");
			printf("%d | ", j);
			printf("%12d | ", tienLai);
			printf("%12d | ", tienGoc);
			printf("%16d | ", tienTra);
			printf("%15d | ", tienCon);
			printf("\n");
		}
	}

void vaytienmuaxe()
{
		float phanTramVay;
		printf("Nhap phan tram vay toi da (vd 80): ");
		scanf("%f", &phanTramVay);

		float giaXe = 500000000; // 500 triệu
		float soTienVay = giaXe * phanTramVay / 100;
		float traTruoc = giaXe - soTienVay;

		// Lãi mỗi năm đơn giản: tiền vay * 7.2%
		float laiNam = soTienVay * 0.072;

		// Tổng tiền phải trả trong 24 năm
		float tongTra = soTienVay + laiNam * 24;

		// Mỗi tháng trả bao nhiêu
		float traThang = tongTra / (24 * 12);

		printf("Tra truoc: %.0f VND\n", traTruoc);
		printf("Tien vay: %.0f VND\n", soTienVay);
		printf("Tra hang thang: %.0f VND\n", traThang);
	}

void sapXepSinhVien()
{
	int n;
	printf("Nhap so sinh vien: ");
	scanf("%d", &n);

	char ten[50][100]; // mảng tên
	float diem[50];    // mảng điểm

	// nhập danh sách
	for (int i = 0; i < n; i++)
	{
		printf("Nhap ten sinh vien %d: ", i + 1);
		scanf(" %[^\n]", ten[i]);

		printf("Nhap diem sinh vien %d: ", i + 1);
		scanf("%f", &diem[i]);
	}

	// Sắp xếp tăng dần theo điểm 
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (diem[i] > diem[j])   // đổi chỗ nếu sai
			{
				// đổi điểm
				float tempDiem = diem[i];
				diem[i] = diem[j];
				diem[j] = tempDiem;

				// đổi tên
				char tempTen[100];
				strcpy(tempTen, ten[i]);
				strcpy(ten[i], ten[j]);
				strcpy(ten[j], tempTen);
			}
		}
	}

	// in sau khi sắp xếp
	printf("\nDanh sach sau khi sap xep tang dan theo diem:\n");
	for (int i = 0; i < n; i++)
	{
		printf("%-25s  %.2f\n", ten[i], diem[i]);
	}
}

void Fpolygame()
{
	{



		int tieptuc9;
		do
		{
			system("cls");
			int so1, so2;
			int soNgauNhien1, soNgauNhien2;


			printf("=== FPOLY-LOTT (2/15) ===\n");
			printf("Nhap so thu nhat (01-15): ");
			scanf("%d", &so1);
			printf("Nhap so thu hai (01-15): ");
			scanf("%d", &so2);
			//ktra hop le
			if (so1 < 1 || so1 > 15 || so2 < 1 || so2 > 15) {
				printf("So nhap vao khong hop le! Chi chap nhan tu 01 den 15.\n");
			}

			// generate 2 so ngau nhien
			soNgauNhien1 = rand() % 15 + 1;
			soNgauNhien2 = rand() % 15 + 1;

			// dam bao 2 so khac nhau
			while (soNgauNhien1 == soNgauNhien2) {
				soNgauNhien2 = rand() % 15 + 1;
			}

			// output ket qua
			printf("\n=== KET QUA ===\n");
			printf("So cua ban: %02d va %02d\n", so1, so2);
			printf("So ket qua: %02d va %02d\n", soNgauNhien1, soNgauNhien2);

			// dem so trung
			int soTrung = 0;

			if (so1 == soNgauNhien1 || so1 == soNgauNhien2) {
				soTrung++;
			}
			if (so2 == soNgauNhien1 || so2 == soNgauNhien2) {
				soTrung++;
			}

			// Xac dinh ket qua
			printf("\n=== THONG BAO ===\n");
			switch (soTrung) {
			case 0:
				printf("Chuc ban may man lan sau!\n");
				break;
			case 1:
				printf("Chuc mung ban da trung giai nhi!\n");
				break;
			case 2:
				printf("CHUC MUNG BAN DA TRUNG GIAI NHAT!\n");
				break;
			}
			printf("Ban co muon tiep tuc khong? (1: Co, 0: Khong):\n ");
			scanf("%d", &tieptuc9);
		} while (tieptuc9 == 1);
		system("cls");
	}
 }

void chiaphanso()
{
	{


		int tieptuc10;
		do
		{
			system("cls");
			int tu1, mau1, tu2, mau2;

			printf("Nhap phan so 1 (tu/mau): ");
			scanf("%d/%d", &tu1, &mau1);

			printf("Nhap phan so 2 (tu/mau): ");
			scanf("%d/%d", &tu2, &mau2);

			// Ktra mau khac 0
			if (mau1 == 0 || mau2 == 0) {
				printf("Mau so phai khac 0!\n");
			}
			else {

				printf("\nPhan so 1: %d/%d\n", tu1, mau1);
				printf("Phan so 2: %d/%d\n\n", tu2, mau2);

				// tinh tong
				int tongTu = tu1 * mau2 + tu2 * mau1;
				int tongMau = mau1 * mau2;
				printf("Tong: (%d/%d) + (%d/%d) = %d/%d\n",
					tu1, mau1, tu2, mau2, tongTu, tongMau);

				// tinh hieu
				int hieuTu = tu1 * mau2 - tu2 * mau1;
				int hieuMau = mau1 * mau2;
				printf("Hieu: (%d/%d) - (%d/%d) = %d/%d\n",
					tu1, mau1, tu2, mau2, hieuTu, hieuMau);

				// tinh tich
				int tichTu = tu1 * tu2;
				int tichMau = mau1 * mau2;
				printf("Tich: (%d/%d) * (%d/%d) = %d/%d\n",
					tu1, mau1, tu2, mau2, tichTu, tichMau);

				// tinh thuong
				if (tu2 == 0) {
					printf("Thuong: Khong the chia cho 0\n");
				}
				else {
					int thuongTu = tu1 * mau2;
					int thuongMau = mau1 * tu2;
					printf("Thuong: (%d/%d) / (%d/%d) = %d/%d\n",
						tu1, mau1, tu2, mau2, thuongTu, thuongMau);
				}
			}
			printf("Ban co muon tiep tuc khong? (1: Co, 0: Khong):\n ");
			scanf("%d", &tieptuc10);
		} while (tieptuc10 == 1);
		system("cls");
	}
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
			case 4:
				tinhTienDien();
				break;
			case 5:
				doiTien();
				break;
			case 6:
				TinhLaiSuatVayNganHangVayTraGop();
				break;
			case 7:
				vaytienmuaxe();
				break;
			case 8:
				sapXepSinhVien();
				break;
			case 9:
				Fpolygame();
				break;
			case 10:
				chiaphanso();
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
		printf("4. tinhtiendien");
		printf("\n");
		printf("5. doitien");
		printf("\n");
		printf("6. TinhLaiSuatVayNganHangVayTraGop");
		printf("\n");
		printf("7. vay tien mua xe ");
		printf("\n");
		printf("8. ");
		printf("\n");
		printf("9. ");
		printf("\n");
		printf("10. ");
		printf("\n");
		printf("Hay chon CN [0-10]: ");
		scanf("%d", &chonChucNang);
		lapChucNang(chonChucNang);
	} while (chonChucNang != 0);
}
