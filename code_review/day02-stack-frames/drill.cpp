#include <iostream>
#include <cstring>

void vulnerable() {
    char buf[16];
    std::cout << "buf address: " << (void*)buf << "\n";
    memcpy(buf, "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", 32);   // 18 bytes into a 16-byte buffer
    std::cout << "vulnerable(): survived, returning...\n";
}

int main() {
    vulnerable();
    std::cout << "back in main: program still alive\n";
    return 0;
}
