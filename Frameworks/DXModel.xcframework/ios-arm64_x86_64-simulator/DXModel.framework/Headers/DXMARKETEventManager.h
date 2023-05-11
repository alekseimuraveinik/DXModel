
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelEventEventManager")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelEventEventManager
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelEventEventManager 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelEventEventManager 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelEventEventManager

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETEventManager_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelEventEventManager || defined(INCLUDE_DXMARKETEventManager))
#define DXMARKETEventManager_

#define RESTRICT_ComDevexpertsPipestoneClientApiFeedsFeedListener 1
#define INCLUDE_PSFeedListener 1
#include "PSFeedListener.h"

#define RESTRICT_ComDevexpertsDxmarketClientApplicationApplicationStateListener 1
#define INCLUDE_DXMARKETApplicationStateListener 1
#include "DXMARKETApplicationStateListener.h"

@class DXEventTO;
@class DXEventTypeEnum;
@class DXMARKETApplicationStateHolder;
@class PSErrorTO;
@protocol DXDecimalFormatter;
@protocol DXMARKETCharSequenceBuilder;
@protocol DXMARKETEventMessageBuilderFactory;
@protocol DXMARKETEventProcessor;
@protocol DXMARKETEventStringProvider;
@protocol PSFeed;

@interface DXMARKETEventManager : NSObject < PSFeedListener, DXMARKETApplicationStateListener >

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETEventProcessor:(id<DXMARKETEventProcessor>)processor
                                              withPSFeed:(id<PSFeed>)feed
                      withDXMARKETApplicationStateHolder:(DXMARKETApplicationStateHolder *)app
                         withDXMARKETEventStringProvider:(id<DXMARKETEventStringProvider>)provider;

- (void)onClosedWithPSFeed:(id<PSFeed>)feed
             withPSErrorTO:(PSErrorTO *)error;

- (void)onResetWithPSFeed:(id<PSFeed>)feed;

- (void)onSubscriptionChangedWithPSFeed:(id<PSFeed>)feed;

- (void)onUpdatedWithPSFeed:(id<PSFeed>)feed;

- (void)prepareHeaderWithDXMARKETCharSequenceBuilder:(id<DXMARKETCharSequenceBuilder>)builder
                                       withDXEventTO:(DXEventTO *)event;

- (void)prepareTextWithDXMARKETCharSequenceBuilder:(id<DXMARKETCharSequenceBuilder>)builder
                                     withDXEventTO:(DXEventTO *)event;

- (void)stateChangedWithInt:(jint)from
                    withInt:(jint)to;

#pragma mark Protected

- (id<DXMARKETEventMessageBuilderFactory>)getFactoryWithDXMARKETEventStringProvider:(id<DXMARKETEventStringProvider>)provider
                                                                withDXEventTypeEnum:(DXEventTypeEnum *)type;

- (id<DXDecimalFormatter>)newDecimalFormatter OBJC_METHOD_FAMILY_NONE;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETEventManager)

FOUNDATION_EXPORT void DXMARKETEventManager_initWithDXMARKETEventProcessor_withPSFeed_withDXMARKETApplicationStateHolder_withDXMARKETEventStringProvider_(DXMARKETEventManager *self, id<DXMARKETEventProcessor> processor, id<PSFeed> feed, DXMARKETApplicationStateHolder *app, id<DXMARKETEventStringProvider> provider);

FOUNDATION_EXPORT DXMARKETEventManager *new_DXMARKETEventManager_initWithDXMARKETEventProcessor_withPSFeed_withDXMARKETApplicationStateHolder_withDXMARKETEventStringProvider_(id<DXMARKETEventProcessor> processor, id<PSFeed> feed, DXMARKETApplicationStateHolder *app, id<DXMARKETEventStringProvider> provider) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETEventManager *create_DXMARKETEventManager_initWithDXMARKETEventProcessor_withPSFeed_withDXMARKETApplicationStateHolder_withDXMARKETEventStringProvider_(id<DXMARKETEventProcessor> processor, id<PSFeed> feed, DXMARKETApplicationStateHolder *app, id<DXMARKETEventStringProvider> provider);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETEventManager)

@compatibility_alias ComDevexpertsDxmarketClientModelEventEventManager DXMARKETEventManager;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelEventEventManager")
