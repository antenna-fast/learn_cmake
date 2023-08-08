#include <iostream>
#include <string>

#include "lib_source.h"

using namespace std;

int main(int argc, char** argv){
    if(argc != 1){
        cout << " argc not match, Usage: " << endl;
        return -1;
    }

    std::cout << "running: " << argv[0] << std::endl;
    
    string a = "hhh";
    hello_lib(123);

    return 0;
}