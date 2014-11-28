#pragma once

#include "GLFW/glfw3.h"

#include "gl/glcorearb.h"

#include "vec.h"
#include "Listener.h"


int main();
void TraceRay(const glm::vec3& orig, const glm::vec3& dir, const IPlaybackBuffer* buffer);