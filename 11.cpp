#include<iostream>
#include "Stack.h"
#include "Nausea.h"
using namespace std;

//Stack assignment operator 
//stack of 5 items to 
//stack of 3 items
int main()
{
  Nausea queasy;std::cerr << '\n';
  Stack<Nausea> famousA;
  Stack<Nausea> famousB;
  for(int i=0; i<3; ++i)
    famousB.push(queasy);
  for(int i=0; i<5; ++i)
    famousA.push(queasy);
  std::cerr<<"\nfamousA.size()=" << famousA.size() << '\n';;
  std::cerr<<"\nfamousB.size()=" << famousB.size() << '\n';;
  famousB=famousA;
  std::cerr<<"\nfamousA.size()=" << famousA.size() << '\n';;
  std::cerr<<"\nfamousB.size()=" << famousB.size() << '\n';;
  std::cerr<<"\nprogram ending\n";
  return 0;
}
