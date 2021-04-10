#include <iostream>

using namespace std;

class BaseClass
{ 
private:
    int Id;
    string name;
    string number;
public:
    // Default Constructor
    BaseClass()
    {
        Id = 0;
        name = "";
        number = "";
    }
    BaseClass(int Id, string name, string number)
    {
        this->Id = Id;
        this->name = name;
        this->number = number;
    }
    int GetId()
    {
        return Id;
    }
    string virtual GetName()
    {
        return name;
    } 
    string virtual GetNumber()
    {
        return number;
    }
    void virtual SetId(int Id)
    {
        this->Id;
    }
    void virtual SetName(string name)
    {
        this->name = name;
    }
    void SetNumber(string number)
    {
        this->number = number;
    }
    void printClass()
    {
        cout<<"Id>> "<< Id
        << "Name>> "<< name
        << "number>> "<< number <<endl;
    }
};