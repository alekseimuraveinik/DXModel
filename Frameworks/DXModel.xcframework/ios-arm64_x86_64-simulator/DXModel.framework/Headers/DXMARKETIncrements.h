
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientUtilIncrementIncrements")
#ifdef RESTRICT_ComDevexpertsDxmarketClientUtilIncrementIncrements
#define INCLUDE_ALL_ComDevexpertsDxmarketClientUtilIncrementIncrements 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientUtilIncrementIncrements 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientUtilIncrementIncrements

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETIncrements_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientUtilIncrementIncrements || defined(INCLUDE_DXMARKETIncrements))
#define DXMARKETIncrements_

@protocol DXMARKETIncrements < JavaObject >

- (jdouble)getIncrementValueWithDouble:(jdouble)value
                               withInt:(jint)direction;

- (jdouble)performIncrementWithDouble:(jdouble)value
                              withInt:(jint)direction;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETIncrements)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETIncrements)

#define ComDevexpertsDxmarketClientUtilIncrementIncrements DXMARKETIncrements

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientUtilIncrementIncrements")
