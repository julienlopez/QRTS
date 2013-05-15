#ifndef NONINSTANCIABLE_HPP
#define NONINSTANCIABLE_HPP

namespace Utils {

class NonInstanciable
{
    NonInstanciable() = delete;
    NonInstanciable(const NonInstanciable&) = delete;
    ~NonInstanciable() = delete;
};

}

#endif // NONINSTANCIABLE_HPP
