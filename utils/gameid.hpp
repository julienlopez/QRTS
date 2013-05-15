#ifndef GAMEID_HPP
#define GAMEID_HPP

#include <cstdint>

namespace Utils {

class GameId
{
public:
    GameId(uint8_t id);

private:
    uint8_t m_id;
};

}

#endif // GAMEID_HPP
