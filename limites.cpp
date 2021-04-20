// numeric_limits example
#include <iostream>     // std::cout
#include <limits>       // std::numeric_limits
using namespace std;

int main () {
  std::cout << boolalpha;
  std::cout << "Minimum value for int: " << numeric_limits<long int>::min() << '\n';
  std::cout << "Maximum value for int: " << numeric_limits<long int>::max() << '\n';
  std::cout << "int is signed: " << numeric_limits<long int>::is_signed << '\n';
  std::cout << "Non-sign bits in int: " << numeric_limits<long int>::digits << '\n';
  std::cout << "int has infinity: " << numeric_limits<long int>::has_infinity << '\n';
  return 0;
}

