#include <iostream>
using namespace std;
int main()
{
    cout << "Hello World23345" << endl;
    int test = 0;
    cin >> test;
    return 0;
}

/*
Steps:

1) Make sample file (new.cpp)
2) Make launch.json for gdb C++ (and add path to exe file, gdb from MinGW)
3) Add tasks.json with "command" being any command line argument, for example "command": "make".
4) Add the make file

Useful setup things:
- Bash console: https://stackoverflow.com/questions/42606837/how-do-i-use-bash-on-windows-from-the-visual-studio-code-integrated-terminal
*/