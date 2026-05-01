cmake_minimum_required(VERSION 3.14)
project(HelloModuleTests LANGUAGES CXX)

# logos-module-builder auto-detects this file and creates the
# checks.<system>.unit-tests + packages.<system>.unit-tests targets.
# Run with `nix build '.#unit-tests' -L`.
include(LogosTest)

logos_test(
    NAME hello_module_tests
    MODULE_SOURCES ../src/hello_module_impl.cpp
    TEST_SOURCES
        main.cpp
        test_hello_module.cpp
)
