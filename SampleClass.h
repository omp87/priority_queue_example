#include <stdio.h>
#include <iostream>

#include <vector>
#include<queue>

class SampleClass{
 private:
  long expiration_timestamp;
  char* p_char_array;
 public:
  SampleClass(int new_expiration_timestamp, char* p_new_char_array);
  ~SampleClass();
  long GetExpirationTimestamp();
};

struct GreaterThanTimestamp
{
  bool operator()(SampleClass* lhs, SampleClass* rhs) const
  {
    return lhs->GetExpirationTimestamp() > rhs->GetExpirationTimestamp();
  }
};
