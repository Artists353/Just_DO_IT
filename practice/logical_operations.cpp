//Подключаем базовые библиотеки
#include <iostream>
using namespace std;

int main(){
    int a = 2;
    int b = 3; 
    cout << (a == b) << endl;
    //Терминал: False
    cout << (4 > 5 ) << endl;
    //Терминал: True
    cout << (4 < 5 ) << endl;
    cout << !(a != b) << endl;
    //Если не равно a и b и 5 не больше 4, то True 
    cout << !((a != b) && (5 > 4)) << endl;
    //Если не равно a и b или 5 не больше 4, то True
    cout << !((a != b) || (5 > 4)) << endl;
}