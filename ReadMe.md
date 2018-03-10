# C++

C++ is an evolution of the C language but with more modern features for a more diverse use than the C.

## Introduction

C++ is a low level programming language, meaning that it is closer to the computer internal mechanism (close to the metal).
This language strength are:

- Fast - for high performance software
- Multiplatform - can be executed in Windows, MacOS, Linux without code transoformation
- It has [imperative](https://en.wikipedia.org/wiki/Imperative_programming), [object-oriented](https://en.wikipedia.org/wiki/Object-oriented_programming) and [generic](https://en.wikipedia.org/wiki/Generic_programming) programming features
- Famous - it is used for multiple applications and has a lot of librairies available

## Getting Started

To start coding in c++ you would need three things:
    - A text editor
    - A compiler
    - A debugger

Thanksfully there are options where all three are integrated in a IDE (Integrated Development Environment).
A standard and famous IDE to use would be [code::blocks](http://www.codeblocks.org/downloads/26). If you are on windows, choose the version with [MinGW] which is a c++ compiler.
If you are on Linux (debian, ubuntu):

```bash
apt-get install build-essential codeblocks
```

## Calculator

![calculator!](https://raw.githubusercontent.com/Sylhare/Cpp/master/resources/calculator.png)

Simple Calculator, that does simple calculations, don't expect too much though.

It implements:

- (っ◔◡◔)っ ♥ `Love` ♥
- Standard operation default in `c++`
- `<iostream>` for input and output
- `<cmath>` for more complex math operation 

### Sources

- [Openclassroom - C++](https://openclassrooms.com/courses/programmez-avec-le-langage-c)

## Minesweeper

```bash
   	___  ___  _____   _   _   _____   _____   _    _   _____   _____  ______   _____  ______ 
	|  \/  | |_   _| | \ | | |  ___| /  ___| | |  | | |  ___| |  ___| | ___ \ |  ___| | ___ \
	| .  . |   | |   |  \| | | |__   \ `--.  | |  | | | |__   | |__   | |_/ / | |__   | |_/ /
	| |\/| |   | |   | . ` | |  __|   `--. \ | |/\| | |  __|  |  __|  |  __/  |  __|  |    / 
	| |  | |  _| |_  | |\  | | |___  /\__/ / \  /\  / | |___  | |___  | |     | |___  | |\ \ 
	\_|  |_/  \___/  \_| \_/ \____/  \____/   \/  \/  \____/  \____/  \_|     \____/  \_| \_|
```	                                                                                                                                        

Challenge from google, to recreate a minesweeper.
There's the challenge and the solution.

I have made one in javascript that is fully functionnaland better looking.

- [Minesweeper JS](https://sylhare.github.io/Minesweeper/)

### Source

- [Google's dev camp](https://techdevguide.withgoogle.com/paths/foundational/sequence-2/coding-question-minesweeper/#)
- [Solving minesweeper with Matrics](https://massaioli.wordpress.com/2013/01/12/solving-minesweeper-with-matricies/)
- [sylhare - Minesweeper](https://github.com/Sylhare/Minesweeper)