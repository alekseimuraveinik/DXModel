
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelIndicatorIndicatorsHelper")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelIndicatorIndicatorsHelper
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelIndicatorIndicatorsHelper 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelIndicatorIndicatorsHelper 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelIndicatorIndicatorsHelper

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETIndicatorsHelper_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelIndicatorIndicatorsHelper || defined(INCLUDE_DXMARKETIndicatorsHelper))
#define DXMARKETIndicatorsHelper_

#define RESTRICT_ComDevexpertsPipestoneClientApiFeedsFeedListener 1
#define INCLUDE_PSFeedListener 1
#include "PSFeedListener.h"

@class PSErrorTO;
@protocol DXMARKETIndicatorsCallback;
@protocol PSFeed;
@protocol PSPipestoneClient;

@interface DXMARKETIndicatorsHelper : NSObject < PSFeedListener >

#pragma mark Public

- (instancetype __nonnull)initWithPSPipestoneClient:(id<PSPipestoneClient>)client;

- (jboolean)getIndicatorsWithDXMARKETIndicatorsCallback:(id<DXMARKETIndicatorsCallback>)callback;

- (void)onClosedWithPSFeed:(id<PSFeed>)feed
             withPSErrorTO:(PSErrorTO *)error;

- (void)onResetWithPSFeed:(id<PSFeed>)feed;

- (void)onSubscriptionChangedWithPSFeed:(id<PSFeed>)feed;

- (void)onUpdatedWithPSFeed:(id<PSFeed>)feed;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETIndicatorsHelper)

FOUNDATION_EXPORT void DXMARKETIndicatorsHelper_initWithPSPipestoneClient_(DXMARKETIndicatorsHelper *self, id<PSPipestoneClient> client);

FOUNDATION_EXPORT DXMARKETIndicatorsHelper *new_DXMARKETIndicatorsHelper_initWithPSPipestoneClient_(id<PSPipestoneClient> client) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETIndicatorsHelper *create_DXMARKETIndicatorsHelper_initWithPSPipestoneClient_(id<PSPipestoneClient> client);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETIndicatorsHelper)

@compatibility_alias ComDevexpertsDxmarketClientModelIndicatorIndicatorsHelper DXMARKETIndicatorsHelper;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelIndicatorIndicatorsHelper")
