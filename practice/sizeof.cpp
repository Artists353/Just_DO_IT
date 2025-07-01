//Базовые библиотеки 
#include <iostream>
using namespace std;

//Главная функция запуска 
int main(){
    setlocale(LC_ALL, "ru-RU.UTF-8");

     
    int arr[]{6, 6546, 64356, 345, 5345};

    int a = sizeof(arr);
    int b = sizeof(double);
    cout << sizeof(arr)/sizeof(int) << endl;
    for (int i = 0; i < sizeof(arr)/ sizeof(arr[0]); i++){
        cout << arr[i] << endl;
    }
}