#include <iostream>
extern "C" {
#include <secure-random/secure_random.h>
}

int main() {
  auto x = secureRandomUInt64();
  std::cout << "Some random number: " << x << std::endl;
  return 0;
}