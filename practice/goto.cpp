//Базовые библиотеки
#include <iostream>
using namespace std; 

//Базовая функция
int main(){
    //Перевод для компилятора на русский язык
    setlocale(LC_ALL, "ru-RU.UTF-8");
    //выводы для теста goto
    cout << "Один" << endl;

    goto link;

    cout << "Два" << endl;

    cout << "Три" << endl;

    link:

    cout << "Четыре" << endl;

    cout << "Пять" << endl;
}