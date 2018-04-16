#ifndef OGG_DECODER_H
#define OGG_DECODER_H

#include "ISoundDecoder.h"

class OggDecoder: public ISoundDecoder {
public:
	std::unique_ptr<Sound> Decode(const std::string& filePath);
};

#endif