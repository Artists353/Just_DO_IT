//Главная библиотеку на вывод число 
#include <iostream>
using namespace std;

//главная функция вывода 
int main(){
    //Функция перевода на русский
    setlocale(LC_ALL, "ru-RU.UTF-8");

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cout << "*";
        }
    }
}