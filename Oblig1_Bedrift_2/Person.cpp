#include "Person.hpp"
#include <iostream>
#include <vector>

using namespace std;

class Person {
private:
    Person *tilknyttet;
    
    string navn = "";
    unsigned int pnr = 0;
    
public:
    Person(string navn, unsigned int pnr) : navn(navn), pnr(pnr) {
        Tilknytt(this);
    }
    
    void Tilknytt(Person *p) {
        tilknyttet = p;
    }
    
    string to_string() {
        string s = "";
        
        s += "Navn: " + navn + "\n";
        s += "Pnr: " + std::to_string(pnr) + "\n";
        
        if(tilknyttet) {
            s += "Tilknyttet: " + tilknyttet->navn + "\n";
        }
        
        return s;
    }
};

class AnsattData : public Person {
private:
    vector<Person> paarorende = vector<Person>();
    int banknummer = 0;
    unsigned int lonn = 0;
    char stillingstype = ' ';
    
public:
    AnsattData(string navn, unsigned int pnr, int banknummer, unsigned int lonn, char stillingstype) :
    banknummer(banknummer), lonn(lonn), stillingstype(stillingstype), Person(navn, pnr) {
        
    }
    
    void AddPaarorende(Person p) {
        paarorende.push_back(p);
    }
    
    void setBanknummer(int banknummer) {
        this->banknummer = banknummer;
    }
    
    void setLonn(unsigned int lonn) {
        this->lonn = lonn;
    }
    
    void setStillingsType(char stillingstype) {
        this->stillingstype = stillingstype;
    }
};