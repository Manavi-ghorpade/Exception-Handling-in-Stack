#include<iostream>
#include "Stack.h"
#include "Nausea.h"
using namespace std;

//Stack::push w/reallocation
int main()
{
  Nausea queasy;std::cerr << '\n';
  Stack<Nausea> famousA;
  for(int i=0; i<10; ++i)
    famousA.push(queasy);
  //force a reallocation
  std::cerr<<"\nsize before push requiring reallocation=" << famousA.size() << "\n";
  famousA.push(queasy);
  std::cerr<<"\nsize after push requiring reallocation=" << famousA.size();
  std::cerr<<"\nprogram ending\n";
  return 0;
}
