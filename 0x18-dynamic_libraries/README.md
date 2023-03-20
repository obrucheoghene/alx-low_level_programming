# 0x18. C - Dynamic

## General

- What is a dynamic library, how does it work, how to create one, and how to use it
- What is the environment variable $LD_LIBRARY_PATH and how to use it
- What are the differences between static and shared libraries
- Basic usage nm, ldd, ldconfig

When we say a library is static or dynamic we are refering to how they are being linked during execution of our code.

A static library using static linking while a dynamic library uses dynamic linking.

What is static linking of a library:
Static linking of library is when a library object code is included in teh executable file.

What is Dynamic linking of a library:
Dynamic linking of library is when only the address to the library object code in memory is included in the executable file.

Differences
Size - Static library is included in the executable file where as only the address to the dynamic library is included in executable file

    Recompilation - If a static library is updated, it will require a recompilation of the executable file so that the updated object code can be include. Whereas dynamic lbrary do not recompilation of the executable file when it is updated because address to the updated library is aleady in the executable.

    Format -
    Static Library extensions
    Windows `.lib` (Library)
    linus `.a` (Archive)

    Dynamic Library extensions
    windows `.dll` (Dynamic link library)
    linus `.so` (shared object)

### Create Dynamic

- Generate the object files (.o) from source files(.c) with `-fPIC` flag to make the code position independent

```sh
gcc -c -fPIC *.c
```

- Put the generate object files (.o) together to create the library. the `-o` flag

```sh
gcc -shared -o liball.so *.o
```

- To verify that you did it and have the right functions as dynamic symbols you can use

```sh
nm -D liball.so
```

$LD_LIBRARY_PATH

- It is an env variable that stores the path to dynamic libraries.

`ldd` ldd cmd is used to display the necessary dynamic lib used by certain binary file.
`nm` `nm -C -D path_to_a_dynamic_lib` is so powerful that it will list all the symbols contained by this dynamic lib, including functions (T) and variables.
`ldconfig` creates the necessary links and cache to the most recent shared libraries found in the directories specified on the command line
