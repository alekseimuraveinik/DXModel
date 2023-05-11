
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelLoPositionCloseByModel")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelLoPositionCloseByModel
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelLoPositionCloseByModel 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelLoPositionCloseByModel 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelLoPositionCloseByModel

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETPositionCloseByModel_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelLoPositionCloseByModel || defined(INCLUDE_DXMARKETPositionCloseByModel))
#define DXMARKETPositionCloseByModel_

@class DXPositionTO;
@protocol PSFeed;

@interface DXMARKETPositionCloseByModel : NSObject

#pragma mark Public

- (instancetype __nonnull)initWithPSFeed:(id<PSFeed>)feed;

- (DXPositionTO *)getPositionByCodeWithNSString:(NSString *)code;

- (DXPositionTO *)getTargetPosition;

- (void)setPositionWithNSString:(NSString *)positionCode;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETPositionCloseByModel)

FOUNDATION_EXPORT void DXMARKETPositionCloseByModel_initWithPSFeed_(DXMARKETPositionCloseByModel *self, id<PSFeed> feed);

FOUNDATION_EXPORT DXMARKETPositionCloseByModel *new_DXMARKETPositionCloseByModel_initWithPSFeed_(id<PSFeed> feed) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETPositionCloseByModel *create_DXMARKETPositionCloseByModel_initWithPSFeed_(id<PSFeed> feed);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETPositionCloseByModel)

@compatibility_alias ComDevexpertsDxmarketClientModelLoPositionCloseByModel DXMARKETPositionCloseByModel;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelLoPositionCloseByModel")
