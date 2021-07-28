#include<bits/stdc++.h>
#include "Blockchain.cpp"
#include "Block.cpp"
#include "sha256.cpp"
#include "Faculty.cpp"

using namespace std;
int main()
{
    Faculty faculty1;

    faculty1.addDetails("Sourav Suman", 10, 9, 8);
    faculty1.addDetails("Shaurya Kumar", 10, 7, 9);
    faculty1.addDetails("Sachin Kumar", 9, 8, 10);

    //faculty1.showDetails();
    faculty1.updateMarks("Sourav Suman", 1, 2, 3);
    faculty1.updateMarks("Jayesh Sahu", 9, 6, 8);

    //faculty1.showDetails();
    faculty1.showBlockchainDetails();




    // Blockchain bChain = Blockchain();
    // cout << "Mining block 1..." << endl;
    // bChain.AddBlock(Block(1, "Block 1 Data"));

    // cout << "Mining block 2..." << endl;
    // bChain.AddBlock(Block(2, "Block 2 Data"));

    // cout << "Mining block 3..." << endl;
    // bChain.AddBlock(Block(3, "Block 3 Data"));

    // bChain.printBlockchain();
    

    return 0;
}










//     cout << "Enter number of groups to create : ";
//     int n = 1;
//     cout << n << endl;


//     while(n --){

//         cout << "Enter number of people : ";
//         int p = 3;
//         cout << p << endl;

//         cout << "Enter name of people : " << endl;
//         vector<string> name = {"Alice", "Bob", "Charlie"};
//         for(auto it : name)
//             cout << it << " ";
//         cout << endl << endl;;

//         Blockchain bChain = Blockchain();
//         map<string, pair<Blockchain, int>> mp;
//         for(int i = 0; i < p; i ++){
//             mp[name[i]].first = bChain;
//             mp[name[i]].second = 100;
//         }



