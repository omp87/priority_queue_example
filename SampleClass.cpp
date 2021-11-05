#include "SampleClass.h"

SampleClass::SampleClass(int new_expiration_timestamp, char* p_new_char_array)
{
  expiration_timestamp = new_expiration_timestamp;
  p_char_array = p_new_char_array;
}

SampleClass::~SampleClass()
{
  delete p_char_array;
}

long SampleClass::GetExpirationTimestamp()
{
  return expiration_timestamp;
}
