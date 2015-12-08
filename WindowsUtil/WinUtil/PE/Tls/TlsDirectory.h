#pragma once
// PIMAGE_TLS_DIRECTORY32 PIMAGE_TLS_DIRECTORY64

#include "../Common/Common.h"
namespace PE
{
	template<typename _PeDecoder>
	class TlsDirectory :
		public DataDirectory<_PeDecoder, PVOID, IMAGE_DIRECTORY_ENTRY_TLS>
	{
	public:

		TlsDirectory(_PeDecoder& pe) :DataDirectoryBase(pe)
		{
		}

		~TlsDirectory()
		{
		}
	};

}
