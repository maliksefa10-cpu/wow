#include <iostream>

void cekTilang(int plat, int tanggal) {
    if (plat % 2 == tanggal % 2) {
        std::cout << "AMAN" << std::endl;
    } else {
        std::cout << "TILANG" << std::endl;
    }
}

int main() {
    cekTilang(24, 12);
    cekTilang(13, 20); 
    return 0;
}