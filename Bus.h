#pragma once
#include "Car.h"
#include <string>
#include <iostream>
#include <sstream>
class Bus :public Car
{
private:
	int Number_of_passenger_seats;
public:
	Bus();
	Bus(int);
	Bus(Bus&);
	void SetNumber_of_passenger_seats(int  Power);
	int GetNumber_of_passenger_seats() const;

	void  Re_assignment_Number_of_passenger_seats();
	void  Change_Number_of_passenger_seats();

	friend ostream& operator << (ostream& out, const Bus& A);
	friend istream& operator >> (istream& in, Bus& A);
	operator string() const;

	Bus& operator ++ ();
	Bus& operator -- ();
	Bus operator ++ (int);
	Bus operator -- (int);
};

