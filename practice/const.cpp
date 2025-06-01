#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "ru-RU.UTF-8");
    //Хотим записать неизменные кол-во недель
    //Обязательно с большими буквами это синтаксис const
    const int CONST_DAYS_IN_WEEK = 7;

    //Выведем const переменную
    cout << CONST_DAYS_IN_WEEK << endl;

    const char NEW_LINE = '\n';
    const char NEW_TAD = '\t';

    //Выведем const переменную
    cout << CONST_DAYS_IN_WEEK << NEW_LINE;
    //Выведем const переменную
    cout << CONST_DAYS_IN_WEEK << NEW_TAD;

}