#ifndef I_SOUND_DECODER_H
#define I_SOUND_DECODER_H

#include "Sound.h"
#include <memory>
#include <string>

class ISoundDecoder {
public:
	virtual std::unique_ptr<Sound> Decode(const std::string& filepath) = 0;
};

#endif