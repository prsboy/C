#include <iostream>

using namespace std;

class Ice
{
public:
    Ice() {cout<<"Ice()"<<endl;}
    ~Ice() {cout<<"~Ice()"<<endl;}
};

class Pat
{
public:
    Pat() {cout<<"Pat()"<<endl;}
    ~Pat() {cout<<"~Pat()"<<endl;};
};

class Bingsoo
{
private:
    Ice ice;
public:
    Bingsoo(){cout<<"Bingsoo()"<<endl;}
    ~Bingsoo(){cout<<"~Bingsoo()"<<endl;}
};

class PatBingsoo : public Bingsoo
{
private:
    Pat pat;
public:
    PatBingsoo(){cout<<"PatBingsoo()"<<endl;}    
    ~PatBingsoo(){cout<<"~PatBingsoo()"<<endl;}
};

int main()
{
    PatBingsoo *p = new PatBingsoo;
    delete p;
}