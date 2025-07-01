//Базовая библиотека для вывода
#include <iostream>
using namespace std;

//Базовая функция 
int main(){
    //Функция для перевода на русский язык для компилятора 
    setlocale(LC_ALL, "ru-RU.UTF-8");
    //создаём массив
    /*int arr[4];
    //Назначаем первый массив значение 
    arr[0] = 5;
    arr[1] = 7;
    arr[2] = 7;
    arr[3] = 7;
    //Выводим значение
    cout << arr[0] << endl;*/

    /*int arr[5]{1, 66, 12, 2};
    cout << arr[4] << endl; */

    const int size = 5;

    int arr[size];
    

    for (int i = 0; i < size; i++){
        //Присваеваем каждое новое значение i к 
        arr[i] = i;
    }


    for (int i = 0; i < size; i++){
        cout << arr[i] << endl;
    }

    
}