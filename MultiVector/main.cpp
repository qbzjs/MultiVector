#include "multivector.h"

#include <iostream>

int main() {
  MultiVector<int> my_array = MultiVector<int>(2, 1);
  my_array.SetValue(0, 0, 5);
  std::cout << my_array.GetValue(0, 0) << std::endl;
  system("PAUSE");
  return 0;
}