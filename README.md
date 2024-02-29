# Incompatible V1 Error Programme

A simple BLE-enabled DAL programme for micro:bit V1 that scrolls error code
927 on the display, which indicates the programme is not compatible with this
board.

This programme is meant to be used with the
[Universal Hex Creator Tool](https://tech.microbit.org/software/universal-hex-creator/)
as a micro:bit V1 hex file that can be used to create a Universal Hex file
together with a V2 programme that cannot be made V1 compatible,
so on V1 it will scroll this error code.

## Dependencies

Local toolchain:
- [GNU Arm Embedded Toolchain](https://developer.arm.com/tools-and-software/open-source-software/developer-tools/gnu-toolchain/gnu-rm/downloads)
- [Git](https://git-scm.com)
- [CMake](https://cmake.org/download/)
- [Python 3](https://www.python.org/downloads/)
- [Ninja](https://ninja-build.org/)
- [Yotta](https://yottabuild.org/)

Or with Docker we only need the `ghcr.io/carlosperate/microbit-toolchain`
image.

## Build Instructions

Build with local toolchain:
```
yotta build
```

Build with docker:
```
docker run -v $(pwd):/home --rm ghcr.io/carlosperate/microbit-toolchain:v2.0.0 yotta build
```

Output file: `build/bbc-microbit-classic-gcc/src/error-programme-combined.hex`
