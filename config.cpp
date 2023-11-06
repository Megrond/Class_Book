#include "config.h"

void showBooksDirector(const char* director, Book* catalog)
{
	for (int i{ 0 }; i < 5; i++)
	{
		if (!_stricmp(catalog[i].getDirector(), director))
		{
			catalog[i].show();
		}
	}

}
