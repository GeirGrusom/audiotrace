#pragma once

#include "vec.h"

template<typename T> class Octree sealed
{
	class Node
	{
	private:
		const glm::vec3 pos;
		const glm::vec3 size;
		Node* children[8];
	public:
		Node(const glm::vec3 position, const glm::vec3 size)
			: pos(position), size(size)
		{

		}

		bool Intersects(const glm::vec3& vec)
		{
			
		}

		bool Intersects(const glm::vec3& orig, const glm::vec3& dir)
		{
			
		}

		bool IsCellEmpty(const int index)
		{
			return children[index] == nullptr;
		}
	};

private:
	Node root;
public:

};