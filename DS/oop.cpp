//Библиотека для вывода в консоль и ввод
#include <iostream>
//Для переменой 
#include <string>
using namespace std;


class Person_information{
    public:
        int iq = 120;
        int height = 180;
        int weight = 65;
        void person_say(){
            setlocale(LC_ALL, "ru-RU.UTF-8");
            cout << "Привет мир ооп";
        }
        void person_iq(){
            setlocale(LC_ALL, "ru-RU.UTF-8");
            cout << "\nIQ работника -- " << iq << endl;
        }
        void person_height(){
            setlocale(LC_ALL, "ru-RU.UTF-8");
            cout << "\nРост работника " << height << endl;
        }
        void person_weight(){
            setlocale(LC_ALL, "ru-RU.UTF-8");
            cout << "\nВес работника " << weight << endl;
        }

};


//Главная функция
int main(){
    Person_information p;
    p.person_say();
    p.person_iq();
    p.person_height();
    p.person_weight();
    return 0;
}
