#include<iostream>

using namespace std;

void thongTinHCN(int, int, int &, int &);

int main() {

    int x = 8, y = 5;
    int chuvi, dientich;

    thongTinHCN(x, y, chuvi, dientich);

    cout << "Chu vi = " << chuvi << endl;
    cout << "Dien tich = " << dientich << endl;

    return 0;
}

void thongTinHCN(int a, int b, int &cv, int &dt) {
    cv = (a + b) * 2;
    dt = a * b;
}



bool kiemTraChanLe(int n) {
    /*bool ketQua;

    if (n % 2 == 0)
        ketQua = true;
    else
        ketQua = false;

    return ketQua;*/

    /*if (n % 2 == 0)
        return true;
    else
        return false;*/

    //return n % 2 == 0 ? true : false;

    return n % 2 == 0;
}

double tinhGiaiThua(int n) {
    double tich = 1;

    for(int i = 1; i <= n; i++)
        tich *= i;

    return tich;
}


int tinhTong(int n) {
    int tong = 0;

    for(int i = 1; i <= n; i++)
        tong += i;

    return tong;
}
