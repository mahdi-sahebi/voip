# project_name - Base C++ Template for CMake Projects

This repository provides a basic C++ template for creating projects using CMake. It includes an easy-to-extend structure with separate directories for source code, dependencies, and tests. The template is designed for use with C++17 and is configurable for different build types (debug and release).


<br><br>
## Table of Contents

- [Introduction](#introduction)
- [Dependencies](#dependencies)
- [Building](#building)
- [Tests](#tests)
- [Tested Platforms](#tested-platforms)



<br>

## Introduction

This repository is a template for C++ projects that use **CMake** as the build system. It includes the following structure:

- **src**: The main source code of the project.
- **test**: A directory for unit tests.
- **deps**: A place for external dependencies that are fetched or built within the project.
- **include**: The header files for your project.
- **CMakeLists.txt**: The CMake build configuration files.

The project uses **C++17** as the default C++ standard, and includes configurations for both **Debug** and **Release** builds.


<br>

## Dependencies

This project requires the following dependencies:

- **CMake** 3.1 or newer
- **A C++17 compatible compiler**: GCC, Clang, or MSVC
- **GoogleTest** (for unit testing)

### Installing Dependencies on Ubuntu

1. **CMake**: Install CMake via the official package manager:

```bash
   sudo apt update
   sudo apt install cmake
```

2. **G++ or Clang**: If you don’t have a C++17 compatible compiler, install G++:

   ```bash
   sudo apt install g++
   ```

3. **GoogleTest**: Install GoogleTest, which is required for testing:

   ```bash
   sudo apt install libgtest-dev
   ```



<br><br>

## Building

To build this project, follow these steps:

### Step 1: Clone the repository

If you haven't already, clone this repository to your local machine:

```bash
git clone https://github.com/yourusername/project_name.git
cd project_name
```

### Step 2: Create a build directory

Create a separate directory for building the project:

```bash
mkdir build
cd build
```

### Step 3: Configure the project with CMake

Run the following command to configure the project:

```bash
cmake ..
```

### Step 4: Build the project

To compile the project, run the following command:

```bash
cmake --build .
```

You can also specify a build type:

```bash
cmake --build . --config Release  # For Release builds
cmake --build . --config Debug    # For Debug builds
```



<br><br>
## Tests

This project includes unit tests. By default, tests are enabled. Here’s how to manage them:

### Enabling or Disabling Tests

* **Enable Tests**: Set `BUILD_TESTS` to `ON`.

```bash
cmake -DBUILD_TESTS=ON ..
```

* **Disable Tests**: Set `BUILD_TESTS` to `OFF`.

```bash
cmake -DBUILD_TESTS=OFF ..
```

After enabling or disabling tests, build the project again:

```bash
cmake --build .
```

### Running Tests

Once tests are enabled and the project is built, you can run the tests using the following command:

```bash
ctest
```

This will run all the tests and show the results.




<br><br>
## Tested Platforms

The following platform has been tested and is known to work with this template:

| Platform         | Compiler               | CMake | Architecture | Notes                           |
| ---------------- | ---------------------- | ------------- | ------------ | ------------------------------- |
| Ubuntu 22.04.5   | GCC 11.4.0             | 3.22.1        | x86_64       | Default Linux platform, kernel version 6.8.0-87-generic |

The project should work on other platforms, but if you encounter issues, feel free to report them.
