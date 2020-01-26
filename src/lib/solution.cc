#include "solution.h"
#include <iostream>
double Solution::FindMedian(std::vector<int> &inputs) {
  int temp = 0;
  if (inputs.size() == 0) {
    return -1;
  }
  else{
    if (inputs.size()%2 == 0  ){
      temp = inputs.size()/2;
      return (inputs.at(temp-1)+inputs.at(temp))/2.0;
      }
    else{ 
      temp = inputs.size()/2;
      return inputs.at(temp);
    }
  } 
}
