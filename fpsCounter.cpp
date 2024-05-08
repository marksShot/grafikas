#include "GLFW/glfw3.h"
#include <string>

void showFps() {
	double prevTime = 0.0;
	double crntTime = 0.0;
	double timeDiff;
	unsigned int counter = 0;

	crntTime = glfwGetTime();
	timeDiff = crntTime - prevTime;
	counter++;
	if (timeDiff >= 1.0 / 30.0) {
		std::string FPS = std::to_string((1.0 / timeDiff) * counter);
		std::string ms = std::to_string((timeDiff / counter) * 1000);
		std::string newTitle = "YoutubeOpenGL - " + FPS + "FPS / " + ms + "ms";
		glfwSetWindowTitle(window, newTitle.c_str());

		// Resets times and counter
		prevTime = crntTime;
		counter = 0;
	}
}