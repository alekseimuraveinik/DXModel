
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientApplicationApplicationStateListener")
#ifdef RESTRICT_ComDevexpertsDxmarketClientApplicationApplicationStateListener
#define INCLUDE_ALL_ComDevexpertsDxmarketClientApplicationApplicationStateListener 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientApplicationApplicationStateListener 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientApplicationApplicationStateListener

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETApplicationStateListener_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientApplicationApplicationStateListener || defined(INCLUDE_DXMARKETApplicationStateListener))
#define DXMARKETApplicationStateListener_

@protocol DXMARKETApplicationStateListener < JavaObject >

- (void)stateChangedWithInt:(jint)from
                    withInt:(jint)to;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETApplicationStateListener)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETApplicationStateListener)

#define ComDevexpertsDxmarketClientApplicationApplicationStateListener DXMARKETApplicationStateListener

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientApplicationApplicationStateListener")
