#include <iostream>

void tepokNyamuk(int jumlah) {
    for (int i = 1; i <= jumlah; ++i) {
        if (i % 3 == 0) {
            std::cout << "TEPOK" << std::endl;
        } else {
            std::cout << i << std::endl;
        }
    }
}

int main() {
    tepokNyamuk(5);

    
    return 0;
}