#include "MicroBit.h"

MicroBit uBit;

const uint8_t error_face_[] {
    1, 1, 0, 1, 1,
    1, 1, 0, 1, 1,
    0, 0, 0, 0, 0,
    0, 1, 1, 1, 0,
    1, 0, 0, 0, 1,
};
const MicroBitImage error_face(5, 5, error_face_);

int main() {
    uBit.init();

    while (true) {
        uBit.display.print(error_face);
        uBit.sleep(1000);
        uBit.display.print("927");
    }
}
