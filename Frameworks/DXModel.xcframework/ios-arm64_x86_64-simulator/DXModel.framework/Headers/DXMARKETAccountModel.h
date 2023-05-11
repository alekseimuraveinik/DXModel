
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelLoAccountModel")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelLoAccountModel
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelLoAccountModel 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelLoAccountModel 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelLoAccountModel

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETAccountModel_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelLoAccountModel || defined(INCLUDE_DXMARKETAccountModel))
#define DXMARKETAccountModel_

@class DXAccountTO;
@class PSListTO;
@protocol PSFeed;

@interface DXMARKETAccountModel : NSObject

#pragma mark Public

- (instancetype __nonnull)initWithPSFeed:(id<PSFeed>)accountFeed;

- (NSString *)getAccountCurrencyWithInt:(jint)id_;

- (PSListTO *)getAccounts;

- (DXAccountTO *)getAccountTOWithInt:(jint)id_;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETAccountModel)

FOUNDATION_EXPORT void DXMARKETAccountModel_initWithPSFeed_(DXMARKETAccountModel *self, id<PSFeed> accountFeed);

FOUNDATION_EXPORT DXMARKETAccountModel *new_DXMARKETAccountModel_initWithPSFeed_(id<PSFeed> accountFeed) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETAccountModel *create_DXMARKETAccountModel_initWithPSFeed_(id<PSFeed> accountFeed);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETAccountModel)

@compatibility_alias ComDevexpertsDxmarketClientModelLoAccountModel DXMARKETAccountModel;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelLoAccountModel")
