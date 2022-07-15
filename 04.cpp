#include<iostream>
#include "Stack.h"
#include "Nausea.h"
using namespace std;

//Stack::push w/reallocation & throw
int main()
{
  //Throw while copying into new memory required of reallocation during push
  //Thows on 5th item, requiring 4 items to be destructed before memory released
  Nausea::type=Nausea::copy_ctor;
  Nausea::trigger=15;

  Nausea queasy;std::cerr << '\n';
  Stack<Nausea> famousA;
  for(int i=0; i<10; ++i)
    famousA.push(queasy);
  //force a reallocation
  std::cerr<<"\nsize before push requiring reallocation=" << famousA.size() << "\n";
  try {
    famousA.push(queasy);
  }
  catch(...)
  {
    std::cerr << "\nEXCEPTION CAUGHT";
  }
  std::cerr<<"\nsize after push requiring reallocation=" << famousA.size();
  std::cerr<<"\nprogram ending\n";
  return 0;
}
