#include "gtest/gtest.h"

TEST(FirstTest, JustFail) {
	EXPECT_TRUE(false);
}

int main(int argc, char **argv){
	::testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}