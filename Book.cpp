#include "Book.h"
#include <Windows.h>
#include <iostream>

using namespace std;
void Book::show() const
{
	cout << title << " ( " << director << " ) [" << publishing << " - " 
		<< year << "г. ]" << " -- " << number_of_pages << " стр." << endl;

}



