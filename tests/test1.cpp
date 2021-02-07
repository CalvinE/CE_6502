#include "../src/CE_6502.h"

using namespace CE_6502;

int main(int argc, char* argv[]) {
    int result = CE_6502::subone(5);
    if (result == 5) {
        return 0;
    }
    return 1;
}