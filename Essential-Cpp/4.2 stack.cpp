#include"stack.h"
#include<algorithm>


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
bool Stack::find(const string &s) const{
  return ::find(_stackVec.begin(), _stackVec.end(), s) != _stackVec.end();
}
int Stack::count(const string &s) const{
  return ::count(_stackVec.begin(), _stackVec.end(), s);
}
