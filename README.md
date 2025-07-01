# Example of GitHub Actions CI with wxWidgets

This repository contains a simple example application using [wxWidgets](wx),
intended to demonstrate building projects using wxWidgets on GitHub Actions.
    
## Contents

- `hello.cpp`: A minimal wxWidgets "Hello World" GUI application written in C++.
- `CMakeLists.txt`: CMake makefile for building it.

## Building on GitHub Actions

The included GitHub Actions workflow file `.github/workflows/conda-cmake.yml`
uses [Miniconda](miniconda) to install wxWidgets and then build the application
using it, see there.

## Building Locally

To work on the application locally, you need wxWidgets development libraries
available on your system. You do _not_ need to use Miniconda to install them as
the workflow above does, even if you may do it too, of course. But any other
way, e.g. distribution packages under Linux, binaries downloaded from the
wxWidgets website under Windows, packages installed by `brew` under macOS or a
version of wxWidgets built from sources on any platform works too.

Once wxWidgets is installed, build using CMake as usual, e.g.

```console
> cmake -S . -B build
> cmake --build build
```

## License

This project is licensed under the MIT License — see the [LICENSE](LICENSE)
file for details.

[miniconda]: https://www.anaconda.com/docs/getting-started/miniconda/main
[wx]: https://www.wxwidgets.org/
