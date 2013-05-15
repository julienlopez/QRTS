#include "commandwithposition.hpp"

namespace Game {

CommandWithPosition::CommandWithPosition(TYPE type, const Utils::Point& position): Command(type), m_position(position)
{}

const Utils::Point& CommandWithPosition::position() const
{
    return m_position;
}

bool CommandWithPosition::hasPosition() const
{
    return true;
}

}
