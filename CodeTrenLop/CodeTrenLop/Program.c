#include <stdio.h>
#include <math.h>
#include <string.h>
void TinhToanCoBan()
{ //khai bao
    double sothuc;
    double sothuc2;
    double tong;
    double hieu;
    double tich;
    double thuong;

    //nguoi dung nhap
    printf("moi nhap so thu nhat:");
    scanf("%lf", &sothuc);
    printf("moi nhap so thu hai:");
    scanf("%lf", &sothuc2);
    //tinhtoan
    tong = sothuc + sothuc2;
    hieu = sothuc - sothuc2;
    tich = sothuc * sothuc2;
    thuong = sothuc / sothuc2;
    //in ket qua
    printf("tong : %lf + %lf = %.2lf", sothuc, sothuc2, tong);
    printf("\n");
    printf("hieu : %lf + %lf = %.2lf", sothuc, sothuc2, hieu);
    printf("\n");
    printf("tich : %lf + %lf = %.2lf", sothuc, sothuc2, tich);
    printf("\n");
    printf("thuong : %lf + %lf = %.2lf", sothuc, sothuc2, thuong);
    printf("\n");
    printf("tiep tuc[1=co || khac = khong");
    printf("\n");





}
void TinhHinhTron() {

    //khai bao
    double bankinh;
    double dientich;
    double chuvi;
    double pi = 3.14;
    // nguoidungnhap
    printf("nhap ban kinh hinh tron:");
    scanf("%lf", &bankinh);
    //tinhtoan
    dientich = 2 * pi * pow(bankinh, 2);
    chuvi = 2 * pi * bankinh;
    //ketqua
    printf("dien tich hinh tron : %.2lf * pow(%.2lf , 2) = %.2lf\n", pi, bankinh, dientich);
    printf("chu vi hinh tron : 2 * %.2lf  * %.2lf\n", pi, bankinh, chuvi);
}
void tinhthuong() {

    //khaibao
    double sobichia, sochia, thuong;
    //nhap so lieu
    scanf("%lf", &sobichia);
    scanf("%lf", &sochia);
    if (sochia == 0)
    {
        printf("so chia phai khac 0");
    }
    else if (sochia = 1)
    {
        printf("%lf", sobichia);
    }
    else if (sobichia == 0 && sochia != 0)
    {
        printf("0");
    }
    else
    {
        //tinh toan
        thuong = sobichia / sochia;
        //ket qua
        printf("%lf", thuong);
    }
}
void GiaiPhuongTrinhBac2()
{
    float a, b, c, delta, candelta, x1, x2;



    int chon = 1;
    while (chon == 1)
    {
        printf("giai phuong trinh bac hai");
        printf("nhap vao a,b,c:");
        scanf("%lf", &a);
        scanf("%lf", &b);
        scanf("%lf", &c);
        printf(" phuong trinh co dang: %.2fx^2 + %2.fx + %.2f=0\n", a, b, c);
        if (a != 0)
        {
            delta = pow(b, 2) - 4 * a * c;
            printf("delta = &f^2 - 4x%fx%f = %f\n", b, a, c, delta);
        }
        delta = pow(b, 2) - 4 * a * c;
        if (delta > 0)
        {
            candelta = sqrt(delta);
            x1 = (-b + candelta) / (2 * a);
            x2 = (-b - candelta) / (2 * a);
            printf("PT cos 2 nghiem phan biet:\n");
            if (x1 == (int)x1 && x2 == (int)x2)
            {
                printf("x1 = %f\n", x1);
                printf("x2 = %f\n", x2);
            }
            else
            {
                if (x1 == (int)x1) printf("x1 = %f\n", x1);
                else
                {
                    printf("x1 = (-%f+%f)/(2*%f)\n", b, candelta, a);
                }
                if (x2 == (int)x2) printf("x2 = %f\n", x2);
                else
                {
                    printf("x2 = (-%f - %f)/(2*%f)\n", b, candelta, a);
                }
            }
        }

        else if (delta == 0)
        {

        }
        printf("tiep tuc[1=co || khac = khong");
        printf("\n");
    }
}
void vonglapgoto()
{
    int chon2;
    printf("nhap lua chon cua ban:");
    scanf("%d", &chon2);
    if (chon2 < 0)
    {

    }
    printf("ban vua nhap: %d\n", chon2);
}// goto ko su dung nhu vong lap dung nhu buoc nhay
void vonglapfor()// lap voi so lan biet truoc
{
    for (int i = 0; i < 3; i++)//i = i+1
    {
        printf("ABC\n");
    }
}
void bangcuuchuong()//bang cuu chuong
{
    int bang = 2;
    for (int i = 0; i < 11; i++)
    {
        if (i == 0)
        {
            continue;
        }
        printf("%d * %d = %d\n", bang, i, bang * i);

        if (bang < 9 && i == 10)
        {
            bang += 6;
            i = 0;
        }
    }
}
void vonglap() {
    int i = 1;
    // vong lap
    while (1 == 1)
    {
        printf;
        system("cls");//clear screen
        printf("Ban co muon thuc hien tiep hay khong[1-Co|khac-Khong]:");
        scanf("%d", &i);
        break;
        printf("Ban vua nhap:%d\n", &i);
    }

}
void demovemang1chieu() {
    int array[4] = { 100,200,300,400 };//khai báo có khởi tạo
    // int array[4]; khai báo ko giá trị khởi tạo
    //int arraysize = sizeof(array);// size của array
    //printf("%d", arraysize);printf("\n");

    int intsize = sizeof(array);
    //printf("%d", intsize); printf("\n");
    int arraylength = sizeof(array) / sizeof(int);// lấy ra kích thước của mảng
    for (int i = 0; i < 4; i++)// làm ngắn hơn
    {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < arraylength; i++)
    {
        printf("%d", array[i]); printf("\n");
    }
}
void sapxepphantumang1chieu()
{
    int intergerarray[100];
    int length;
    int i;
    int tmp;
    printf("nhap so luong phan tu mang:");
    scanf("%d", &length);
    printf("nhap du lieu cho mang %d phan tu\n", length);
    for (int i = 0; i < length; i++)
    {
        printf("mang[%d]=", i);
        scanf("%d", &intergerarray[i]);
    }
    printf("xap xep tang dan du lieu mang %d phan tu\n");
    for (i = 0; i < length - 1; i++)
    {
        if (intergerarray[i] > intergerarray[i + 1])
        {
            tmp = intergerarray[i];
            intergerarray[i] = intergerarray[i + 1];
            intergerarray[i + 1] = tmp;
            i = -1;// reset lai vong lap

        }
    }
    printf("xuat mang du lieu mang %d phan tu\n");// theo thu tu giam dan
    for (i = length - 1; i > -1; i--)
    {
        printf("mang[%d]=%d\n", i, intergerarray[i]);
    }
    printf("xuat mang du lieu mang %d phan tu\n", length);// theo tang dan
    for (i = 0; i < length; i++)
    {
        printf("mang[%d]=%d\n", i, intergerarray[i]);
    }
}
void mang2chieu()
{
	// string mảng 2 chiều kiểu chuỗi ( phải dùng < string.h> )
    char MangkyTu[10] = "Nam";// kieukhaibaoco2ngoactren"name"cothểkhaibaonhieukytu
    for (int i = 0;  i < 3; i++)
    {
        scanf(" %c", &MangkyTu[i]);
        if (MangkyTu[i] == '.')// de dung vong lap
        {
            break;
        }
    }
	//fgets(MangkyTu);
    for (int i = 0;  i < 3; i++)
    {
        printf("%c", MangkyTu[i]);
    }
    //puts(MangkyTu);// thay thế mảng for thứ 2
    
    
    
    
    int array[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Mang tai vi tri[%d][%d]= ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", array[i][j]);

        }
        printf("\n");
    }
}
void mangstringthem()
{
    // string mảng 2 chiều kiểu chuỗi ( phải dùng < string.h> )
    char mangkytu[50];
    while (getchar() != '\n');
    fgets(mangkytu, sizeof(mangkytu), stdin);
    printf("nhap du lieu ");
    printf("\n");
    // puts (mangkytu);

    printf("string length"); //( phải mở < string.h> ) //strlen để đếm ký tự chuỗi
    printf("%d", strlen(mangkytu - 1));//-1 bỏ ky tự xuống dòng
    printf("\n");
    printf("string compare the same as"); //( phải mở < string.h> ) //strcmp để so sánh chuỗi
    printf("%d", strcmp("aBc", "aBc"));// nếu trả về 0 là bằng nhau
    printf("\n");
    printf("string compare less than");
    printf("%d", strcmp("A", "C"));// nếu trả về âm là chuỗi 1 khác chuỗi 2
    printf("\n");
	printf("string reverse(DEcryption");// decryption để mã hóa
    printf("%s", strrev(mangkytu));
    printf("\n");
    printf("string reverse(Encryption");// decryption để giải mã hóa
    printf("%s", strrev(mangkytu));
    printf("\n");
	printf("strin Upper:");// viết hoa tất cả ký tự
    printf("%s", strupr(mangkytu));
    printf("\n");
    printf("strin Lower:");// viết thường tất cả ký tự
    printf("%s", strlwr(mangkytu));
    printf("\n");
	printf("print string in string:");// tìm chuỗi con trong chuỗi mẹ
    
    if (strstr(mangkytu,"A"!=NULL))
    {
        printf("found:");
		printf("%s", strstr(mangkytu, "A"));
    }
    else
    {
		printf("not found");
    }
	printf("\n");


    /*/printf("string reverse:"); //( phải mở < string.h> ) //strrev để đảo ngược chuỗi
    printf("%S", strrev(mangkytu));
	printf("\n");/**/

}




