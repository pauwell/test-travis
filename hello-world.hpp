#include <iostream>
#include <functional>

void hello_world()
{
    // Jason Turner https://github.com/lefticus
    // deserves credit for this creative way to test for C++17: 
    [out = std::ref(std::cout << "Hello ")](){ out.get() << "World\n"; }();
    
    duck(); // This should fail :^)
}
