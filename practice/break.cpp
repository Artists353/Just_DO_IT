//базовая библиотека

#include <iostream>
using namespace std;

//функция запуска
int main(){
    //Функция перевода для компилятора
    setlocale(LC_ALL, "ru-ru.UTF-8");

    //Вывод 
    cout << "Начало цикла" << endl;

    //цикл работает бесконечно 
    for (int i = 0; ; i++){
        cout << "Переменная i = " << i << endl;
        //Если равняется i 5, то цикл ломается
        if (i == 5){
            //Ломается цикл
            break;
        }
    }
    cout << "Конец цикла" << endl;
}