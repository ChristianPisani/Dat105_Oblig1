#include <iostream>
#include "Person.cpp"
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    vector<Person> ansatte = vector<Person>();
    Person ansatt("Bob", 100);
    ansatte.push_back(ansatt);
    
    ansatt = Person("Per", 101);
    ansatte.push_back(ansatt);
    ansatte[0].Tilknytt(&ansatt);
    ansatte[1].Tilknytt(&ansatte[0]);
    
    for(Person p : ansatte) {
        cout << p.to_string() << endl;
    }
    
    return 0;
}
