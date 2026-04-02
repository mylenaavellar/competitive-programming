#ifndef filter_HPP
#define filter_HPP

#include <functional>
using value_type = int;

value_type *filter(value_type *first, const value_type *last,
                   const std::function<bool(value_type)> &pred);

#endif