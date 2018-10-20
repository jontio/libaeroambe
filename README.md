# Legal

PATENT NOTICE

    This source code is provided for educational purposes only.  It is
    a written description of how certain voice encoding/decoding
    algorythims could be implemented.  Executable objects compiled or
    derived from this package may be covered by one or more patents.
    Readers are strongly advised to check for any patent restrictions or
    licencing requirements before compiling or using this source code.

# What is it?

libaeroambe is an mini-m decoder library.

# Credits

This project would not have been possible without some talented individuals contributing their time.

Many thanks goes out to Sylvain Munaut for his help, support, and expertise in reverse engineering codecs.

I'd also like to send many thanks to those who prefer not to be mentioned.

# How to compile it?

You will need [CMake] to compile what's in the `mbelib-master` directory and [Qt] for what's in the `libaeroambe` directory. For Windows, [MSYS2] is useful for installing Qt, Cmake, mingw64 etc.

Depending on your OS and your set up compiling that will vary but generally you will go into the `mbelib-master` directory. Then type...

    mkdir build                         # Create build directory
    cd build                            # Move to build directory
    cmake ..                            # Create Makefile for current system
    make                                # Compiles the library
    sudo make install                   # Library is installed into computer (optional)

Once that is done you need to use Qt to compile the shared library. This too will vary on your setup but generally you will go into the `libaeroambe` subdirectory and type the following...

    qmake                               # Create the makefile
    make                                # Compiles the library

You may need to alter some of the paths in the pro file to be able to compile successfully.

[Qt]: https://www.qt.io/download
[CMake]: https://cmake.org/
[MSYS2]: https://www.msys2.org/

