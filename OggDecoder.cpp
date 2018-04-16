#include "OggDecoder.h"
#include <stb_vorbis.h>

std::unique_ptr<Sound> OggDecoder::Decode(const std::string& filepath) 
{
	int size;
	int channels;
	int samplesPerSecond;
	short* data;

	size = stb_vorbis_decode_filename(filepath.c_str(), &channels, &samplesPerSecond, &data);
	if (size == -1)
	{
		throw; // failed to decode
	}
	
	return std::make_unique<Sound>(size * sizeof(short), channels, samplesPerSecond, data);
}