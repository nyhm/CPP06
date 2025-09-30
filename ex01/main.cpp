#include "Serializer.hpp"
#include "Data.hpp"
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
    std::cout << BOLD << CYAN << "=== CPP06 EX01: Serialization Test ===" << RESET << std::endl;
    
    // Test 1: Normal Data object
    std::cout << "\n" << BOLD << YELLOW << "Test 1: Normal Data Object" << RESET << std::endl;
    Data* original = new Data(42, "test");
    
    std::cout << BLUE << "Original Data:" << RESET << std::endl;
    std::cout << "  " << GREEN << "value:" << RESET << " " << original->value << std::endl;
    std::cout << "  " << GREEN << "name:" << RESET << " " << original->name << std::endl;
    std::cout << "  " << GREEN << "address:" << RESET << " " << original << std::endl;
    
    // Serialize the pointer
    uintptr_t serialized = Serializer::serialize(original);
    std::cout << "\n" << MAGENTA << "Serialized value:" << RESET << " " << serialized << std::endl;
    
    // Deserialize back to pointer
    Data* deserialized = Serializer::deserialize(serialized);
    std::cout << "\n" << BLUE << "Deserialized Data:" << RESET << std::endl;
    std::cout << "  " << GREEN << "value:" << RESET << " " << deserialized->value << std::endl;
    std::cout << "  " << GREEN << "name:" << RESET << " " << deserialized->name << std::endl;
    std::cout << "  " << GREEN << "address:" << RESET << " " << deserialized << std::endl;
    
    // Verify they are the same
    std::cout << "\n" << YELLOW << "Verification:" << RESET << std::endl;
    std::cout << "  " << GREEN << "original == deserialized:" << RESET << " " 
              << (original == deserialized ? GREEN "true" : RED "false") << RESET << std::endl;
    std::cout << "  " << GREEN << "original->value == deserialized->value:" << RESET << " " 
              << (original->value == deserialized->value ? GREEN "true" : RED "false") << RESET << std::endl;
    std::cout << "  " << GREEN << "original->name == deserialized->name:" << RESET << " " 
              << (original->name == deserialized->name ? GREEN "true" : RED "false") << RESET << std::endl;
    
    delete original;
    
    // Test 2: NULL pointer
    std::cout << "\n" << BOLD << YELLOW << "Test 2: NULL Pointer" << RESET << std::endl;
    Data* nullPtr = NULL;
    
    std::cout << BLUE << "Original NULL pointer:" << RESET << " " << nullPtr << std::endl;
    
    // Serialize NULL pointer
    uintptr_t serializedNull = Serializer::serialize(nullPtr);
    std::cout << "\n" << MAGENTA << "Serialized NULL value:" << RESET << " " << serializedNull << std::endl;
    
    // Deserialize back to pointer
    Data* deserializedNull = Serializer::deserialize(serializedNull);
    std::cout << "\n" << BLUE << "Deserialized NULL pointer:" << RESET << " " << deserializedNull << std::endl;
    
    // Verify NULL handling
    std::cout << "\n" << YELLOW << "NULL Verification:" << RESET << std::endl;
    std::cout << "  " << GREEN << "nullPtr == deserializedNull:" << RESET << " " 
              << (nullPtr == deserializedNull ? GREEN "true" : RED "false") << RESET << std::endl;
    std::cout << "  " << GREEN << "Both are NULL:" << RESET << " " 
              << (nullPtr == NULL && deserializedNull == NULL ? GREEN "true" : RED "false") << RESET << std::endl;
    
    // Test 3: Multiple objects
    std::cout << "\n" << BOLD << YELLOW << "Test 3: Multiple Objects" << RESET << std::endl;
    Data* obj1 = new Data(100, "first");
    Data* obj2 = new Data(200, "second");
    
    std::cout << BLUE << "Object 1:" << RESET << " " << obj1 << " (value: " << obj1->value << ", name: " << obj1->name << ")" << std::endl;
    std::cout << BLUE << "Object 2:" << RESET << " " << obj2 << " (value: " << obj2->value << ", name: " << obj2->name << ")" << std::endl;
    
    uintptr_t serialized1 = Serializer::serialize(obj1);
    uintptr_t serialized2 = Serializer::serialize(obj2);
    
    Data* deserialized1 = Serializer::deserialize(serialized1);
    Data* deserialized2 = Serializer::deserialize(serialized2);
    
    std::cout << "\n" << YELLOW << "Multiple Objects Verification:" << RESET << std::endl;
    std::cout << "  " << GREEN << "obj1 == deserialized1:" << RESET << " " 
              << (obj1 == deserialized1 ? GREEN "true" : RED "false") << RESET << std::endl;
    std::cout << "  " << GREEN << "obj2 == deserialized2:" << RESET << " " 
              << (obj2 == deserialized2 ? GREEN "true" : RED "false") << RESET << std::endl;
    std::cout << "  " << GREEN << "obj1 != obj2:" << RESET << " " 
              << (obj1 != obj2 ? GREEN "true" : RED "false") << RESET << std::endl;
    
    delete obj1;
    delete obj2;
    
    std::cout << "\n" << BOLD << GREEN << "=== All tests completed! ===" << RESET << std::endl;
    return 0;
}
