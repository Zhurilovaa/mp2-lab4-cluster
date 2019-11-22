#ifndef __TTask_H__
#define __TTask_H__
#include <ctime>
#include <cstdlib>

using namespace std;

//Класс Задача
class  TTask
{
private:
	int NumberProcessors;//количество процессоров
	int Tacts;//количество тактов
	int isCreate;//признак создания задачи
public:
	TTask()
	{
		NumberProcessors = 0;
		Tacts = 0;
		isCreate = 0;
	}
	TTask(int _MP, int _Tact)
	{
		int r = 1 + rand() % 2;//сгенерировала признак создания задачи
		isCreate = r;
		if (isCreate == 2)//Если задача, должна быть создана
		{
			NumberProcessors = rand() % (_MP)+1;//сгенерировали количество процессоров для задачи
			Tacts = rand() % (_Tact) + 1;//сгенерировали количсетво тактов для задачи
		}
		else//задача "не создается"
		{
			NumberProcessors = 0;
		}
	}
	int GetNumberProcessors() 
	{
		return NumberProcessors;
	}
	int GetTacts()
	{
		return Tacts;
	}
	int GetIsCreate()
	{
		return isCreate;
	}
};
#endif