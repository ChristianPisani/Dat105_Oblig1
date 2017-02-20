#include <iostream>
#include "Person.cpp"
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    vector<AnsattData> ansatte = vector<AnsattData>();
    AnsattData ansatt("Bob", 100, 1111111, 105, 'i');
    ansatte.push_back(ansatt);
    
    ansatt = AnsattData("Per", 101, 1111112, 200, 's');
    ansatte.push_back(ansatt);
    ansatte[0].Tilknytt(&ansatt);
    ansatte[1].Tilknytt(&ansatte[0]);
    
    for(AnsattData p : ansatte) {
        cout << p.to_string() << endl;
    }
    
    return 0;
}
