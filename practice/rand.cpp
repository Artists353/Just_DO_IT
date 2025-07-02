//Базовые библиотеки
#include <iostream>
//Подуключение библиотеки time
#include <ctime>
//Используем окружение std
using namespace std; 

//Главная функция
int main(){
    //Функцуя перевода на русский язык 
    setlocale(LC_ALL, "ru-RU.UTF-8");
    srand(time(NULL));
    //Генератор случайного числа
    /*int a = rand() % 10 + 5; 
    cout << a << endl;
     
    //генерирует случайное число
    int d = rand() % 10 + 5; 
    cout << d << endl;*/

    int const SIZE = 10;
    int arr[SIZE];

    for (int i = 0; i < SIZE; i++){
        arr[i] = rand() % 100;
    }
    for (int i = 0; i < SIZE; i++){
        cout << arr[i] << endl;
    }
}