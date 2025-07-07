
//Базовая функция 
#include <iostream>
#include <cmath>
#include <string>
using namespace std;


//Функция для двух чисел
int sum(int i, int j){
    return i + j;
}

void greet(string name){
    cout << "Hello " << name << "!" << endl;
}

void print(string text, int times = 1) {
    for (int i = 0; i < times; i++) {
        cout << text << endl;
    }
}

//Синус
int sin_1(int x){
    return sin(x);
}

//Косинус
int cos_1(int x){
    return cos(x);
}

//Тангентс
int tan_1(int x){
    return sin(x);
}
//Главная функция
int main(){
    //Функция перевода на русский язык 
    setlocale(LC_ALL, "ru-RU.UTF-8");
    int result = sum(5, 3);
    greet("Artem");
    print("C++", 3);
    cout << "sum " << result << endl;
    int x;
    cout << "Введите число: ";
    cin >> x;
    string name;
    cout << "Введите что хотите посчитать ";
    getline(cin, name);
    if (name == "синус"){
        int sin_11 = sin_1(x);
        cout << sin_11 << endl;
    }
    else if (name == "косинус"){
        int cos_11 = cos_1(x);
        cout << cos_11 << endl;
    }
    else {
        int tan_11 = tan_1(x);
        cout << tan_11 << endl;
    }
}