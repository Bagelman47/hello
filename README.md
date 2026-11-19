# hello

A tiny C++ program that asks for your name and says hi back. That's pretty much it.

```
Enter your name: Sam
Hello, Sam!
Press Ctrl+C to exit.
```

If you just hit Enter without typing anything, you get a plain `Hello!` instead.

The program sits there after greeting you (so the console window doesn't vanish
when you launch it). Press Ctrl+C to close it.

## Building

You'll need CMake 3.20+ and a C++17 compiler. I use Visual Studio 2022 on Windows,
but anything reasonably modern should work.

Run these in the folder that contains the actual source files (if the folder has another folder inside, then open that folder):

```
cmake -S . -B build
cmake --build build
```

The first command only needs to run once (or again if you delete `build/`).
After that, `cmake --build build` is all you need.

The executable ends up in `build\Debug\hello.exe`. For a release build, add
`--config Release`.

You can also just open `hello.sln` in Visual Studio and hit F5.

## Tests

There's a small set of unit tests for the greeting logic in `tests/`. They don't
use a test framework, just a little `CHECK_EQ` macro, so there's nothing extra
to install.

```
ctest --test-dir build -C Debug
```

They cover the boring-but-important stuff: empty input, EOF, extra whitespace,
really long names, UTF-8 names, that kind of thing.

## What's where

- `hello/hello.cpp` - `main()`, the actual program
- `hello/greeting.h` - `read_name()` and `make_greeting()`, kept separate so they can be tested
- `hello/tests/greeting_tests.cpp` - the tests
- `hello/CMakeLists.txt` - CMake build setup
