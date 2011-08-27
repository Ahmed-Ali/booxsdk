// Authors: John

/// Public header of the system configuration library.

#ifndef ONYX_SYSTEM_PLATFORM_H__
#define ONYX_SYSTEM_PLATFORM_H__

#include <QString>

namespace sys
{

QString platform();

bool isIMX31L();

bool is166E();

bool isImx508();

QString soundModule();

int defaultRotation();

bool collectUserBehavior();

}

#endif  // ONYX_SYSTEM_PLATFORM_H__
