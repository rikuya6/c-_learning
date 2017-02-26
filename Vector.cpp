#include "Vector.h"
#include <iostream>

double& Vector::operator[](int i)
{
  if(i < 0 || size() <= i)
    throw std::out_of_range{"Vector::operator[]"};
  return elem[i];
}

int Vector::size() const
{
  return sz;
}
