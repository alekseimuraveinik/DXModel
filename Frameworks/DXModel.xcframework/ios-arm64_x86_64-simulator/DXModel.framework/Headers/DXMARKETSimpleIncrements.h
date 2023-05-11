
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientUtilIncrementSimpleIncrements")
#ifdef RESTRICT_ComDevexpertsDxmarketClientUtilIncrementSimpleIncrements
#define INCLUDE_ALL_ComDevexpertsDxmarketClientUtilIncrementSimpleIncrements 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientUtilIncrementSimpleIncrements 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientUtilIncrementSimpleIncrements

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETSimpleIncrements_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientUtilIncrementSimpleIncrements || defined(INCLUDE_DXMARKETSimpleIncrements))
#define DXMARKETSimpleIncrements_

#define RESTRICT_ComDevexpertsDxmarketClientUtilIncrementIncrements 1
#define INCLUDE_DXMARKETIncrements 1
#include "DXMARKETIncrements.h"

@interface DXMARKETSimpleIncrements : NSObject < DXMARKETIncrements >

#pragma mark Public

- (instancetype __nonnull)initWithDouble:(jdouble)increment;

- (jdouble)getIncrementValueWithDouble:(jdouble)value
                               withInt:(jint)direction;

- (jdouble)performIncrementWithDouble:(jdouble)value
                              withInt:(jint)direction;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETSimpleIncrements)

FOUNDATION_EXPORT void DXMARKETSimpleIncrements_initWithDouble_(DXMARKETSimpleIncrements *self, jdouble increment);

FOUNDATION_EXPORT DXMARKETSimpleIncrements *new_DXMARKETSimpleIncrements_initWithDouble_(jdouble increment) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETSimpleIncrements *create_DXMARKETSimpleIncrements_initWithDouble_(jdouble increment);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETSimpleIncrements)

@compatibility_alias ComDevexpertsDxmarketClientUtilIncrementSimpleIncrements DXMARKETSimpleIncrements;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientUtilIncrementSimpleIncrements")
