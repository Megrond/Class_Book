#pragma once
#include <Windows.h>
#include <iostream>

class Book
{
private:
	char* director;
	char* title;
	char* publishing;
	unsigned int year;
	unsigned int number_of_pages;

public:
	Book(const char* director, const char* title, const char* publishing, unsigned int year, unsigned int number_of_pages) :
		director{director ? new char[strlen(director) + 1] : nullptr },
		title{ title ? new char[strlen(title) + 1] : nullptr },
		publishing{ publishing ? new char[strlen(publishing) + 1] : nullptr },
		year{ year },
		number_of_pages{ number_of_pages } {

		if (director)
		{
			strcpy_s(this->director, strlen(director) + 1, director);
		}
		if (title)
		{
			strcpy_s(this->title, strlen(title) + 1, title);
		}
		if (publishing)
		{
			strcpy_s(this->publishing, strlen(publishing) + 1, publishing);
		}
	}
	explicit Book(const char* title) : Book(nullptr, title, nullptr, 0, 0) {}

	void show() const;

	char* getDirector() const
	{
		return director;
	}
	char* getPublishing() const
	{
		return publishing;
	}
	unsigned int getYear() const
	{
		return year;
	}
};

