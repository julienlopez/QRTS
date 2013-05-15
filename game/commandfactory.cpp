#include "commandfactory.hpp"
#include "commandwithposition.hpp"

namespace Game {

std::unique_ptr<Command> CommandFactory::createMove(const Utils::Point& pos)
{
    return std::unique_ptr<Command>(new CommandWithPosition(Command::TYPE::MOVE, pos));
}

std::unique_ptr<Command> CommandFactory::createAttack(const Utils::Point& pos)
{
    return std::unique_ptr<Command>(new CommandWithPosition(Command::TYPE::ATTACK, pos));
}

std::unique_ptr<Command> CommandFactory::createPatrol(const Utils::Point& pos)
{
    return std::unique_ptr<Command>(new CommandWithPosition(Command::TYPE::PATROL, pos));
}

std::unique_ptr<Command> CommandFactory::createStop()
{
    return std::unique_ptr<Command>(new Command(Command::TYPE::STOP));
}

}
