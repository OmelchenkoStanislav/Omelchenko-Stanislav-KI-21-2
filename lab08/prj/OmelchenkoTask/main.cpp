#include <iostream>
#include "ModulesOmelchenko.h"

using namespace std;

void copyrightsign()
{
    cout << "� ���������� ��������" << endl << endl;
}
void expression ()
{
    int  a ,b ;
    if (a + 1 <= b){
        cout <<"1"<<endl;
    }
    else {
        cout <<"0"<<endl;
    }

}
void DH(int x, int y, int z){
    cout << "(x) � ��������� ������ ��������: " << x << endl
         << "(y) � ��������� ������ ��������: " << y << endl
         << "(z) � ��������� ������ ��������: " << z << endl << endl;

    cout << "(x) � ������������� ������ ��������: " << hex << x << endl
         << "(y) � ������������� ������ ��������: " << hex << y << endl
         << "(z) � ������������� ������ ��������: " << hex << z << endl;
}

int main()
{
    system("chcp 1251 && cls");
    copyrightsign();
    int x = 0,y = 0,z = 0;
    int  a ,b ;
    cout << "������� ��������: x" << endl;
    cin >> x;
    cout << "������� ��������: y" << endl;
    cin >> y;
    cout << "������� ��������: z" << endl;
    cin >> z;
    cout << "������� ��������: a" << endl;
    cin >> a ;
    cout << "������� ��������: b" << endl;
    cin >> b ;
    cout <<"S = "<< s_calculation(x,y,z)<< endl;
    expression();
    DH(x,y,z);
    return 0;
}
