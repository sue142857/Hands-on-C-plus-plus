#ifndef STACK_H_
#define STACK_H_

#include<string>
#include<vector>
using namespace std;

class Stack{
public:
  bool empty() const {return _stackVec.empty();}
  bool full() const {return _stackVec.size() >= _stackVec.max_size();}
  int size() const {return _stackVec.size();}
  bool push(const string &);
  bool pop(string &);
  bool peek(string &); 
private:
  vector<string> _stackVec;
};

#endif
