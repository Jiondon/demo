//
// Adaptive Vision Library 4.10.0.61766
// This file is a part of Adaptive Vision Library, version 4.10
// Copyright (C) 2018 Future Processing Sp. z o. o.
//
// This file should not be included directly in your program.
// Please, include the main header file of the library instead.
//

#ifndef ATL_DUMMY_H
#define ATL_DUMMY_H

namespace atl
{
	template <typename T>
	class Dummy
	{
	private:
		T object;

	public:
		T& Get() { return object; }
		operator T& () { return object; }
	};

	#ifdef ATL_DEFINE_DUMMY	
	#	define dummy(type) atl::Dummy<type>().Get()
	#endif
}

#endif