#include "TQueue.h"

#include <gtest.h>

TEST(TQueue, can_create_queue_with_positive_length)
{
	ASSERT_NO_THROW(TQueue<int> Que(5));
}

TEST(TQueue, cannot_create_queue_with_negetive_length)
{
	ASSERT_ANY_THROW(TQueue<int> Que(-5));
}

TEST(TQueue, cannot_create_queue_with_length_larger_MaxStackSize)
{
	ASSERT_ANY_THROW(TQueue<int> Que(10001));
}

TEST(TQueue, can_add_element)
{
	TQueue<int> Que(2);
	Que.AddElQueue(1);
	EXPECT_EQ(Que.GetTop(), 1);
}


TEST(TQueue, can_delete_element)
{
	TQueue<int> Que(2);
	Que.AddElQueue(1);
	Que.AddElQueue(2);
	Que.TakeElQueue();

	EXPECT_EQ(Que.GetTop(), 2);
}

TEST(TQueue, can_get_lenght_of_queue)
{
	TQueue<int> Que(2);
	Que.AddElQueue(1);
	Que.AddElQueue(2);
	EXPECT_EQ(2, Que.BusyElSize());
}

TEST(TQueue, check_Empty_if_Queue_Is_Empty)
{
	TQueue<int> Que(2);

	EXPECT_TRUE(Que.Empty());
}

TEST(TQueue, check_Empty_if_Queue_not_Is_Empty)
{
	TQueue<int> Que(2);
	Que.AddElQueue(1);

	EXPECT_FALSE(Que.Empty());
}

TEST(TQueue, check_Full_if_Queue_Is_Full)
{
	TQueue<int> Que(2);
	Que.AddElQueue(1);
	Que.AddElQueue(2);

	EXPECT_TRUE(Que.Full());
}

TEST(TQueue, check_Full_if_Queue_not_Is_Full)
{
	TQueue<int>  Que(2);

	EXPECT_FALSE(Que.Full());
}