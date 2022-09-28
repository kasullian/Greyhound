#include "stdafx.h"
#include "CoDXAnimReader.h"

CoDXAnimReader::CoDXAnimReader(uint8_t* Buf, size_t BufSize, bool OwnsBuf)
{
	Buffer = Buf;
	BufferSize = BufSize;
	OwnsBuffer = OwnsBuf;
}

CoDXAnimReader::~CoDXAnimReader()
{
	if (OwnsBuffer)
	{
		delete[] Buffer;
	}
}

uint8_t* CoDXAnimReader::GetBuffer()
{
	return Buffer;
}
