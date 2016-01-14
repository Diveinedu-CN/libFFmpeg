#ifndef CONFIG_H
#define CONFIG_H
#if __APPLE__
#include <TargetConditionals.h>

#if TARGET_IPHONE_SIMULATOR
// iOS Simulator
#if TARGET_CPU_X86_64
#import "config_x86_64.h"
#elif TARGET_CPU_X86
#import "config_i386.h"
#endif

#elif TARGET_OS_IPHONE
// iOS device

#if TARGET_CPU_ARM64
#import "config_arm64.h"
#else
#import "config_armv7.h"
#endif
#else
#error "Unknown iOS platform"
#endif /* TARGET */

#endif /* __APPLE__ */

#endif /* CONFIG_H */
