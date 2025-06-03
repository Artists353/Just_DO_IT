#include <iostream>
using namespace std;

int main(){
    //Перевод на русский для компилятора 
    setlocale(LC_ALL, "ru-RU.UTF-8");

    //Переменная отрицательная
    int a = -5;
    //Вывод переменной
    cout << a << endl;

    //Три переменной 
    int f = 5, b = 2, c;

    c = f + b;

    cout << c << endl;
}