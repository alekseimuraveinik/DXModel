
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientUtilIncrementIncrementsExclusion")
#ifdef RESTRICT_ComDevexpertsDxmarketClientUtilIncrementIncrementsExclusion
#define INCLUDE_ALL_ComDevexpertsDxmarketClientUtilIncrementIncrementsExclusion 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientUtilIncrementIncrementsExclusion 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientUtilIncrementIncrementsExclusion

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETIncrementsExclusion_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientUtilIncrementIncrementsExclusion || defined(INCLUDE_DXMARKETIncrementsExclusion))
#define DXMARKETIncrementsExclusion_

@class IOSDoubleArray;

@interface DXMARKETIncrementsExclusion : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

- (IOSDoubleArray *)excludeRangeWithDoubleArray:(IOSDoubleArray *)incrementsArray
                                     withDouble:(jdouble)from
                                     withDouble:(jdouble)to;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETIncrementsExclusion)

FOUNDATION_EXPORT void DXMARKETIncrementsExclusion_init(DXMARKETIncrementsExclusion *self);

FOUNDATION_EXPORT DXMARKETIncrementsExclusion *new_DXMARKETIncrementsExclusion_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETIncrementsExclusion *create_DXMARKETIncrementsExclusion_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETIncrementsExclusion)

@compatibility_alias ComDevexpertsDxmarketClientUtilIncrementIncrementsExclusion DXMARKETIncrementsExclusion;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientUtilIncrementIncrementsExclusion")
