#include "TCluster.h"
#include "TCluster.cpp"
#include <gtest.h>

TEST(TCluster, can_create_Classter)
{
	TCluster TC;

	ASSERT_NO_THROW(TC.PreparationForWork(8, 40, 20, 0.8););
}
