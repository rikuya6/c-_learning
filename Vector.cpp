#include "Vector.h"
#include <iostream>

Vector::Vector(int s)
{
  if (s < 0)
    throw std::length_error{"Vector constructor: negative size"};
  elem = new double[s];
  sz = s;

  for(int i = 0; i != s; ++i)
    elem[i] = 0;
}

Vector::~Vector() { delete[] elem; }

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
