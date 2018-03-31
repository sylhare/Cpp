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

Thanksfully there are options where all three are integrated in an IDE (Integrated Development Environment).
A standard and famous IDE to use would be [code::blocks](http://www.codeblocks.org/downloads/26). If you are on windows, choose the version with [MinGW] which is a c++ compiler.
If you are on Linux (debian, ubuntu):

```bash
apt-get install build-essential codeblocks
```

You can open the IDE and start writing your programms in a `.cpp` file.

## Tips

### Don't try to optimize blindly

Check what takes time first. Most of the programming optimization is done via the compiler.

### Don't use `std::endl` if `\n` will do

Using `std::endl` emits a `\n` and flushes the stream. Unless you really need the stream flushed.
`std::endl` is potentially more computationally costly.

### Don't abuse using `namespace std`

Putting using namespace std at the top of every program is a bad habit. 
Consider this: you are using two libraries called Foo and Bar:

    using namespace foo;
    using namespace bar;


Everything works fine, you can call `Blah()` from Foo and `Quux()` from Bar without problems. But one day you upgrade to a new version of Foo, which now offers a function called `Quux()`. Now you've got a conflict: Both Foo 2.0 and Bar import `Quux()` into your global namespace. This is going to take some effort to fix, especially if the function parameters happen to match.

If you had used `foo::Blah()` and `bar::Quux()`, then the introduction of `foo::Quux()` would have been a non-event.

### The "`return 0;`" is optionnal for main 

For C++, since the first standard in 1998; see ISO/IEC 14882:1998 section 3.6.1:

> If control reaches the end of main without encountering a return statement, the effect is that of executing return 0;


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

I have made one [minesweeper in javascript](https://sylhare.github.io/Minesweeper/) that is fully functionnal and better looking.


### Source

- [Google's dev camp](https://techdevguide.withgoogle.com/paths/foundational/sequence-2/coding-question-minesweeper/#)
- [Solving minesweeper with Matrics](https://massaioli.wordpress.com/2013/01/12/solving-minesweeper-with-matricies/)
- [Sylhare - Minesweeper](https://github.com/Sylhare/Minesweeper)


## Conway's game of life

![life!](https://raw.githubusercontent.com/Sylhare/Cpp/master/resources/conway-gof.gif)

### Rules

The universe of the Game of Life is an infinite two-dimensional orthogonal grid of square cells, each of which is in one of two possible states, alive or dead, or "populated" or "unpopulated". 

Every cell interacts with its eight neighbours, which are the cells that are horizontally, vertically, or diagonally adjacent. At each step in time, the following transitions occur:
  *
  *  - Any live cell with fewer than two live neighbours dies, as if caused by underpopulation.
  *  - Any live cell with two or three live neighbours lives on to the next generation.
  *  - Any live cell with more than three live neighbours dies, as if by overpopulation.
  *  - Any dead cell with exactly three live neighbours becomes a live cell, as if by reproduction.
  
  ### Sources
  
  - [Conway's game of life](https://en.wikipedia.org/wiki/Conway%27s_Game_of_Life)