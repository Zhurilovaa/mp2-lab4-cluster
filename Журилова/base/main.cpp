#include "TCluster.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int NumberProcessors;//����� �����������
	int SizeQueue;//������ �������
	int Tacts;//����� ������
	int exit = 1;
	double ProbabilityCreateTask;
	while (exit != 0)
	{
		cout << "������� �������������� ����� �����������" << endl;
		cin >> NumberProcessors;
		cout << endl;
		cout << "������� �������������� ������ �������" << endl;
		cin >> SizeQueue;
		cout << endl;
		cout << "������� ����������� ����� ������" << endl;
		cin >> Tacts;
		cout << endl;
		TCluster Work;
		Work.PreparationForWork(NumberProcessors, SizeQueue, Tacts);
		Work.GetStatistics();
		cout << "������� ����� �� ���������?" << endl;
		cout << "���� �� - 0, ���� ��� - 1." << endl;
		cin >> exit;
	}
	return 0;
}