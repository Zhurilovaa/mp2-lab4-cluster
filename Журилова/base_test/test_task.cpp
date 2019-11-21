#include "TTask.h"
#include <gtest.h>

TEST(TTask, can_create_Task)
{
	ASSERT_NO_THROW(TTask Que());
}
TEST(TTask, can_create_Task_with_characteristic)
{
	ASSERT_NO_THROW(TTask Que(8,10,0.5));
}

