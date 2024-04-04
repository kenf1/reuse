#include <iostream>
#include <version>

//confirm latest C++ standard supported by compiler
int cppver(){
    std::cout << "Latest C++ version supported by this compiler is: " << __cplusplus << std::endl;
    return 0;
}