#include "Bus.h"
Bus::Bus() : Car("", 0, 0) {}
Bus::Bus(int Number_of_passenger_seats = 0) : Car(Brand, Number_of_cylinders, Power) {}
Bus::Bus(Bus& A) : Car(A.GetBrand(), A.GetNumber_of_cylinders(), A.GetPower()) {}
void Bus::SetNumber_of_passenger_seats(int value)
{
	Number_of_passenger_seats = value;
}
int Bus::GetNumber_of_passenger_seats() const
{
	return Number_of_passenger_seats;
}

ostream& operator << (ostream& out, const Bus& A)
{
	out << string(A);
	return out;
}
istream& operator >> (istream& in, Bus& A)
{
	string Brand;
	int Number_of_cylinders, Power, Number_of_passenger_seats;
	cout << "Car: " << endl;
	cout << "Brand: "; in >> Brand;
	cout << "Number of cylinders: "; in >> Number_of_cylinders;
	cout << "Power: "; in >> Power;
	cout << "Bus: " << endl;
	cout << "Enter a Number of passenger seats: "; in >> Number_of_passenger_seats;
	A.SetBrand(Brand);
	A.SetNumber_of_cylinders(Number_of_cylinders);
	A.SetPower(Power);
	A.SetNumber_of_passenger_seats(Number_of_passenger_seats);
	return in;
}
Bus::operator string() const
{
	stringstream ss;
	ss << "Car: " << endl;
	ss << "Brand: " << this->GetBrand() << endl;
	ss << "Number of cylinders: " << this->GetNumber_of_cylinders() << endl;
	ss << "Power: " << this->GetPower() << endl;
	ss << "Bus: " << endl;
	ss << "Number of passenger seats: " << this->GetNumber_of_passenger_seats() << endl;
	return ss.str();
}
Bus& Bus::operator ++ ()
{
	this->SetPower(this->GetPower() + 1);
	return *this;
}
Bus& Bus::operator -- ()
{
	this->SetPower(this->GetPower() - 1);
	return *this;
}
Bus Bus::operator ++ (int)
{
	Bus t(*this);
	this->SetPower(this->GetPower() + 1);
	return t;
}
Bus Bus::operator -- (int)
{
	Bus t(*this);
	this->SetPower(this->GetPower() - 1);
	return t;
}
void Bus::Re_assignment_Number_of_passenger_seats()
{
	int n;
	cout << "re-enter Number_of_passenger_seats" << endl;
	cin >> n;
	Number_of_passenger_seats = n;
}

void Bus::Change_Number_of_passenger_seats()
{
	cout << "Change_Number_of_passenger_seats" << endl;
	cin >> Number_of_passenger_seats;
}