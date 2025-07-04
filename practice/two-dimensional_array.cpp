//главная функция 
#include <iostream>
using namespace std;

//главная фукция 
int main() {
    //переводит всё на русский язык для компилятора
    setlocale(LC_ALL, "ru-RU.UTF-8");

    //Сохраняем, что  бы было навсегда в массиве число в const
    const int SIZE = 10;

    //Массив
    int arr[SIZE][SIZE]; 

    //ЦИКЛ ДЛЯ НАПОЛНЕНИЯ МАССИВА
    for (int i = 0; i <= SIZE; i++){
        for (int j = 0; j <= SIZE; j++){
            arr[i][j] == i, j;
        }
    }
    //вывод для двухмерного массива
    for (int i = 0; i <= SIZE; i++){
        for (int j = 0; j <= SIZE; j++){
            cout << "Двухмерный массив: " << arr[i][j] << endl;
        }
    }
}