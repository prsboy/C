#include <iostream>
#include <string>

using namespace std;

class TextMessage
{
private:
    int sendTime;
    string sendName;
    string text;
public:
    TextMessage(int sendTime, string sendName, string text)
    {
        this->sendTime = sendTime;
        this->sendName = sendName;
        this->text = text;
    }

    int GetSendTime() const {return sendTime;}
    string GetSendName() const {return sendName;}
    string GetText() const {return text;}
};

int main()
{

}