# Environment Variables for C/C++ Compilation

Environment variables that control C/C++ compilation, linking, and runtime behavior.

## Compiler Selection

### `CC`
Specify C compiler
```bash
export CC=gcc               # Use GCC
export CC=clang             # Use Clang
export CC=/usr/bin/gcc-11   # Specific version
```

### `CXX`
Specify C++ compiler
```bash
export CXX=g++              # Use G++
export CXX=clang++          # Use Clang++
export CXX=/usr/bin/g++-11  # Specific version
```

## Compilation Flags

### `CFLAGS`
Flags for C compiler
```bash
export CFLAGS="-Wall -O2 -g"
export CFLAGS="-std=c11 -pedantic"
```

### `CXXFLAGS`
Flags for C++ compiler
```bash
export CXXFLAGS="-Wall -O2 -g -std=c++17"
export CXXFLAGS="-Wextra -march=native"
```

### `CPPFLAGS`
Preprocessor flags (for both C and C++)
```bash
export CPPFLAGS="-DDEBUG -I/usr/local/include"
export CPPFLAGS="-DVERSION=1.0 -I./include"
```

## Linking Variables

### `LDFLAGS`
Linker flags and library directories
```bash
export LDFLAGS="-L/usr/local/lib"
export LDFLAGS="-static -L./lib"
```

### `LDLIBS`
Libraries to link (alternative to LIBS)
```bash
export LDLIBS="-lmath -lpthread"
export LDLIBS="-lssl -lcrypto"
```

### `LIBS`
Libraries to link
```bash
export LIBS="-lm -lpthread"
```

## Runtime Library Loading

### `LD_LIBRARY_PATH`
Search directories for shared libraries at runtime
```bash
export LD_LIBRARY_PATH="/usr/local/lib:$LD_LIBRARY_PATH"
export LD_LIBRARY_PATH="./lib:/opt/myapp/lib"
```

### `LD_PRELOAD`
Force loading specific libraries before others
```bash
export LD_PRELOAD="./mymalloc.so"
export LD_PRELOAD="/usr/lib/libfakeroot.so"
```

### `LD_RUN_PATH`
Embed library search path in executable (alternative to LD_LIBRARY_PATH)
```bash
export LD_RUN_PATH="/usr/local/lib:/opt/lib"
```

## Include and Library Paths

### `C_INCLUDE_PATH`
Default include directories for C
```bash
export C_INCLUDE_PATH="/usr/local/include:/opt/include"
```

### `CPLUS_INCLUDE_PATH`
Default include directories for C++
```bash
export CPLUS_INCLUDE_PATH="/usr/local/include:/opt/include"
```

### `LIBRARY_PATH`
Default library search directories for linking
```bash
export LIBRARY_PATH="/usr/local/lib:/opt/lib"
```

## Variable Priority

Environment variables are typically overridden by:
1. Command line arguments (highest priority)
2. Makefile variables
3. Environment variables
4. Compiler defaults (lowest priority)

## Checking Current Values

### View all compilation-related variables
```bash
env | grep -E "(CC|CXX|FLAGS|PATH|LD_)"
```

### Test library path resolution
```bash
ldconfig -p | grep mylib              # Check if library is in cache
```

### Verify include paths
```bash
echo | gcc -E -Wp,-v -                 # Show GCC include search paths
echo | g++ -E -Wp,-v - -xc++          # Show G++ include search paths
```