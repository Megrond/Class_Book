#include <Windows.h>
#include <iostream>
#include "Book.h"
#include "config.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");

	Book catalog[5] {
		{"Пушкин", "Онегин", "Рога и копыта", 2000, 10},
		{ "Хаскли", "О дивный новый мир", "Литрес", 2010, 11 },
		{ "Пушкин", "Золотая рыбка", "Литрес", 1000, 2000 },
		{ "Булгакова", "Мастер и маргарита", "Рога и копыта", 1999, 30 },
		{ "Толстой", "Война и мир", "Чудеса на ножках", 1785, 1400 },
	};

	showBooksDirector("Пушкин", catalog);

	return 0;
};