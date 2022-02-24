// Copyright 2022 NNTU-CS
#include <cstdint>
#include <cmath>
#include "alg.h"


bool checkPrime(uint64_t value) {
  for (uint64_t g = 2 ; g <= sqrt(value); g++) {
  if (value % g == 0) {
    return false;
  }
  if (value == 1)
    return false;
  }
  return true;
}
uint64_t nPrime(uint64_t n) {
uint64_t count = 0;
uint64_t g = 1;
while (n != count) {
  g++;
  if (checkPrime(g)) {
    count++;
    if (n == count) {
      break;
      }
    }
  }
  return g;
}
uint64_t nextPrime(uint64_t value) {
uint64_t g = value + 1;
while (!checkPrime(g)) {
  g++;
    }
  return g;
  }
uint64_t sumPrime(uint64_t hbound) {
uint64_t sum = 0;
for (uint64_t g = 2; g < hbound; g++) {
  if (checkPrime(g)) {
    sum += g;
  }
}
return sum;
}
