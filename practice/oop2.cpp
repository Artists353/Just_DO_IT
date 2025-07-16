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
    int doctor_work(string work, string job_descriptions){
        setlocale(LC_ALL, "ru-RU.UTF-8");
        cout << "\nНачначена работа: " << work << endl;
        cout << "\nОписание работы: " << job_descriptions << endl;
        cout << "\nВыберите отложить эту работу или повесить её на других рабочих. \n1 - повесить на другого рабочего \n2 -- самому взяться за работу";
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
            else if(a == 1 && deputy_physician == false){
                cout << "О ноооооуууу, заметитель занят, пока прийдёться взяться за работу";
            }
            if (a==2 && doctor == true){
                cout << "Хорошо, врачи взялись за работу" << endl;
                doctor = false;
            }
            else if(a==2 && doctor == false){
                cout << "О ноооооуууу, врач занят, пока прийдёться взяться за работу";
            }
        }
        else if(obligation == 2) {
            cout << "Тогда за работу." << endl;
        }
        else{
            return 0;
        }
        return 5785785;
    }
};

int main(){
    //Функция перевода на русский язык для компилятора
    setlocale(LC_ALL, "ru-RU.UTF-8");
    Doctor d;
    d.doctor_say();
    int size;
    cout << "Сколько больных сегодня поступило в больницу: " << endl;
    cin >> size;
    const int SIZE = size;
    string arr[SIZE];
    string arr_b[SIZE];
    for (int i = 0; i <= size; i++){
        string a;
        cout << "Введите проблему " << i << "-ого пацеента";
        getline(cin, a);
        arr[i] = a;
        a = "";
        string b;
        cout << "Введите описание, что случилось с пациентом " << i << "-ого пацеента";
        getline(cin, b);
        arr_b[i] = b;
        b = "";
        if (d.doctor_work(arr[i], arr_b[i]) == 0){
            break;
        }
        else{
            d.doctor_work(arr[i], arr_b[i]);
        }
    }
    //Возращение 0
    return 0;
}