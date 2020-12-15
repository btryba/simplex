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
The first step will be to clone this repository and get all the submodules:

```
git clone https://github.com/btryba/simplex.git
cd simplex
git submodule init
git submodule update --remote --merge
```

Next to actually start the build process:

```
mkdir build
cd build
cmake .. -G Ninja
ninja
```

Or you can use the CMake-tools extension by Microsoft in Visual Studio Code to do the build steps.

This will create an bin folder with all the libraries and executable files from all the projects.
Inside the bin folder it will be organized by OS (eg: Linux, Windows, Darwin (Mac), etc...), it's bitness (eg: 32bit, 64bit) and then by build type (eg: Debug, Release, etc...)
