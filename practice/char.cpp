//Главная библиотека для вывода текста
#include <iostream>
//Библиотека для создания переменных string типа 
#include <string>
using namespace std;

//Главная функция
int main(){
    //Функция для компилятора на русский язык
    setlocale(LC_ALL, "ru-RU.UTF-8");

    /*char hello = 'Hello, World!';

    cout << hello << endl;*/
    string name = "Artem";
    cout << "Hello " << name << endl;
    return 0;

}