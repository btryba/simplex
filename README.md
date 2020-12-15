# simplex
### A repository to illustrate how to build and work with the simplex-lib and simplex-tui libraries

This project is designed primarily to work with Visual Studio Code.

First you will need to install g++, gdb, CMake (and I highly recommend Ninja). On Ubuntu you will also probably want build-essential.

### Debian/Ubuntu/Linux Mint
If you don't have the compilers yet:

`apt install g++ gdb build-essential`
To install cmake and ninja:

`apt install cmake ninja-build`

### Arch Linux
`pacman -S cmake`

`pacman -S ninja`

### Fedora
`dnf install cmake ninja-build`

## To Build:
Navigate to this directory in Terminal
```
mkdir build
cd build
cmake .. -G Ninja
ninja
```

Or you can use the CMake-tools extension by Microsoft in Visual Studio Code.

This will create an output folder with all the libraries and executable files from all the projects.
