#include <iostream>
using namespace std;

int main(){
    //Функция перевода
    setlocale(LC_ALL, "ru-RU.UTF-8");

    //Переменные для цикла
    int a = 0; 

    cout << "Текст вывелся на экран" << endl;
    while (a <= 10){
        cout << "Переменная равна= " << a << endl;
        cout << "Текст вывелся на экран" << endl;
        a++;
    }
}