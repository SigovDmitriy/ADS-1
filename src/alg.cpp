// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  for (uint64_t g = 2 ; g <= sqrt(value); g++) {
  if (value % g == 0 && value <= 1) {
    return false;
  }
  }
  return true;
  
}

uint64_t nPrime(uint64_t n) {
uint64_t count = 0;
while (uint64_t g >= 2) {
  if (checkPrime(g)) {
    count += 1 ;
    if (n == count) {
      return g;
      }
    }
  }
}

uint64_t nextPrime(uint64_t value) {
while (uint64_t g >= value+1) {
  if (checkPrime(g)) {
    return g;
    }
  }
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
