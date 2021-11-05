#include <stdio.h>
#include <iostream>

#include "SampleClass.h"

int main(int argc, char* argv[])
{

  std::cout << "hello world" << std::endl;

  std::priority_queue<SampleClass*, std::vector<SampleClass*>, GreaterThanTimestamp> timestamp_queue;
  
  for(long i = 0; i < 20; i++)
    {
      char* tmp_char_array = new char[100];
      SampleClass* tmpSampleClass = new SampleClass(i, tmp_char_array);
      timestamp_queue.push(tmpSampleClass);
    }



  while(! timestamp_queue.empty())
    {
      SampleClass* outValue = timestamp_queue.top();
      std::cout << outValue->GetExpirationTimestamp() << std::endl;
      timestamp_queue.pop();
    }
  
  std::cout << "outro world" << std::endl;
  return 0;
}
