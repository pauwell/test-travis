# Travis CI with C++17 :construction_worker:

[![Build Status](https://travis-ci.com/pauwell/test-travis.svg?branch=master)](https://travis-ci.com/pauwell/test-travis)

This project emerged after I had a hard time setting up `travis CI`:construction_worker: with `C++17`. 
It is a minimal example on how to get the job done!
You can take this repo as a reference or just copy `.travis.yml` and `CMakeLists.txt` and adjust them to your needs.
Please open an issue or pull request if I messed up somewhere ;)

### Features: 
- :fire: I tried using the least amount of code to get a working example.

- :fire: `CMakeLists.txt`can be expanded to support multiple source files by adding more source files: 
  ```js
    add_executable(test-travis "main.cpp" "hello-world.hpp" *here*)
  ```
- :fire: Please have a look at the open pull request to see `travis CI` dynamically testing new requests. 
- :fire: You can see a logging of the build process right [here](https://travis-ci.com/pauwell/test-travis/builds/87586685).
