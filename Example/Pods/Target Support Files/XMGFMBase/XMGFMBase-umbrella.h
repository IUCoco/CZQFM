#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "Base.h"
#import "Sington.h"
#import "XMGConst.h"

FOUNDATION_EXPORT double XMGFMBaseVersionNumber;
FOUNDATION_EXPORT const unsigned char XMGFMBaseVersionString[];

