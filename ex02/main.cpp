#include "identify.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

// ANSI color codes
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"
#define BOLD    "\033[1m"

int main() {
    std::cout << BOLD << CYAN << "=== CPP06 EX02: Type Identification Test ===" << RESET << std::endl;
    
    // Test 1: Random generation with pointer
    std::cout << "\n" << BOLD << YELLOW << "Test 1: Random Generation with Pointer" << RESET << std::endl;
    for (int i = 0; i < 10; i++) {
        Base* obj = generate();
        std::cout << "Generated object " << (i + 1) << ": ";
        identify(obj);
        delete obj;
    }
    
    // Test 2: Random generation with reference
    std::cout << "\n" << BOLD << YELLOW << "Test 2: Random Generation with Reference" << RESET << std::endl;
    for (int i = 0; i < 10; i++) {
        Base* obj = generate();
        std::cout << "Generated object " << (i + 1) << ": ";
        identify(*obj);
        delete obj;
    }
    
    // Test 3: Specific type testing with pointer
    std::cout << "\n" << BOLD << YELLOW << "Test 3: Specific Type Testing with Pointer" << RESET << std::endl;
    Base* objA = new A();
    Base* objB = new B();
    Base* objC = new C();
    
    std::cout << BLUE << "Testing A object:" << RESET << " ";
    identify(objA);
    std::cout << BLUE << "Testing B object:" << RESET << " ";
    identify(objB);
    std::cout << BLUE << "Testing C object:" << RESET << " ";
    identify(objC);
    
    delete objA;
    delete objB;
    delete objC;
    
    // Test 4: Specific type testing with reference
    std::cout << "\n" << BOLD << YELLOW << "Test 4: Specific Type Testing with Reference" << RESET << std::endl;
    A objA_ref;
    B objB_ref;
    C objC_ref;
    
    std::cout << BLUE << "Testing A reference:" << RESET << " ";
    identify(objA_ref);
    std::cout << BLUE << "Testing B reference:" << RESET << " ";
    identify(objB_ref);
    std::cout << BLUE << "Testing C reference:" << RESET << " ";
    identify(objC_ref);
    
    // Test 5: NULL pointer testing
    std::cout << "\n" << BOLD << YELLOW << "Test 5: NULL Pointer Testing" << RESET << std::endl;
    Base* nullPtr = NULL;
    std::cout << BLUE << "Testing NULL pointer:" << RESET << " ";
    identify(nullPtr);
    
    std::cout << "\n" << BOLD << GREEN << "=== All tests completed! ===" << RESET << std::endl;
    return 0;
}
