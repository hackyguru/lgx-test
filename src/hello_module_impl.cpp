#include "hello_module_impl.h"


HelloModuleImpl::HelloModuleImpl() {}
HelloModuleImpl::~HelloModuleImpl() {}

std::string HelloModuleImpl::getMessage()
{
    // Returns a greeting message.
    return std::string("hello");
}
