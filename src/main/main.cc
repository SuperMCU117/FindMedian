#include "src/lib/solution.h"
#include <iostream>

int main() {
  Solution solution;
  std::vector<int> inputs = {1, 5, 9};
  std::cout << "inputs:{1, 5, 9}, output:"  << solution.FindMedian(inputs)
            << std::endl;

  inputs = {};
  std::cout << "inputs: {}, output: " << solution.FindMedian(inputs) << std::endl;

  return 0;
}