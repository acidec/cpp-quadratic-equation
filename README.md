# Using C++ to Realize the Solving of Unary Quadratic Equation
Solution of quadratic equation in C++ language.


**The principle is on my [website](https://acidec.github.io/2022/12/05/cpp-quadratic-equation/).**
## Supported operating system
All operating systems with a C++ compiler installed.
## Build and run
### Windows (Not recommanded)
You can get the source code from github by using [git-for-windows](https://git-scm.com/download/win) or download the zip package.

**Recommand [MSVC Build Tools](https://aka.ms/vs/17/release/vs_BuildTools.exe) as your C++ compiler on Windows.**

Open command prompt or PowerShell, switch to the path to source code.
```cmd
cd cpp-quadratic-equation
cl a.cpp
.\a.exe
```
### GNU/Linux
Using the package manager of this distribution to get `clang` and `make`:
```bash
## Arch Linux/Manjaro
sudo pacman -S clang make
## Debian/Ubuntu and derivative distribution
sudo apt install clang make
## Fedora/RHEL/CentOS and derivative distribution
sudo dnf in clang make
## openSUSE/SUSE Linux Enterprise
sudo zypper in clang make
```
Get the source code by using Git or download the zip.
```bash
git clone https://github.com/acidec/cpp-quadratic-equation.git
```
It's time to run the program!
```bash
cd cpp-quadratic-equation
make
make run
```
### macOS
You should get the Command Line Tools(CLT) for Xcode. It provides `Apple Clang` and `make` commands.
```zsh
xcode-select --install
```
Get the source code by using Git or download the zip.
```zsh
git clone https://github.com/acidec/cpp-quadratic-equation.git
```
It's time to run the program!
```zsh
cd cpp-quadratic-equation
make
make run
```
## Clean
> Unix like operating system required.
```zsh
cd cpp-quadratic-equation
make clean
```