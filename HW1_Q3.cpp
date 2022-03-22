// Purpose: Check if an unsigned int is a power of 2 without bitset
// Copyright Zachary Evans Feb 17 2022
#include <iostream>
int main() {
    unsigned int num;
    std::cout << "Enter an unsigned integer number:" << std::endl;
    bool check = true;
    int sum = 0;
    std::string stringNum = "";
    std::cin >> num;
    unsigned int mask;
    // print out binary representation
    for (unsigned int i = 31; i >= 1; i--) {
        mask = 1 << i;
        if ((mask & num) != 0) {
            stringNum.append("1");
        } else {
            stringNum.append("0");
            }
    }
    mask = 1 << 0;
    if ((mask & num) != 0) {
        stringNum.append("1");
    } else {
        stringNum.append("0");}
    std::cout << num << " = " << stringNum << std::endl;
    // check if number is not power of two
    // each power of two should only have 1 one in it
    // sum will count the 1s and if >1 then not
    // a power of 2
    for (int i = 31; i >= 1; i--) {
        mask = 1 << i;
        if ((mask & num) != 0)
        sum++;
    }
    if (sum >= 2) {
        check = false;
    } else {
        check = true;
    }
    mask = 1<<0;
    if ((mask & num == 1)) {check = false;}
    if ((mask & num == 0)) {check = false;}
    if (check == false) {
        std::cout << "This number is NOT a power of two."
        << std::endl;
    } else {
        std::cout << "This number is a power of two." << std::endl;}
    return 0;
}
