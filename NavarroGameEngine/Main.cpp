#include <iostream>;
using namespace std;

class NavarroGameEngine
{
protected:
	string* version;

public:
	NavarroGameEngine();
	~NavarroGameEngine();
	string GetVersion();
};

NavarroGameEngine::NavarroGameEngine()
{
	version = new string("0.0");
}

NavarroGameEngine::~NavarroGameEngine()
{
	delete version;
}

string NavarroGameEngine::GetVersion() 
{
	return *(this->version);
}

int main(string param[])
{
	NavarroGameEngine* game = new NavarroGameEngine();
}