#ifndef HELLO_MODULE_IMPL_H
#define HELLO_MODULE_IMPL_H

// Universal module — public API uses only standard C++ types
// (std::string, double, bool, void). All Qt usage is hidden in the
// .cpp behind a private pimpl, so logos-cpp-generator can parse this
// header to emit the QML/IPC glue.

#include <string>

class HelloModuleImpl {
public:
    HelloModuleImpl();
    ~HelloModuleImpl();

    // Returns a greeting message.
    std::string getMessage();

private:
};

#endif // HELLO_MODULE_IMPL_H
