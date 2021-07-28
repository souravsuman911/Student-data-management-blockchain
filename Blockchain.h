#ifndef TESTCHAIN_BLOCKCHAIN_H
#define TESTCHAIN_BLOCKCHAIN_H

#include <cstdint>
#include <vector>
#include "Block.h"

using namespace std;

class Blockchain {
public:
    Blockchain();

    void AddBlock(Block bNew);
    void printBlockchain();

private:
    uint32_t _nDifficulty;   // std::uint32_t,    4 byte unsigned,	0 to 4,294,967,295
    vector<Block> _vChain;

    Block _GetLastBlock() const;
};

#endif
