//Главная библиотека
#include <iostream>
//Время библиотека
#include <ctime>
//используем пространство 
using namespace std;

//Главная библиотека запуска
int main(){
    //Функция перевода для компилятора на русский язык
    setlocale(LC_ALL, "ru-RU.UTF-8");
    //Функция инициализации числа
    srand(time(NULL));

    int a;
    cout << "Введите диапозон числа: ";
    cin >> a;

    int const SIZE = a;
    int arr[SIZE];

    for (int i = 0; i <= SIZE; i++){
        arr[i] = rand() % a;
    }

    for (int j = 0; j <= SIZE; j++){
        cout << arr[j] << endl;
    }
}