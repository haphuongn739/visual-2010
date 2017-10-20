/* Name : nguyen thi ha phuong
Bai 5: Viết chương trình nhập vào các giá trị điện trở R1, R2, R 3 của một mạch điện.
Tính và hiển thị tổng trở theo công thức:
𝑅
=
1
𝑅1
+
1
𝑅2
+
1
𝑅3
...
*/
#include <iostream>
using namespace std;

void main ()
{
	//Khai bao bien
	int nR;
	int nR1;
	int nR2;
	int nR3;

	//Nhap gia tri
	cout << " Nhap R1: " <<endl;
	cin >> nR1;
	cout << " Nhap R2: " <<endl;
	cin >> nR2;
	cout << " Nhap R3: " <<endl;
	cin >> nR3;

	//Tinh

	nR = ((nR1*nR2*nR3) / (nR1*nR2 + nR2*nR3 + nR3*nR1));
	cout << "Tong tro la: " << nR <<endl;

	//Tam dung chuong trinh
	system ("pause");




}