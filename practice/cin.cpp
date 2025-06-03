#include <iostream>
using namespace std;

int main(){
    //Функция перевода 
    setlocale(LC_ALL, "ru-RU.UTF-8");
    //Переменная в которую букдем вводить данные 
    int Var; 
    int Var2;
    
    //Приглашение на ввод
    cout << "Введите число: ";
    cin >> Var;

    cout << "Введите число: ";
    cin >> Var2;
    
    //Выводим переменную 
    cout << "Вы ввели число 1 : " << Var << endl << "Вы ввели число 2: " << Var2;
    
}