#include <iostream>

int hitungKopi(int jumlahGelas) {
    int total = jumlahGelas * 5000;
    if (jumlahGelas > 3) {
        total -= 2000;
    }
    return total;
}

int main() {
    std::cout << hitungKopi(2) << std::endl; 
    std::cout << hitungKopi(4) << std::endl; 
    return 0;
}