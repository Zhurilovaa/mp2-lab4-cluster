#ifndef __TQueue_H__
#define __TQueue_H__
#include <iostream>
const int MAX_QUEUE_SIZE = 10000;//����������� ��������� ������ �������
using namespace std;
template <class T>
class TQueue //����� �������
{
private:
	T* pQueue;//������ ��������� �������
	int SizeQueue;//������ �������
	int TopQueue;//���� �������
public:
	//�����������
	TQueue(int _size)
	{
		if ((_size < 0) || (_size > MAX_QUEUE_SIZE))
		{
			throw "The queue size is not correctly!!!";
		}
		else
		{
			SizeQueue = _size;//��������� ������� �������
			TopQueue = -1;//��������� ���� ���
			pQueue = new T[SizeQueue];//��������� ������ ��� ��� �������������� ��������
		}
	}
	//�������� �� �������������
	bool Full()
	{
		if (TopQueue == (SizeQueue - 1))
		{
			return true;
		}
		else
			return false;
	}
	//�������� �� �������
	bool Empty()
	{
		if (TopQueue == -1)
		{
			return true;
		}
		else
			return false;
	}
	//�������� ������� � �������
	void AddElQueue(const T elem)
	{
		if (Full() == true)
		{
			throw "Unable to add item to queue";
		}
		else
		{
			TopQueue = TopQueue + 1;
			pQueue[TopQueue] = elem;
		}
	}
	//����� ������� �� �������
	T TakeElQueue()
	{
		if (Empty() == true)
		{
			throw "Unable to take the item from the queue";
		}
		else
		{
			T elem = pQueue[0];//������� - ������ �������
			//����� ������� �����
			for (int i = 0; i < TopQueue; i++)
			{
				pQueue[i] = pQueue[i + 1];
			}
			TopQueue = TopQueue - 1;
			return elem;
		}
	}
	//��������������� �������� �������
	T GetTop()
	{ 
		return pQueue[0];
	}
	//������� ����� ������� ���� � �������
	int BusyElSize()
	{
		int temp = TopQueue + 1;
		return temp;
	}
	//����������
	~TQueue()
	{
		delete[] pQueue;
	}
};
#endif