//Главная функция
#include <iostream>
//Функция для переменных
#include <string>
//Пространство
using namespace std;

class Doctor{
    public:
    int iq = 150;
    string name = "diler";
    string job_title = "Главный доктор";
    bool deputy_physician = true;
    bool doctor = true;
    
    void doctor_say(){
        setlocale(LC_ALL, "ru-RU.UTF-8");
        cout << "Имя: " <<  name << "\nДолжность: " << job_title << "\nЕго ум: " << iq << endl;
    }
    void doctor_work(string work, string job_descriptions){
        setlocale(LC_ALL, "ru-RU.UTF-8");
        cout << "Начначена работа " << work << endl;
        cout << "Описание работы " << job_descriptions << endl;
        cout << "Выберите отложить эту работу или повесить её на других рабочих.";
        int obligation;
        cin >> obligation;
        if (obligation == 1){
            cout << "Работа не так важна, можете отложить её на заметителя или врачей ? 1-заметитель, 2-врач" << endl;
            int a;
            cin >> a;
            if (a == 1 && deputy_physician == true){
                cout << "Хорошо, переложили работу на вашего заместителя, пусть разбирается)))" << endl;
                deputy_physician = false;
            }
            else if(deputy_physician == false){
                cout << "О ноооооуууу, заметитель занят, пока прийдёться взяться за работу";
            }
            if (a==2 && doctor == true){
                cout << "Хорошо, врачи взялись за работу" << endl;
                doctor = false;
            }
            else if(doctor == false){
                cout << "О ноооооуууу, врач занят, пока прийдёться взяться за работу";
            }
        }
        else {
            cout << "Тогда за работу." << endl;
        }
    }
};

int main(){
    //Функция перевода на русский язык для компилятора
    setlocale(LC_ALL, "ru-RU.UTF-8");
    Doctor d;
    d.doctor_say();
    d.doctor_work("№1 работа связанная с ногой", "Нога человека поломанна, надо лечить.");
    //Возращение 0
    return 0;
}