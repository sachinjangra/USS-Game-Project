#pragma once
class Game : private sf::NonCopyable
{
public:
	Game();
	void					run();


private:
	void					processEvents();
	void					update(sf::Time elapsedTime);
	void					render();

	void					handlePlayerInput(sf::Keyboard::Key key, bool isPressed);


private:
	static const sf::Time	TimePerFrame;

	sf::RenderWindow		mWindow;
	World					mWorld;

	sf::ContextSettings		mSettings;
};