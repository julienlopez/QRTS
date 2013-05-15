#ifndef COMMAND_HPP
#define COMMAND_HPP

namespace Game {

class Command
{
public:
    enum class TYPE {MOVE, PATROL, ATTACK, STOP};

    Command(TYPE type);

    virtual TYPE type() const final;

    virtual bool hasPosition() const;

protected:
    Command(const Command& c);

private:
    TYPE m_type;
};

}

#endif // COMMAND_HPP
