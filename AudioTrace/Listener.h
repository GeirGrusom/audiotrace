#include "vec.h"
#include <cassert>

struct transform sealed
{
	glm::vec3 position;
	glm::quat rotation;

	transform()
		: position(glm::vec3(0, 0, 0)), rotation(glm::quat(0, 0, 0, 1))
	{
	}
};

class TransformTrait abstract
{
protected:
	transform trans;
public:
	glm::vec3& Position() {	return trans.position; }
	glm::quat& Rotation() { return trans.rotation; }
};

class AudioSource abstract : public TransformTrait
{
};

class IPlaybackBuffer abstract
{
public:
	virtual const int Size() const = 0;
};

template<int bufferSize> class SampleBuffer sealed : public IPlaybackBuffer
{
private:
	float samples[bufferSize];
public:

	SampleBuffer()
	{
		static_assert(bufferSize > 0, "bufferSize must be larger than zero.");
	}

	const int Size() const { return bufferSize; }
	int& Sample(const int index)
	{
		assert(index > 0);
		assert(index < bufferSize);
		return samples[index];
	}
};

class Listener : public TransformTrait
{
private:
	SampleBuffer<4096> sampleBuffer;
public:

};