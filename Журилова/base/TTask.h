#ifndef __TTask_H__
#define __TTask_H__
#include <ctime>
#include <cstdlib>

using namespace std;

// ласс «адача
class  TTask
{
private:
	int NumberProcessors;//количество процессоров
	int Tacts;//количество тактов

public:
	TTask()
	{
		NumberProcessors = 0;
		Tacts = 0;
	}
	TTask(int _MP, int _Tact, double _ProbabilityCreate)
	{
		srand((unsigned int)time(NULL));//инициализировали rand
		double r = (double)(rand() % 100) / 100;//сгенерировали число типа double,отвечает за веро€тность создани€
		if (r >= _ProbabilityCreate)//≈сли веро€тность создани€ больше, чем запрашиваемый минимум - создаем
		{
			NumberProcessors = rand() % (_MP * 1, 3) + 1;//сгенерировали количество процессоров дл€ задачи
			Tacts = rand() % (_Tact * 1, 1) + 1;//сгенерировали количсетво тактов дл€ задачи
		}
		else//задача "не создаетс€"
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
};
#endif