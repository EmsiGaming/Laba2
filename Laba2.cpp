

#include <iostream>
#include <Windows.h>
using namespace std;

double CalculationMahnager(double first, double second, char diya);

int main()
{
    SetConsoleOutputCP(1251);
    std::cout << "******Ћабораторна робота 2******\n";
    double firstNum = 0;
    double secondNum = 0;
    char diya;

    cout << "¬вед≥ть перше число\n";
    cin >> firstNum;
    cout << "¬вед≥ть друге число\n";
    cin >> secondNum;
    cout << "¬вед≥ть д≥ю м≥ж цими числами\n";
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
        cout << "Ќ≈¬≤–Ќ≈ ¬¬≈ƒ≈ЌЌя\n";
        return 0;
    }
    cout << "–езультат: " << result; 
}

