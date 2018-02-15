// WimRegister.cpp

#include "7zStdAfx.h"

#include "../../Common/RegisterArc.h"

#include "WimHandler.h"

namespace NArchive {
namespace NWim {

REGISTER_ARC_IO(
  "wim", "wim swm esd", 0, 0xE6,
  kSignature,
  0,
  NArcInfoFlags::kAltStreams |
  NArcInfoFlags::kNtSecure |
  NArcInfoFlags::kSymLinks |
  NArcInfoFlags::kHardLinks
  , NULL)

}}
