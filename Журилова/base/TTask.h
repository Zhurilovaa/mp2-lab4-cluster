#ifndef __TTask_H__
#define __TTask_H__
#include <ctime>
#include <cstdlib>

using namespace std;

//����� ������
class  TTask
{
private:
	int NumberProcessors;//���������� �����������
	int Tacts;//���������� ������

public:
	TTask()
	{
		NumberProcessors = 0;
		Tacts = 0;
	}
	TTask(int _MP, int _Tact, double _ProbabilityCreate)
	{
		srand((unsigned int)time(NULL));//���������������� rand
		double r = (double)(rand() % 100) / 100;//������������� ����� ���� double,�������� �� ����������� ��������
		if (r >= _ProbabilityCreate)//���� ����������� �������� ������, ��� ������������� ������� - �������
		{
			NumberProcessors = rand() % (_MP * 1, 3) + 1;//������������� ���������� ����������� ��� ������
			Tacts = rand() % (_Tact * 1, 1) + 1;//������������� ���������� ������ ��� ������
		}
		else//������ "�� ���������"
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