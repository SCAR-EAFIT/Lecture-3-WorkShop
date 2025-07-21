# Build systems with Make and C++

Build systems automate the process of compilation, linking and dependency management in software projects. **Make** is one of the oldest and most fundamental build systems, using **Makefile** files to define rules and dependencies.


**Key concepts:**
- **Target**: The file or action to be generated
- **Prerequisites**: The files on which the target depends
- **Recipe**: Commands executed to create the target
- **Variables**: Enable reusability and flexible configuration
- **Patterns**: Rules that apply to multiple similar files

## Basic Makefile Structure

### Fundamental Syntax
```makefile
target: prerequisite1 prerequisite2
	recipe_command1
	recipe_command2
```

**Importante**: Commands (recipes) must use TAB, not spaces.

### Ejemplo Simple
```makefile
CXX = g++

programa: main.o matematicas.o
	$(CXX) -o programa main.o matematicas.o

main.o: main.cpp matematicas.h
	$(CXX) -c main.cpp

matematicas.o: matematicas.cpp matematicas.h
	$(CXX) -c matematicas.cpp

clean:
	@rm -f *.o programa
```

The idea is not to become experts in making files but to become familiar with them in order to be able to compile the programs we need, which is what we use most of the time.