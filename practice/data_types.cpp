#include <iostream>
using namespace std;

int main(){
    //Функция перевода для компилятора на русский язык
    setlocale(LC_ALL, "ru-RU.UTF-8");
    //Для того что бы создать переменнукю нужно указать тип данных и имя переменной
    //Тип данных - int имя_переменной - a
    int a;
    //Берём значение 5 в переменную a
    a = 5;
    cout << a << endl;

    //Можно сразу сделать так
    int b = 5;
    //Поменяли значение переменной 
    a = 10;

    //Много переменных объявляем
    int Age, c=5, g=6;
    //Выводим числа
    cout << Age << " " << c << " " << g << endl;

    //Символы
    char f = 'f';

    cout << f << endl;
    
    //Bool True or False 
    bool k = false;

    cout << k << endl;

    //Выводим переменную
    cout << a << endl;

}