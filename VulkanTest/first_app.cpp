#include "first_app.hpp"

namespace Lve {

	void FirstApp::run() {
		while (!lveWindow.shouldClose()) {
			glfwPollEvents();
		}
	}
}