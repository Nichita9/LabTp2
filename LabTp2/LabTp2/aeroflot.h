#pragma once
#include <iostream>
#include <string>
#include <exception>
class Aeroflot
{
public:
	Aeroflot();
	friend std::ostream& operator<< (std::ostream& out, Aeroflot& object);
	friend std::istream& operator>> (std::istream& in, Aeroflot& object);
	Aeroflot(std::string& destination, std::string& aircraft_type, int& flight_number);
	~Aeroflot();
	Aeroflot(Aeroflot& copy);
	Aeroflot& operator =(Aeroflot& copy);
	std::string GetDestination();
	int GetFlightNumber();
	std::string GetAircraftType();
	void SetDestination(std::string destination);
	void SetFlightNumber(int flight_number);
	void SetAircraftType(std::string aircraft_type);
private:
	std::string destination_;
	int flight_number_;
	std::string aircraft_type_;
};
