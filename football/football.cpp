#include <iostream>
using namespace std;

//не пойму, какие бы данные не вводил, выводит 0 побед и 0 ничьих ¯\_(ツ)_/¯

int main()



{
    setlocale(LC_ALL, "Russian");

    int result[20];
    int victory = 0;
    int draw = 0;
    int summ;
    for (int i = 0; i < 20; i++)
    {
        cin >> result[i];
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
    int n;
    cin >> n;

}