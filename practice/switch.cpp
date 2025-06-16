//Базовые библиотеки
#include <iostream>
using namespace std;

//Вызов функции главной
int main(){
    //Функция перевода всё на русский язык
    setlocale(LC_ALL, "ru-RU.UTF-8");
    //Переменная a базовая
    int a; 
    //Ввод числа из библиотеки iostream
    cin >> a;
    //Switch 
    switch (a){
        //Case -- как оператор if 
        case 1:
            cout << "Ты ввёл 1" << endl;
            break;
        case 2:
            cout << "Ты ввёл 2" << endl;
            break;
        default:
            cout << "Ты ввёл значение не 1 и не 2" << endl;
            break;
    }
}