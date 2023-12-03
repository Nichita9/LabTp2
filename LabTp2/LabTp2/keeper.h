#pragma once
#include "aeroflot.h"
class Keeper
{
public:
	Keeper();
	~Keeper();
	Keeper(Aeroflot* obj);
	void Sort();//������� ���������� �� ����������� �������
	void Push();//���������� �������
	void Pop();//�������� �������
	void Show();//����� �� �����
	void Edit(const int& change);//�������������� �������
	void AircraftTypeInformation(std::string aircraft_type);
private:
	Aeroflot* object;
	int size;
};

