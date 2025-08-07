#pragma once
#include "Date.h"
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
class InputeValidate
{
public:
	static bool isNumberBetween(int numberToVerify, int from, int to)
	{
		return (numberToVerify >= from && numberToVerify <= to);
	}
	static bool isNumberBetween(double numberToVerify, double from, double to)
	{
		return (numberToVerify >= from && numberToVerify <= to);
	}
	static bool isNumberBetween(short numberToVerify, short from, short to)
	{
		return (numberToVerify >= from && numberToVerify <= to);
	}
	static bool isDateBetween(Date dateToVerify, Date from,Date to)
	{
		return (Date::IsDate1EqualDate2(dateToVerify, from) || Date::IsDate1EqualDate2(dateToVerify, to) 
			&& 
			Date::Isdate1Beforedate2(from, dateToVerify) || Date::Isdate1Beforedate2(dateToVerify, to));
	}

	static bool isNumber(const string& str) {
		for (char c : str) 
		{
			if (!isdigit(c)) 
				return false;
		}
		return !str.empty();
	}
	static int readIntNumberBetween(int from,int to,string errorMessage)
	{
		string input;
		do
		{
			cout << "enter number between " << from << " and " << to << "\n";
			do
			{
			
				cin >> input;
				if(!isNumber(input))
					cout<<"plese enter a valid number\n";

			} while (!isNumber(input));
			if (!isNumberBetween(stoi(input), from, to))
				cout << errorMessage <<endl;
		} while (!isNumber(input));
		return stoi(input);
	}
};

