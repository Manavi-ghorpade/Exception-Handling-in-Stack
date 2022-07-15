#include<iostream>
#include "Stack.h"
#include "Nausea.h"
using namespace std;

//Stack::push w/throw on push
int main()
{
  //Throw while copying into new memory required of reallocation during push
  //Thows on 2nd push. No work to be done.
  Nausea::type=Nausea::copy_ctor;
  Nausea::trigger=2;

  Nausea queasy;std::cerr << '\n';
  Stack<Nausea> famousA;
  famousA.push(queasy);
  try {
    std::cerr<<"\nsize before push that throws=" << famousA.size() << "\n";
    famousA.push(queasy);
  }
  catch(...)
  {
    std::cerr << "\nEXCEPTION CAUGHT";
  }
  std::cerr<<"\nsize after push push that throws=" << famousA.size();
  std::cerr<<"\nprogram ending\n";
  return 0;
}
