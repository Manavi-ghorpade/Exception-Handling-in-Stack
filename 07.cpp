#include<iostream>
#include "Stack.h"
#include "Nausea.h"
using namespace std;

//Stack copy ctor throws
int main()
{
  //Throws during Stack's copy ctor
  Nausea::type=Nausea::copy_ctor;
  Nausea::trigger=8;
  Nausea queasy;std::cerr << '\n';
  Stack<Nausea> famousA;
  for(int i=0; i<5; ++i)
    famousA.push(queasy);
  std::cerr<<"\nbefore throw in copy construction:\n";
  try {
    new Stack<Nausea>(famousA);
  }
  catch(...)
  {
    std::cerr << "\nEXCEPTION CAUGHT";
  }
  std::cerr<<"\nprogram ending\n";
  return 0;
}
