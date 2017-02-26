#include <iostream>

class Vector {

private:
  double* elem;
  int sz;

public:
  Vector(int);

  ~Vector();

  double& operator[](int);

  int size() const;
};
