#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(FindMedianTest, HandlesConsecutiveNumbers) {
  Solution solution;
  std::vector<int> inputs = {1, 2, 3, 4};
  EXPECT_EQ(solution.FindMedian(inputs), 2.5);
  //EXPECT_EQ(solution.FindMedianRecursive(inputs), 4);
}

TEST(FindMedianTest, HandlesConsecutiveNumbersOddLength) {
  Solution solution;
  std::vector<int> inputs = {1, 2, 7, 9, 12};
  EXPECT_EQ(solution.FindMedian(inputs), 7);
  //EXPECT_EQ(solution.FindMedianRecursive(inputs), 4);
}

TEST(FindMedianTest, HandlesSizeOne) {
  Solution solution;
  std::vector<int> inputs = {2};
  EXPECT_EQ(solution.FindMedian(inputs), 2);
 // EXPECT_EQ(solution.FindMedianRecursive(inputs), 2);
}

TEST(FindMedianTest, HandlesEmptyVector) {
  Solution solution;
  std::vector<int> inputs = {};
  EXPECT_EQ(solution.FindMedian(inputs), -1);
  //EXPECT_EQ(solution.FindMedianRecursive(inputs), -1);
}
