
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientUtilIncrementIncrement")
#ifdef RESTRICT_ComDevexpertsDxmarketClientUtilIncrementIncrement
#define INCLUDE_ALL_ComDevexpertsDxmarketClientUtilIncrementIncrement 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientUtilIncrementIncrement 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientUtilIncrementIncrement

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETIncrement_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientUtilIncrementIncrement || defined(INCLUDE_DXMARKETIncrement))
#define DXMARKETIncrement_

@protocol DXMARKETIncrement < JavaObject >

- (jdouble)value;

- (jdouble)doIncrementWithDouble:(jdouble)value
                         withInt:(jint)direction;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETIncrement)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETIncrement)

#define ComDevexpertsDxmarketClientUtilIncrementIncrement DXMARKETIncrement

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientUtilIncrementIncrement")
