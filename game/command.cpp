#include "command.hpp"

namespace Game {

Command::Command(TYPE type): m_type(type)
{}

Command::Command(const Command& c): m_type(c.m_type)
{}

Command::TYPE Command::type() const
{
    return m_type;
}

bool Command::hasPosition() const
{
    return false;
}

}
