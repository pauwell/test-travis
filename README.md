# test-travis :construction_worker:

[![Build Status](https://travis-ci.com/pauwell/test-travis.svg?branch=master)](https://travis-ci.com/pauwell/test-travis)

Minimal example on how to get travis to run on a project that uses C++ with 2017 language features.
Take this repo as your starting point or just copy `.travis.yml` and `CMakeLists.txt` and adjust them to your needs.

### Features: 
- :fire: I tried using the least amount of code possible while still providing a good example.

- :fire: `CMakeLists.txt`can be expanded to support multiple source files by expanding 
```js
  add_executable(test-travis "main.cpp" "test_ext.hpp" ...)
```
- :fire: Please have a look at the open pull request to see `travis` dynamically testing new requests.
