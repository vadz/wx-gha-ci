# Example of GitHub Actions CI with wxWidgets

This repository contains a simple example application using [wxWidgets](wx),
intended to demonstrate building projects using wxWidgets on GitHub Actions.
    
## Contents

- `hello.cpp`: A minimal wxWidgets "Hello World" GUI application written in C++.
- `CMakeLists.txt`: CMake makefile for building it.

## Requirements

You need wxWidgets development libraries available on your system. The included
GitHub Actions workflow file uses [Miniconda](miniconda) to get wxWidgets, but
you may use any other way locally, e.g. distribution packages under Linux,
binaries downloaded from the wxWidgets website under Windows, packages
installed by `brew` under macOS or a version of wxWidgets built from sources on
any platform.

## Building

To build the application use the usual

```console
> cmake -S . -B build
> cmake --build build
```

## License

This project is licensed under the MIT License — see the [LICENSE](LICENSE)
file for details.

[miniconda]: https://www.anaconda.com/docs/getting-started/miniconda/main
[wx]: https://www.wxwidgets.org/
