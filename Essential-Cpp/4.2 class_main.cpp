#include<iostream>
#include "stack.h"
using namespace std;

int main(int argc, char *argv[]){
  Stack mystack;
  string s;
  cout << "please enter some strings: ";
  while (cin >> s && !mystack.full()) mystack.push(s);
  
  cout << endl << "Please enter a query string: ";
  cin.clear();
  cin >> s;
  if (mystack.find(s))
    cout << s << " appeared " << mystack.count(s) << " times." << endl;
  else
    cout << s << " is not in the stack." << endl;

  if (mystack.empty()) 
    cerr << "The stack is empty." << endl;
  else
    cout << "There are " << mystack.size() << " strings in the stack: ";
  while (mystack.peek(s)){
    cout << s << " ";
    mystack.pop(s);
  }

  return 0;

}
