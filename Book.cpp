#include "Book.h"
#include <Windows.h>
#include <iostream>

using namespace std;
void Book::show() const
{
	cout << title << " ( " << director << " ) [" << publishing << " - " 
		<< year << "�. ]" << " -- " << number_of_pages << " ���." << endl;

}



