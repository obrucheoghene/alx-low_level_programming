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