main()
{
    int chon;

    do
    {
        printf("menu");printf("\n");
        printf("1. Kiem Tra So Nguyen"); printf("\n");
        printf("2. tinhhinhtron"); printf("\n");
        printf("3. tinh tien quan karaoke"); printf("\n");
        printf("4. giai phuong trinh bac 2"); printf("\n");
        printf("5. vonglapgoto"); printf("\n");
        printf("6. vonglapfor"); printf("\n");
        printf("7. demo mang 1 chiều"); printf("\n");
        printf("8.xap xep mang 1 chieu "); printf("\n");
        printf("9.mang 2 chieu "); printf("\n");
        printf("10.mang string "); printf("\n");
        printf("0.thoat"); printf("\n");
        printf("chon chuc nang tren menu :");
        scanf("%d", &chon);

        switch (chon)
        {
        case 1:
            TinhToanCoBan();
            break;
        case 2:
            TinhHinhTron();
            break;
        case 3:
            tinhthuong();
            break;
        case 4:
            GiaiPhuongTrinhBac2();
            break;
        case 5:
            vonglapgoto();
            break;
        case 6:
            vonglapfor();
            break;
        case 7:
            demovemang1chieu();
            break;
        case 8:
            sapxepphantumang1chieu();
            break;
        case 9:
            mang2chieu();
            break;
        case 10:
            mangstringthem();
            break;
        case 0:
            printf("thoat");
            printf("\n");
            break;
        default:
            printf("hay chon cac noi dung khac[1-10]");
            break;
        }
    } while (chon != 0);
}
