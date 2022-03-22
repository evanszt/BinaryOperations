// Purpose: Check if an unsigned int is a power of 2
// Copyright Zachary Evans Feb 17 2022

#include <iostream>
#include <bitset>
int main() {
    unsigned int num;
    std::cout << "Enter an unsinged integer number" << std::endl;
    std::bitset<4>num2;
    std::cin >> num;
    // if num is a power of 2 then only has one 1
    num2 = num & (num-1);
    std::cout << num2 << " = " << num2.to_string();
    if (num2.count() == 0) {
        std::cout << "This is a power of 2" << std::endl;
    } else {
    std::cout<< "This is not a power of 2" << std::endl;}
    return 0;
}
