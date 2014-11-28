#include "main.h"
#include "../packages/glfw.3.0.4.3/build/native/include/GLFW/glfw3.h"

void initOpenGL()
{
	
}

int main()
{
	Listener leftChannel;
	Listener rightChannel;

	rightChannel.Rotation() = glm::quat(-180, glm::vec3(0, 1, 0));
	rightChannel.Rotation() = glm::quat(180, glm::vec3(0, 1, 0));

	glfwInit();

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);

	const auto mainWindow = glfwCreateWindow(800, 600, "Audio Trace", nullptr, nullptr);
	glfwMakeContextCurrent(mainWindow);

	
	while (!glfwWindowShouldClose(mainWindow))
	{
		glfwPollEvents();
		TraceRay(leftChannel.Position(), glm::vec3((glm::toMat4(leftChannel.Rotation()) * glm::vec4(0, 0, 1, 1))), nullptr);
		
		glfwSwapBuffers(mainWindow);
	}

	glfwDestroyWindow(mainWindow);

	return 0;
}

void TraceRay(const glm::vec3& orig, const glm::vec3& dir, const IPlaybackBuffer* buffer)
{

}