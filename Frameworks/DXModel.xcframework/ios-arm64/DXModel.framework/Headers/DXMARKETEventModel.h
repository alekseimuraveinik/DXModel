
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelLoEventModel")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelLoEventModel
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelLoEventModel 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelLoEventModel 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelLoEventModel

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETEventModel_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelLoEventModel || defined(INCLUDE_DXMARKETEventModel))
#define DXMARKETEventModel_

@protocol PSFeed;

@interface DXMARKETEventModel : NSObject

#pragma mark Public

- (instancetype __nonnull)initWithPSFeed:(id<PSFeed>)feed;

- (void)updateLastTimestampWithLong:(jlong)timestamp;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETEventModel)

FOUNDATION_EXPORT void DXMARKETEventModel_initWithPSFeed_(DXMARKETEventModel *self, id<PSFeed> feed);

FOUNDATION_EXPORT DXMARKETEventModel *new_DXMARKETEventModel_initWithPSFeed_(id<PSFeed> feed) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETEventModel *create_DXMARKETEventModel_initWithPSFeed_(id<PSFeed> feed);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETEventModel)

@compatibility_alias ComDevexpertsDxmarketClientModelLoEventModel DXMARKETEventModel;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelLoEventModel")
