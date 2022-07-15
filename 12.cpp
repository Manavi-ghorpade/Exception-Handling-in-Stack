#include<iostream>
#include "Stack.h"
#include "Nausea.h"
using namespace std;

//Stack assignment operator throw on assignment
//stack of 5 items to 
//stack of 3 items
int main()
{
  Nausea::type=Nausea::copy_ctor;
  Nausea::trigger=12;

  Nausea queasy;std::cerr << '\n';
  Stack<Nausea> famousA;
  Stack<Nausea> famousB;
  for(int i=0; i<3; ++i)
    famousB.push(queasy);
  for(int i=0; i<5; ++i)
    famousA.push(queasy);
  std::cerr<<"\nfamousA.size()=" << famousA.size() << '\n';;
  std::cerr<<"\nfamousB.size()=" << famousB.size() << '\n';;
  try {
    famousB=famousA;
  }
  catch(...)
  {
    std::cerr << "\nEXCEPTION CAUGHT";
  }
  std::cerr<<"\nfamousA.size()=" << famousA.size() << '\n';;
  std::cerr<<"\nfamousB.size()=" << famousB.size() << '\n';;
  std::cerr<<"\nprogram ending\n";
  famousA.top();
  famousA.pop();
  std::cerr<<"\nfamousA.size()=" << famousA.size() << '\n';;
  return 0;
}
