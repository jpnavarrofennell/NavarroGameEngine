#include <iostream>;
using namespace std;

class NavarroGameEngine
{
protected:
	string version;

public:
	NavarroGameEngine();
	string GetVersion();
};

NavarroGameEngine::NavarroGameEngine()
{
	version = "0.0";
}

string NavarroGameEngine::GetVersion() 
{
	return this->version;
}

int main(string param[])
{
	NavarroGameEngine* game = new NavarroGameEngine();
}