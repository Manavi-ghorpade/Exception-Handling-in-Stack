#include "Stack.h"
#include<iostream>
using namespace std;
int main()
{
  Stack<int> s;
  s.push(5);
  s.push(9);
  s.push(57);
  s.push(77);
  cout<<"top= "<<s.top();
  s.pop();
  cout<<"top= "<<s.top();
  return 0;
}
