#include <array>
#include <iostream>
#include <iterator>

#include "filter.hpp"

bool accept_odd(value_type value) { return value % 2 != 0; }
bool below_5(value_type value) { return value < 5; }

int main() {
  std::array vet{-2, -8, 6, 7, -3, 10, 1, 0, -3, 7};

  // Printing the filtered array.
  std::cout << ">>> Original array  = [ ";
  
  for (const auto &e : vet) {
    std::cout << e << " ";
  }

  std::cout << "], Size = " << vet.size() << '\n';

  // Filtering
  auto *new_end = filter(vet.begin(), vet.cend(), below_5);

  // Printing the filtered array.
  std::cout << ">>> FILTERED array  = [ ";
  auto *runner = vet.begin();

  while (runner != new_end) {
    std::cout << *runner++ << " ";
  }

  std::cout << "], Size = " << std::distance(vet.begin(), new_end) << "\n";

  return EXIT_SUCCESS;
}
