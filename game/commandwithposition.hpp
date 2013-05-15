#ifndef COMMANDWITHPOSITION_HPP
#define COMMANDWITHPOSITION_HPP

#include "command.hpp"
#include <utils/point.hpp>

namespace Game {

class CommandWithPosition : public Command
{
public:
    CommandWithPosition(TYPE type, const Utils::Point& position);

    virtual const Utils::Point& position() const final;

    virtual bool hasPosition() const override;

private:
    Utils::Point m_position;
};

}

#endif // COMMANDWITHPOSITION_HPP
