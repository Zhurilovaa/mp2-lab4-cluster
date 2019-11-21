#include "TCluster.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int NumberProcessors;//Число процессоров
	int SizeQueue;//Размер очереди
	int Tacts;//Число тактов
	int exit = 1;
	double ProbabilityCreateTask;
	while (exit != 0)
	{
		cout << "Введите предполагаемое число процессоров" << endl;
		cin >> NumberProcessors;
		cout << endl;
		cout << "Введите предполагаемый размер очереди" << endl;
		cin >> SizeQueue;
		cout << endl;
		cout << "Введите необходимое число тактов" << endl;
		cin >> Tacts;
		cout << endl;
		cout << "Введите предполагаемую вероятность появления задач от 0 до 1" << endl;
		cin >> ProbabilityCreateTask;
		TCluster Work;
		Work.PreparationForWork(NumberProcessors, SizeQueue, Tacts, ProbabilityCreateTask);
		Work.GetStatistics();
		cout << "Желаете выйти из программы?" << endl;
		cout << "Если да - 0, если нет - 1." << endl;
		cin >> exit;
	}
	return 0;
}