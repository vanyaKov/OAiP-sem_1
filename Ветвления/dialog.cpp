#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");
    int k;
    puts("Кинотеатр? (1-да, 2-нет)");
    cin >> k;
    switch (k)
    {
    case 1:puts("Жанр фильма?(1-Ужасы, 2-Драма, 3-Фэнтези)");
        cin >> k;
        switch (k)
        {
        case 1:puts("Нормально");
            break;
        case 2:puts("Плохой выбор");
            break;
        case 3:puts("Отличный выбор");
            break;
        
        }
        break;
    case 2:(puts("Сидите дома"));
        break;
    default:puts("Некорректный вариант");
    
    }

    return 0;
}