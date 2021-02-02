#include "pch.h"
#include "../TA1/DataContainer.h"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(DataContainerTest, GetDataContainer)
{
	DataContainer myDataContainer;

	EXPECT_EQ(myDataContainer.GetContainerCount(), 1);
}