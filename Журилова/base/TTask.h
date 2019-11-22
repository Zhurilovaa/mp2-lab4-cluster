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
	int isCreate;//������� �������� ������
public:
	TTask()
	{
		NumberProcessors = 0;
		Tacts = 0;
		isCreate = 0;
	}
	TTask(int _MP, int _Tact)
	{
		int r = 1 + rand() % 2;//������������� ������� �������� ������
		isCreate = r;
		if (isCreate == 2)//���� ������, ������ ���� �������
		{
			NumberProcessors = rand() % (_MP)+1;//������������� ���������� ����������� ��� ������
			Tacts = rand() % (_Tact) + 1;//������������� ���������� ������ ��� ������
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
	int GetIsCreate()
	{
		return isCreate;
	}
};
#endif