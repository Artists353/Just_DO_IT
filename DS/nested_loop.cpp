//Главная библиотека
#include <iostream>
using namespace std;

int main() {


        //Функция перевода на русский
        setlocale(LC_ALL, "Russian");

        int a, b;
        cin >> a;
        cin >> b;
        for (int i = 0; i < a; i++) {

            for (int j = 0; j < b; j++) {
                cout << "*";
            }
            cout << endl;
        }
        cout << endl;
}