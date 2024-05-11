#pragma once
#include "Main.cpp"

class Game {
public:
	std::string title = "Grafikas Engine Project";
	int width;
	int height;

	void MakeWindow(){
		glfwCreateWindow(width, height, title.c_str(), NULL, NULL);
	}
};