/* Name : Nguyen Thi Ha Phuong
Bai 1 : Viết chương trình đọc vào 2 số nguyên và in ra kết quả của phép (+), phép trừ
(-), phép nhân (*), phép chia (/). Nhận xét kết quả chia 2 số nguyên.
....
*/
#include <iostream>
using namespace std;

void main ()
{
    //Khai bao bien
	int nNum1 = 0;
	int nNum2= 0;
	int nTong = 0;
	int nHieu = 0;
	int nTich = 0;
	float nThuong = 0;

	//Nhap gia tri
	cout << " Nhap so thu 1: ";
	cin >> nNum1;
	cout << " Nhap so thu 2: ";
	cin >> nNum1;

	//Tinh
	nTong = nNum1 + nNum2;
	nHieu = nNum1 - nNum2;
	nTich = nNum1 * nNum2;
	nThuong = (float) nNum1 - nNum2;

	//In ra ket qua
	cout << "tong la: " <<nTong <<endl;
	cout << "hieu la: " <<nHieu <<endl;
	cout << "tich la: " <<nTich <<endl;
	cout << "thuong la: " <<nThuong <<endl;

	//Tam dung chuong trinh
	system ("pause");

}