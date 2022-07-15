#include<iostream>
#include "Stack.h"
#include "Nausea.h"
using namespace std;

//Stack::push
int main()
{
  Nausea queasy;std::cerr << '\n';
  Stack<Nausea> famousA;
  std::cerr<<"\nsize before=" << famousA.size() << "\n";
  famousA.push(queasy);
  famousA.push(queasy);
  famousA.push(queasy);
  famousA.push(queasy);
  famousA.push(queasy);
  std::cerr<<"\nsize after=" << famousA.size();
  std::cerr<<"\nprogram ending\n";
  return 0;
}
