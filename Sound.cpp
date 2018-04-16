#include "Sound.h"

Sound::Sound(int size, int channels, int samplesPerSecond, void* data) :
	_size(size),
	_channels(channels),
	_samplesPerSecond(samplesPerSecond),
	_data(data)
{

}

Sound::~Sound()
{
	delete[] _data;
	_data = nullptr;
}

int Sound::Channels() const
{
	return _channels;
}

int Sound::SamplesPerSecond() const
{
	return _samplesPerSecond;
}

int Sound::Size() const
{
	return _size;
}

void* Sound::Data() const
{
	return _data;
}