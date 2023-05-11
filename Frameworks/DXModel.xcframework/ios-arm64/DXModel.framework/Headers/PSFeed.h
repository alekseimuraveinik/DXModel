
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientApiFeedsFeed")
#ifdef RESTRICT_ComDevexpertsPipestoneClientApiFeedsFeed
#define INCLUDE_ALL_ComDevexpertsPipestoneClientApiFeedsFeed 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneClientApiFeedsFeed 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneClientApiFeedsFeed

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSFeed_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientApiFeedsFeed || defined(INCLUDE_PSFeed))
#define PSFeed_

@protocol PSFeedListener;

@protocol PSFeed < JavaObject >

- (void)subscribeWithId:(id)request;

- (void)subscribeWithId:(id)request
     withPSFeedListener:(id<PSFeedListener>)listener;

- (void)strictSubscribeWithId:(id)request;

- (void)strictSubscribeWithId:(id)request
           withPSFeedListener:(id<PSFeedListener>)listener;

- (id)getLastRequest;

- (id)getLastResponse;

- (void)close;

- (void)suspendUpdates;

- (void)resumeUpdates;

- (jboolean)isSuspended;

- (void)addListenerWithPSFeedListener:(id<PSFeedListener>)listener;

- (void)removeListenerWithPSFeedListener:(id<PSFeedListener>)listener;

@end

J2OBJC_EMPTY_STATIC_INIT(PSFeed)

J2OBJC_TYPE_LITERAL_HEADER(PSFeed)

#define ComDevexpertsPipestoneClientApiFeedsFeed PSFeed

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientApiFeedsFeed")
