# GNU Compiler Flags

Some important compilation flags.

## Compilation Control

### `-c`
Compile to object file without linking
```bash
g++ -c file.cpp
```

### `-o <filename>`
Specify output filename
```bash
g++ file.cpp -o program
```

### `-E`
Stop after preprocessing (useful for debugging macros)
```bash
g++ -E file.cpp
```

### `-S`
Generate assembly code
```bash
g++ -S file.cpp
```

## Optimization Levels

### `-O0` (Default)
No optimization - fastest compilation, largest/slowest code
```bash
g++ -O0 file.cpp
```

### `-O1`
Basic optimization - good balance
```bash
g++ -O1 file.cpp
```

### `-O2`
Recommended optimization for production
```bash
g++ -O2 file.cpp
```

### `-O3`
Aggressive optimization - may increase binary size
```bash
g++ -O3 file.cpp
```

### `-Os`
Optimize for size
```bash
g++ -Os file.cpp
```

## Debug Information

### `-g`
Include debug information for GDB
```bash
g++ -g file.cpp
```

## Warning Flags

### `-Wall`
Enable most common warnings
```bash
g++ -Wall file.cpp
```

### `-Wextra`
Additional useful warnings beyond -Wall
```bash
g++ -Wall -Wextra file.cpp
```

### `-Werror`
Treat warnings as errors
```bash
g++ -Wall -Werror file.cpp
```

## Language Standards

### `-std=c++11/14/17/20/23`
Specify C++ standard version
```bash
g++ -std=c++17 file.cpp   # Use C++17 features
g++ -std=c++20 file.cpp   # Use C++20 features
```

## Library and Linking this is a very important secction

### `-l<library>`
Link with library (removes 'lib' prefix and extension)
```bash
g++ file.cpp -lmath       # Links with libmath
g++ file.cpp -lpthread    # Links with libpthread
```

### `-L<directory>`
Add library search directory
```bash
g++ file.cpp -L/usr/local/lib -lmylib
```

### `-I<directory>`
Add include directory for headers
```bash
g++ -I/usr/local/include file.cpp
```

### `-static`
Create statically linked executable
```bash
g++ -static file.cpp
```

### `-shared`
Create shared library
```bash
g++ -shared -fPIC file.cpp -o libfile.so
```

### `-fPIC`
Generate position-independent code (required for shared libraries)
```bash
g++ -fPIC -c file.cpp
```

## Preprocessor Definitions

### `-D<macro>`
Define preprocessor macro
```bash
g++ -DDEBUG file.cpp      # #define DEBUG
g++ -DVERSION=2 file.cpp  # #define VERSION 2
```

### `-U<macro>`
Undefine preprocessor macro
```bash
g++ -UDEBUG file.cpp      # #undef DEBUG
```

## Architecture and Performance

### `-march=native`
Optimize for current CPU architecture
```bash
g++ -O2 -march=native file.cpp
```

### `-mtune=<cpu>`
Optimize for specific CPU without restricting instruction set
```bash
g++ -mtune=intel file.cpp
```

For complete flag documentation: https://gcc.gnu.org/onlinedocs/gcc/Option-Summary.html