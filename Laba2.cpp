

#include <iostream>
#include <Windows.h>
using namespace std;

double CalculationMahnager(double first, double second, char diya);

int main()
{
    SetConsoleOutputCP(1251);
    std::cout << "******����������� ������ 2******\n";
    double firstNum = 0;
    double secondNum = 0;
    char diya;

    cout << "������ ����� �����\n";
    cin >> firstNum;
    cout << "������ ����� �����\n";
    cin >> secondNum;
    cout << "������ �� �� ���� �������\n";
    cout << "(+)or(-)or(*)or(/)\n";
    cin >> diya;
    CalculationMahnager(firstNum, secondNum, diya);

}
double CalculationMahnager(double first, double second, char diya)
{
    double result;
    switch (diya) 
    {
    case '+':
        result = first + second;
        break;
    case '-':
        result = first - second;
        break;
    case '*':
        result = first * second;
        break;
    case '/':
        result = first / second;
        break;
    default:
        cout << "��²��� ��������\n";
        return 0;
    }
    cout << "���������: " << result; 
}

