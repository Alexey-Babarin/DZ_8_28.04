#include <iostream>
#include <locale> // подключение библиотеки для работы с локалью

using namespace std;

class Overcoat 
{
public:
    string type; // тип пальто
    double price; // цена пальто

    // перегрузка оператора ==
    bool operator==(const Overcoat& other) 
    {
        return type == other.type; // сравнение типов одежды
    }

    // перегрузка оператора =
    void operator=(const Overcoat& other) 
    {
        type = other.type; // присваивание типа
        price = other.price; // присваивание цены
    }

    // перегрузка оператора >
    bool operator>(const Overcoat& other) 
    {
        return price > other.price; // сравнение цен
    }
};

int main() 
{
    setlocale(LC_ALL, "Russian"); // установка русской локали

    Overcoat coat1;
    coat1.type = "пальто";
    coat1.price = 100;

    Overcoat coat2;
    coat2.type = "пальто";
    coat2.price = 150;

    if (coat1 == coat2) 
    {
        cout << "Типы одежды равны" << endl;
    }
    else 
    {
        cout << "Типы одежды не равны" << endl;
    }

    if (coat1 > coat2) 
    {
        cout << "Первое пальто дороже второго" << endl;
    }
    else 
    {
        cout << "Первое пальто не дороже второго" << endl;
    }

    coat1 = coat2; // присваивание объекта coat2 объекту coat1

    cout << "Тип пальто: " << coat1.type << ", Цена пальто: " << coat1.price << endl;

    return 0;
}