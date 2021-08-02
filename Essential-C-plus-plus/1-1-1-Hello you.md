```C++
#include <iostream>
#include <string>
using namespace std;
int main(){
  string user_name;
  cout << "please enter your first name: ";
  cin >> user_name;
  cout << "\nHello, " << user_name << "... and goodbye!\n";
  return 0;
}
```

- Undefined reference to main() means that your program lacks a main() function, which is mandatory for all C++ programs. Add this somewhere:
```C++
int main()
{
  return 0;
}
```
