
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientUtilIncrementPriceIncrements")
#ifdef RESTRICT_ComDevexpertsDxmarketClientUtilIncrementPriceIncrements
#define INCLUDE_ALL_ComDevexpertsDxmarketClientUtilIncrementPriceIncrements 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientUtilIncrementPriceIncrements 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientUtilIncrementPriceIncrements

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETPriceIncrements_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientUtilIncrementPriceIncrements || defined(INCLUDE_DXMARKETPriceIncrements))
#define DXMARKETPriceIncrements_

#define RESTRICT_ComDevexpertsDxmarketClientUtilIncrementIncrements 1
#define INCLUDE_DXMARKETIncrements 1
#include "DXMARKETIncrements.h"

@class PSLongListTO;

@interface DXMARKETPriceIncrements : NSObject < DXMARKETIncrements >

#pragma mark Public

- (instancetype __nonnull)initWithPSLongListTO:(PSLongListTO *)incrementsArray;

- (instancetype __nonnull)initWithPSLongListTO:(PSLongListTO *)incrementsArray
                                   withBoolean:(jboolean)checkPointAware;

- (jdouble)getIncrementValueWithDouble:(jdouble)price
                               withInt:(jint)direction;

- (jdouble)performIncrementWithDouble:(jdouble)price
                              withInt:(jint)direction;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETPriceIncrements)

FOUNDATION_EXPORT void DXMARKETPriceIncrements_initWithPSLongListTO_(DXMARKETPriceIncrements *self, PSLongListTO *incrementsArray);

FOUNDATION_EXPORT DXMARKETPriceIncrements *new_DXMARKETPriceIncrements_initWithPSLongListTO_(PSLongListTO *incrementsArray) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETPriceIncrements *create_DXMARKETPriceIncrements_initWithPSLongListTO_(PSLongListTO *incrementsArray);

FOUNDATION_EXPORT void DXMARKETPriceIncrements_initWithPSLongListTO_withBoolean_(DXMARKETPriceIncrements *self, PSLongListTO *incrementsArray, jboolean checkPointAware);

FOUNDATION_EXPORT DXMARKETPriceIncrements *new_DXMARKETPriceIncrements_initWithPSLongListTO_withBoolean_(PSLongListTO *incrementsArray, jboolean checkPointAware) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETPriceIncrements *create_DXMARKETPriceIncrements_initWithPSLongListTO_withBoolean_(PSLongListTO *incrementsArray, jboolean checkPointAware);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETPriceIncrements)

@compatibility_alias ComDevexpertsDxmarketClientUtilIncrementPriceIncrements DXMARKETPriceIncrements;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientUtilIncrementPriceIncrements")
