
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientUtilTimeProvider")
#ifdef RESTRICT_ComDevexpertsDxmarketClientUtilTimeProvider
#define INCLUDE_ALL_ComDevexpertsDxmarketClientUtilTimeProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientUtilTimeProvider 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientUtilTimeProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETTimeProvider_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientUtilTimeProvider || defined(INCLUDE_DXMARKETTimeProvider))
#define DXMARKETTimeProvider_

@class JavaUtilCalendar;

@protocol DXMARKETTimeProvider < JavaObject >

- (JavaUtilCalendar *)getCalendar;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETTimeProvider)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETTimeProvider)

#define ComDevexpertsDxmarketClientUtilTimeProvider DXMARKETTimeProvider

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientUtilTimeProvider")
