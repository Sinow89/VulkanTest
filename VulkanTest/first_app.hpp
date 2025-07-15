#pragma once

#include "Lve_window.hpp"

namespace Lve {
	class FirstApp {

	public:

		static constexpr int WIDTH = 800;
		static constexpr int HEIGHT = 600;

		void run();

	private:
		LveWindow lveWindow{WIDTH, HEIGHT, "Hello Vulkan!" };

	};
}
