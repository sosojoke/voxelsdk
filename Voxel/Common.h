/*
 * TI Voxel Lib component.
 *
 * Copyright (c) 2014 Texas Instruments Inc.
 */

#ifndef VOXEL_COMMON_H
#define VOXEL_COMMON_H

#include <vector>
#include <stdint.h>
#include <string>
#include <iostream>
#include <unordered_map>
#include "Ptr.h"

#define DIR_SEP "/"

namespace Voxel
{

template <typename T>
using Vector = std::vector<T>;

template <typename K, typename V>
using Map = std::unordered_map<K, V>;

typedef std::string String;
typedef int IndexType;
typedef std::size_t SizeType;
typedef uint8_t ByteType;
typedef uint64_t TimeStampType;


/// String functions
String getHex(uint16_t value);
void split(const String &str, const char delimiter, Vector<String> &split);

/// Array handling template
template<typename T, int sz>
int arraySize(T(&)[sz])
{
  return sz;
}

/// Filesystem functions -- returns the number of files read or else -1 for error. Only those files whose name matches "matchString" partially (sub-string) are returned "files"
int getFiles(const String &dir, const String &matchString, Vector<String> &files);

}

#endif //VOXEL_COMMON_H