//базовые библиотеки
#include <iostream>
using namespace std;


//Самая гланвная функция 
int main(){
    //Функция перевода на русский язык 
    setlocale(LC_ALL, "ru-Ru.UTF-8");

    //bool -- проверка на True или False 
    bool isRain = true;
    
    if (isRain){
        cout << "Идёт дождь. Нам нужен зонт" << endl;
    }

    //bool -- проверка на True или False 
    bool isRain_1 = false;
    
    if (isRain_1)
    {
        cout << "Идёт дождь. Нам нужен зонт" << endl;
    }
    else{
        cout << "Дождя нету. Зонт не нужен" << endl;
    }

    int number;
    cout << "Введите число: ";
    cin >> number;
    if (number > 5){
        cout << "Ваше число больше 5" << endl;
    }
    else if (number == 5){
        cout << " Ваше число равно 5-ти";
    }
    else {
        cout << "Ваша число меньше число 5 " << endl; 
    }
}