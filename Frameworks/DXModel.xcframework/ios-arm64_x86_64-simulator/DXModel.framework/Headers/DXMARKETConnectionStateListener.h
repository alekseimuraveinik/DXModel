
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientNetConnectionStateListener")
#ifdef RESTRICT_ComDevexpertsDxmarketClientNetConnectionStateListener
#define INCLUDE_ALL_ComDevexpertsDxmarketClientNetConnectionStateListener 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientNetConnectionStateListener 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientNetConnectionStateListener

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETConnectionStateListener_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientNetConnectionStateListener || defined(INCLUDE_DXMARKETConnectionStateListener))
#define DXMARKETConnectionStateListener_

@protocol DXMARKETConnectionStateListener < JavaObject >

- (void)onSessionInactive;

- (void)onSessionReset;

- (void)onSessionActive;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETConnectionStateListener)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETConnectionStateListener)

#define ComDevexpertsDxmarketClientNetConnectionStateListener DXMARKETConnectionStateListener

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientNetConnectionStateListener")
