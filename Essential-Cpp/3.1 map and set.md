```cpp
#include<iostream>
#include<fstream>
#include<map>
#include<set>
#include<string>
using namespace std;

int main(int argc, char *argv[]){
  ifstream readFile("inFile_3.1.txt");
  ofstream writeFile("outFile_3.1.txt");
  if (!readFile.is_open() || !writeFile.is_open()){
    cerr << "Failed to open files!" << endl;
    return -1;
  }

  map<string, int> wordMap;
  string excludedWordArr[10] = { "a", "an", "or", "the", "and", "but", "to", "you", "I", "of" };
  set<string> excludedWords(excludedWordArr, excludedWordArr + 10);
  
  string w;
  while (readFile >> w){
    if (excludedWords.count(w)) continue;
    wordMap[w]++;
  }

  cout << "Please enter a query word: ";
  cin >> w;
  bool found = false;
  for (map<string, int>::iterator itr = wordMap.begin(); itr != wordMap.end(); ++itr){
    if (itr->first == w){
      cout << "The query word " << w << " appeared " << itr->second << " times." << endl;
      found = true;
      break;
    }
  }
  if (!found) cout << "The query word was not found!" << endl;

  for (map<string, int>::iterator itr = wordMap.begin(); itr != wordMap.end(); ++itr){
    writeFile << itr->first << " : " << itr->second << endl;
  }
  
  return 0;
}
```
