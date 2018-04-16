#ifndef SOUND_H
#define SOUND_H

class Sound
{
public:
	Sound(int size, int channels, int samplesPerSecond, void* data);
	virtual ~Sound();

	int Channels() const;
	int SamplesPerSecond() const;
	int Size() const;
	void* Data() const;
private:
	int _channels;
	int _samplesPerSecond;
	int _size;
	void* _data;
};

#endif