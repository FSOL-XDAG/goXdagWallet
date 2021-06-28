#ifndef XDAG_VERSION_H
#define XDAG_VERSION_H

#define STRINGIZE2(s) #s
#define STRINGIZE(s) STRINGIZE2(s)

#define VERSION_MAJOR               0
#define VERSION_MINOR               1
#define VERSION_REVISION            0

#define XDAG_VERSION STRINGIZE(VERSION_MAJOR) "." STRINGIZE(VERSION_MINOR) "." STRINGIZE(VERSION_REVISION)

#endif
