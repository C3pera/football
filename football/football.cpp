#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int result[20];
    int victory = 0;
    int draw = 0;
    int summ;
    for (int i = 0; i < 20; i++)
    {
        result[i] = rand() % 4; //Рандом, который выдает числа от 0 до 3
        if (result[i] == 2) // если число == 2, то прибавляется +1, т.к. в задаче ничего не написано про случай с двойкой
        {
            result[i] += 1;
        }
        cout << result[i] << "|";
    }
    for (int i = 0; i < 20; i++)
    {
        if (result[i] == 3)
            victory++;
        else if (result[i] == 1)
            draw++;
    }
    summ = victory + draw;

    cout << "Количество побед: " << victory << endl;

    cout << "Количесвто ничьих: " << draw << endl;

    cout << summ;
}
