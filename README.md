# Incompatible V1 Error Programme

A simple BLE-enabled DAL programme for micro:bit V1 that scrolls error code
927 on the display.

This programme is meant to be used with the
[Universal Hex Creator Tool](https://tech.microbit.org/software/universal-hex-creator/)
to include a micro:bit V1 hex file that scrolls the "not compatible" error code
for V2-only programmes.

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