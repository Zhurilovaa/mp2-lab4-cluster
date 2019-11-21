#ifndef __TQueue_H__
#define __TQueue_H__
#include <iostream>
const int MAX_QUEUE_SIZE = 10000;//Максимально возможный размер очереди
using namespace std;
template <class T>
class TQueue //Класс очередь
{
private:
	T* pQueue;//массив эдементов очереди
	int SizeQueue;//размер очереди
	int TopQueue;//Верх очереди
public:
	//Конструктор
	TQueue(int _size)
	{
		if ((_size < 0) || (_size > MAX_QUEUE_SIZE))
		{
			throw "The queue size is not correctly!!!";
		}
		else
		{
			SizeQueue = _size;//Установка размера очереди
			TopQueue = -1;//элементов пока нет
			pQueue = new T[SizeQueue];//выделение памяти под все предполагаемые элементы
		}
	}
	//Проверка на заполненность
	bool Full()
	{
		if (TopQueue == (SizeQueue - 1))
		{
			return true;
		}
		else
			return false;
	}
	//Проверка на пустоту
	bool Empty()
	{
		if (TopQueue == -1)
		{
			return true;
		}
		else
			return false;
	}
	//Добавить элемент в очередь
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
	//Взять элемент из очередь
	T TakeElQueue()
	{
		if (Empty() == true)
		{
			throw "Unable to take the item from the queue";
		}
		else
		{
			T elem = pQueue[0];//элемент - начало очереди
			//Сдвиг очереди вперёд
			for (int i = 0; i < TopQueue; i++)
			{
				pQueue[i] = pQueue[i + 1];
			}
			TopQueue = TopQueue - 1;
			return elem;
		}
	}
	//Предварительный просмотр вершины
	T GetTop()
	{ 
		return pQueue[0];
	}
	//Возврат числа занятых мест в очереди
	int BusyElSize()
	{
		int temp = TopQueue + 1;
		return temp;
	}
	//Деструктор
	~TQueue()
	{
		delete[] pQueue;
	}
};
#endif