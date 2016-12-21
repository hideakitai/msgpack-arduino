//
// MessagePack for C++
//
// Copyright (C) 2008-2009 FURUHASHI Sadayuki
//
//    Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//    http://www.boost.org/LICENSE_1_0.txt)
//
extern "C"
{
    int _getpid(){ return -1;}
    int _kill(int pid, int sig){ return -1; }
    // int _write(){return -1;}
}
#include "msgpack/object.hpp"
#include "msgpack/iterator.hpp"
#include "msgpack/zone.hpp"
#include "msgpack/pack.hpp"
#include "msgpack/unpack.hpp"
#include "msgpack/sbuffer.hpp"
#include "msgpack/vrefbuffer.hpp"
#include "msgpack/version.hpp"
#include "msgpack/type.hpp"
