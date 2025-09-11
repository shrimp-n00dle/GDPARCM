#include <SFML/Graphics.hpp>
#include <vector>

using namespace std;
class BaseRunner : private sf::NonCopyable
{
public:
	static const sf::Time	TIME_PER_FRAME;
	static const int WINDOW_WIDTH = 400;//1920;
	static const int WINDOW_HEIGHT = 400;//1080;

	//static BaseRunner* getInstance();
	BaseRunner();
	void run();
	float getFPS();

private:
	
	sf::RenderWindow		window;
	//static BaseRunner* sharedInstance;
	float ticks = 0.0f;
	int counter = 0;

	void render();
	void processEvents();
	void update(sf::Time elapsedTime);

	int columnGrid = 0; int rowGrid = 0;

	const int MAX_COLUMN = 5;//28;
	const int MAX_ROW = 5;//22;



};


