#ifndef COMMANDFACTORY_HPP
#define COMMANDFACTORY_HPP

#include <utils/noninstanciable.hpp>

#include <memory>

namespace Utils {
    class Point;
}

namespace Game {

class Command;

class CommandFactory : public Utils::NonInstanciable
{
    CommandFactory() = delete;
    ~CommandFactory() = delete;
public:
    static std::unique_ptr<Command> createMove(const Utils::Point& pos);
    static std::unique_ptr<Command> createAttack(const Utils::Point& pos);
    static std::unique_ptr<Command> createPatrol(const Utils::Point& pos);
    static std::unique_ptr<Command> createStop();
};

}

#endif // COMMANDFACTORY_HPP
