//Базовые библиотеки
#include <iostream>
using namespace std;

//Функция запуска программы 
int main(){
    //Функция перевода всё на русский для компилятора 
    setlocale(LC_ALL, "ru-RU.UTF-8"); 

    //переменная длина линии 
    int len;
    //Приглашение на ввод
    cout << "Число символов " << endl;
    //ввод
    cin >> len;

    //переменная символ 
    int symbol;
    //Приглашение на ввод
    cout << "1 - = Символ\n2 - & Символ" << endl;
    //ввод
    cin >> symbol;

    //переменная длина линии 
    int horizontal_or_vertical;
    //Приглашение на ввод
    cout << "1 - Вертикальная \n2 - Горизантальная " << endl;
    //ввод
    cin >> horizontal_or_vertical;
    int a = 0;
    int d = 0;
    if (symbol == 1) {
        if (horizontal_or_vertical == 1){
            while (a  <= len){  
                cout << "=" << endl;
                a++;
            }
        }
        else{
            while (a <= len){  
                cout << "=" << endl;
                a++;
        }
    }
    }
    if (symbol == 2){
        if (horizontal_or_vertical == 1){
            while (d <= len){  
                cout << "&";
                d++;
            }
        }
        else{
            while (d <= len){  
                cout << "&";
                d++;
            }
        }
    }
}