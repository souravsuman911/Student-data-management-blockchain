#include "Blockchain.h"
#include <iostream>
using namespace std; 

Blockchain::Blockchain()
{
    _vChain.emplace_back(Block(0, "Genesis Block"));
    _nDifficulty = 5;
}

void Blockchain::AddBlock(Block bNew)
{
    bNew.sPrevHash = _GetLastBlock().sHash;
    bNew.MineBlock(_nDifficulty);
    _vChain.push_back(bNew);
}

Block Blockchain::_GetLastBlock() const
{
    return _vChain.back();
}

void Blockchain::printBlockchain(){
    cout << "=> ";
    for(auto it : _vChain)
        it.printBlock();
    cout << endl;
}
