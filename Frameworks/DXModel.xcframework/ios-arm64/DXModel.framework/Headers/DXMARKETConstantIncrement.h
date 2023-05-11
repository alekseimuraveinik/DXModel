
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientUtilIncrementConstantIncrement")
#ifdef RESTRICT_ComDevexpertsDxmarketClientUtilIncrementConstantIncrement
#define INCLUDE_ALL_ComDevexpertsDxmarketClientUtilIncrementConstantIncrement 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientUtilIncrementConstantIncrement 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientUtilIncrementConstantIncrement

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETConstantIncrement_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientUtilIncrementConstantIncrement || defined(INCLUDE_DXMARKETConstantIncrement))
#define DXMARKETConstantIncrement_

#define RESTRICT_ComDevexpertsDxmarketClientUtilIncrementIncrement 1
#define INCLUDE_DXMARKETIncrement 1
#include "DXMARKETIncrement.h"

@interface DXMARKETConstantIncrement : NSObject < DXMARKETIncrement >

#pragma mark Public

- (jdouble)doIncrementWithDouble:(jdouble)value
                         withInt:(jint)direction;

- (jdouble)value;

#pragma mark Package-Private

- (instancetype __nonnull)initWithDouble:(jdouble)incrementValue
                              withDouble:(jdouble)incrementedValue;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETConstantIncrement)

FOUNDATION_EXPORT void DXMARKETConstantIncrement_initWithDouble_withDouble_(DXMARKETConstantIncrement *self, jdouble incrementValue, jdouble incrementedValue);

FOUNDATION_EXPORT DXMARKETConstantIncrement *new_DXMARKETConstantIncrement_initWithDouble_withDouble_(jdouble incrementValue, jdouble incrementedValue) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETConstantIncrement *create_DXMARKETConstantIncrement_initWithDouble_withDouble_(jdouble incrementValue, jdouble incrementedValue);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETConstantIncrement)

@compatibility_alias ComDevexpertsDxmarketClientUtilIncrementConstantIncrement DXMARKETConstantIncrement;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientUtilIncrementConstantIncrement")
