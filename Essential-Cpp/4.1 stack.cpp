#include"stack.h"


bool Stack::push(const string &s){
  if (full()) return false;
  _stackVec.push_back(s);
  return true;
}
bool Stack::pop(string &s){
  if (empty()) return false;
  s = _stackVec.back();
  _stackVec.pop_back();
  return true;
}
bool Stack::peek(string &s){
  if (empty()) return false;
  s = _stackVec.back();
  return true;
} 
