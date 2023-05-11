
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientUtilIncrementRoundingIncrement")
#ifdef RESTRICT_ComDevexpertsDxmarketClientUtilIncrementRoundingIncrement
#define INCLUDE_ALL_ComDevexpertsDxmarketClientUtilIncrementRoundingIncrement 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientUtilIncrementRoundingIncrement 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientUtilIncrementRoundingIncrement

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETRoundingIncrement_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientUtilIncrementRoundingIncrement || defined(INCLUDE_DXMARKETRoundingIncrement))
#define DXMARKETRoundingIncrement_

#define RESTRICT_ComDevexpertsDxmarketClientUtilIncrementIncrement 1
#define INCLUDE_DXMARKETIncrement 1
#include "DXMARKETIncrement.h"

@interface DXMARKETRoundingIncrement : NSObject < DXMARKETIncrement >

#pragma mark Public

- (jdouble)doIncrementWithDouble:(jdouble)value
                         withInt:(jint)direction;

- (jdouble)value;

#pragma mark Package-Private

- (instancetype __nonnull)initWithDouble:(jdouble)incrementValue;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETRoundingIncrement)

FOUNDATION_EXPORT void DXMARKETRoundingIncrement_initWithDouble_(DXMARKETRoundingIncrement *self, jdouble incrementValue);

FOUNDATION_EXPORT DXMARKETRoundingIncrement *new_DXMARKETRoundingIncrement_initWithDouble_(jdouble incrementValue) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETRoundingIncrement *create_DXMARKETRoundingIncrement_initWithDouble_(jdouble incrementValue);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETRoundingIncrement)

@compatibility_alias ComDevexpertsDxmarketClientUtilIncrementRoundingIncrement DXMARKETRoundingIncrement;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientUtilIncrementRoundingIncrement")
