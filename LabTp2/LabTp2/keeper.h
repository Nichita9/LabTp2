#pragma once
#include "aeroflot.h"
class Keeper
{
public:
	Keeper();
	~Keeper();
	Keeper(Aeroflot* obj);
	void Sort();//Функция сортировки по алфавитному порядку
	void Push();//добавление объекта
	void Pop();//удаление объекта
	void Show();//вывод на экран
	void Edit(const int& change);//редактирование объекта
	void AircraftTypeInformation(std::string aircraft_type);
private:
	Aeroflot* object;
	int size;
};

