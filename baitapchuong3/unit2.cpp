/* Name : Nguyen Thi Ha Phuong
Bai 2 Giả sử có các khai báo sau:
int i =8;
int j = 5;
float x = 0.005;
float y = -0.01;
char c=’c’;
char d = ‘d’;
Viết chương trình tính và in ra giá trị của biểu thức sau:
(3 * i – 2 * j) % (2 * d - c)
2* ((j / 5) + ( 4 * (j – 3)) % ( i + j – 2))
(++i / j++) == 1
(j > 0) && (j<5) || (i >= j)
...
*/
#include <iostream>
using namespace std;

void main ()
{
    //Khai bao bien
	int i = 8;
	int j = 5;
	float x = 0.005;
	float y  = - 0.01;
	char c = 'c';
	char d = 'd';

	//Nhap gia tri
	cout << ((3*i-2*j) % (2*d-c)) <<endl;
	cout << 2*((j/5) + (4 *(j-3)) % (i+j-2)) <<endl;
	cout << ((++i / j++) == 1) <<endl;
	cout << ((j>0) && (j<5) || (i>=j)) <<endl;	//Tam dung chuong trinh	system ("pause");
}