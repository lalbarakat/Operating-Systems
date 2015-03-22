#ifndef NODE_H
#define NODE_H

#include <cmath>
#include <iostream>

typedef unsigned ulong;
typedef unsigned uchar;
typedef unsigned uint;

enum {
	INVALID = 0,
	VALID,
	DIRTY
};
	
class cacheLine {
protected:
	ulong tag;
	ulong Flags;
	ulong seq;
public:
	cacheLine()	{tag = 0; Flags = 0;}
};

class Cache {
protected:
	ulong size, lineSize;
	cacheLine **cache;
};



#endif
