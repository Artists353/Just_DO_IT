//Библиотека для вывода текста на экран и ввод текста
#include <iostream>
//Библиотека для переменных символьных
#include <string>
using namespace std;

class Person{
    //Публичные данные -- значит эти данные доступны
    public:
    //Данные string и int
    string name;
    int age;

    //Функция в классе которая нечего не возращает
    void introduce(){
        //Фнукция для перевода компилятора на русский
        setlocale(LC_ALL, "ru-RU.UTF-8");
        //Вывод даннх
        cout << "Моё имя " << name << " Мой возраст " << age << endl;
    }
};

class BankAccount {
    private:
        double balance;
    
    public:
        void deposit(double amount) {
            if (amount > 0)
                balance += amount;
        }
    
        double getBalance() {
            return balance;
        }
};

class Animal {
        public:
            void speak() {
                cout << "Some animal sound\n";
            }
};
        
class Dog : public Animal {
        public:
            void bark() {
                cout << "Woof!\n";
            }
};

class Animal {
    public:
        virtual void speak() {
            cout << "Some sound\n";
        }
    };
    
class Cat : public Animal {
    public:
        void speak() override {
            cout << "Meow\n";
        }
};



int main(){
    Animal* a = new Cat();
    a->speak();  // Meow (динамический вызов)
    Dog d;
    d.speak();  // унаследовано
    d.bark();   // своё
    Person p;
    p.name = "Artem";
    p.age = 16;
    p.introduce();
    return 0;
}