//Базовые библиотеки
#include <iostream>
using namespace std;

//Главная функция
int main(){
    //Функция перевода на русский язык для компилятора
    setlocale(LC_ALL, "ru-RU.UTF-8");

    //цикл который выводит сообщение до того как переменная не будет равна 10
    for (int i = 0; i < 10; i++){
        //Если i равна 5 и 2, то мы пропустим эти выводы в цикле 
        if (i == 5 && i == 6){
            //Пропуск
            continue;
        }
        //Вывод сообщение
        cout << "Переменная i = " << i << endl;
    }
}