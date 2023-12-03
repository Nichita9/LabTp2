#include"aeroflot.h"

Aeroflot::Aeroflot(std::string& destination, std::string& aircraft_type, int& flight_number)
{
	this->destination_ = destination;
	this->aircraft_type_ = aircraft_type;
	this->flight_number_ = flight_number;
}
Aeroflot::Aeroflot()
{
	std::cout << "������ ����������� �� ��������� Aeroflot\n";
	destination_ = "";
	aircraft_type_ = "";
	flight_number_ = 0;
}

Aeroflot::Aeroflot(Aeroflot& copy)
{
	std::cout << "������ ����������� ����������� Aeroflot\n";
	*this = copy;
}

Aeroflot::~Aeroflot()
{
	std::cout << "������ ���������� Aeroflot\n";
}

std::string Aeroflot::GetDestination()
{
	return this->destination_;
}

int Aeroflot::GetFlightNumber()
{
	return this->flight_number_;
}

std::string Aeroflot::GetAircraftType()
{
	return this->aircraft_type_;
}

void Aeroflot::SetDestination(std::string destination)
{
	this->destination_ = destination;
}

void Aeroflot::SetFlightNumber(int flight_number)
{
	this->flight_number_ = flight_number;
}

void Aeroflot::SetAircraftType(std::string aircfaft_type)
{
	this->aircraft_type_ = aircfaft_type;
}

Aeroflot& Aeroflot::operator=(Aeroflot& copy)
{
	this->destination_ = copy.destination_;
	this->aircraft_type_ = copy.aircraft_type_;
	this->flight_number_ = copy.flight_number_;
	return *this;
}

std::istream& operator>>(std::istream& in, Aeroflot& object)
{
	setlocale(LC_ALL, "russian");
	std::cout << "Enter the data\n";
	std::cout << "�������� ������ ���������� �����: ";
	getchar();
	std::getline(std::cin, object.destination_);
	int check;
	while (1)
	{
		std::cout << "����� �����: ";

		if (std::cin >> check)
		{
			if (check > 0)
			{
				object.flight_number_=check;
				getchar();
				break;
			}
		}
		else
		{
			std::cout << "Incorrect value\n";
			std::cin.clear();
			std::cin.ignore(1024, '\n');
		}
	}
	std::cout << "��� ��������: ";
	std::getline(std::cin, object.aircraft_type_);
	return in;
}

std::ostream& operator<<(std::ostream& out, Aeroflot& object)
{
	setlocale(LC_ALL, "russian");
	out << "�������� ������ ����������: " << object.destination_ << std::endl;
	out << "����� �����: " << object.flight_number_ << std::endl;
	out << "��� ��������: " << object.aircraft_type_ << std::endl;
	return out;
}