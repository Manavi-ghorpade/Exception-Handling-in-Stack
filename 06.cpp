#include<iostream>
#include "Stack.h"
#include "Nausea.h"
using namespace std;

//Stack copy ctor w/stack of 5 items
int main()
{
  Nausea queasy;std::cerr << '\n';
  Stack<Nausea> famousA;
  for(int i=0; i<5; ++i)
    famousA.push(queasy);
  std::cerr<<"\nCopy construction:\n";
  Stack<Nausea> famousB(famousA);
  std::cerr<<"\nprogram ending\n";
  return 0;
}
