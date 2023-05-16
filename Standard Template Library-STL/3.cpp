#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec;
  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);

 /*  // range-based for 문
  for (int elem : vec) {
    std::cout << "원소 : " << elem << std::endl;
  } */
  for (const auto& elem : vec) {
  std::cout << elem << std::endl;
    }

  return 0;
}