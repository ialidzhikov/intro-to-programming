// �������� ������������� ���������, ����� ������� �� ����������� �� ������ ���������� �� ����� ������� (�� ��� �����) � ������ ��. 
// ���� ��������� ������ �� ��� �������� ��������. ������ �������� �������� �� �����������: ����� ���� �� ����� �� � �������
// � ����� �� �� ������.

#include <iostream>
using namespace std;

int main()
{
    string product1, product2, product3;
    cout << "Please enter 3 products!" << endl;
    cin >> product1 >> product2 >> product3;
    int quantity1, quantity2, quantity3;
    cout << "Enter quantities!" << endl;
    cin >> quantity1 >> quantity2 >> quantity3;

    double price1, price2, price3;
    cout << "Enter the price!" << endl;
    cin >> price1 >> price2 >> price3;

    cout << "Your order is " << product1 << "for " << price1 << "," << product2 << " for " << price2 << ", " << product3 << " for " << price3 << ". ";
    cout << "Total: " << (quantity1 * price1) + (quantity2 * price2) + (quantity3 * price3) << endl;

    return 0; 
}
