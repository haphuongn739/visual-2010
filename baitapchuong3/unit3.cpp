/* Name : nguyen thi ha phuong
Bai 3 :Viết chương trình nhập vào điểm ba môn Toán, Lý, Hóa của một học sinh. In
ra điểm trung bình của học sinh đó với hai số lẻ thập phân
...
*/
#include <iostream>
#include <iomanip>
using namespace std;

void main ()
{
    //Khai bao bien
	int nToan = 0.0;
	int nLy = 0.0;
	int nHoa =0.0;
	float nTB = 0.0;
	
	//Nhap gia tri
	cout << " nhap diem Toan: " <<endl;
	cin >> nToan;
	cout << " nhap diem Ly: " <<endl;
	cin >> nLy;
	cout << " nhap diem Hoa: " <<endl;
	cin >> nHoa;
	nTB = (nToan + nLy + nHoa) / 3;
	cout << "diem trung binh: " <<setprecision (3) <<nTB <<endl;

	//Tam dung chuong trinh
	system ("pause");

}
