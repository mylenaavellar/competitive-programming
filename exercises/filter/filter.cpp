#include <algorithm>
#include <functional>

#include "filter.hpp"

// const tipo &variavel

value_type *filter(value_type *first, const value_type *last,
                   const std::function<bool(value_type)> &pred) {

  auto *slow{first};
  auto *fast{first};

  while (fast != last) {
    if (pred(*fast)) {
      std::iter_swap(fast, slow);
      slow++;
    }

    fast++;
  }

  return slow;
}