//базовая библиотека
#include <iostream>
using namespace std;

//Функция запуска программы 
int main(){
    //Функция перевода на русский язык для компилятора 
    setlocale(LC_ALL, "ru-RU.UTF-8");

    int a = 19;

    do {
        cout << "Переменная равна= " << a << endl;
        a++;
    }while(a < 20);

}