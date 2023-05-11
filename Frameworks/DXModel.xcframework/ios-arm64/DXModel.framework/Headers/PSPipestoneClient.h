
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientSessionPipestoneClient")
#ifdef RESTRICT_ComDevexpertsPipestoneClientSessionPipestoneClient
#define INCLUDE_ALL_ComDevexpertsPipestoneClientSessionPipestoneClient 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneClientSessionPipestoneClient 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneClientSessionPipestoneClient

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSPipestoneClient_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientSessionPipestoneClient || defined(INCLUDE_PSPipestoneClient))
#define PSPipestoneClient_

@class PSFeedId;
@protocol PSActionPerformer;
@protocol PSClientListener;
@protocol PSConnectionSpecsProvider;
@protocol PSFeed;
@protocol PSTypeProvider;

@protocol PSPipestoneClient < JavaObject >

- (void)startWithPSConnectionSpecsProvider:(id<PSConnectionSpecsProvider>)specsProvider;

- (void)stop;

- (jboolean)isStarted;

- (id<PSFeed>)getFeedWithPSFeedId:(PSFeedId *)id_;

- (id<PSActionPerformer>)getPerformerWithPSTypeProvider:(id<PSTypeProvider>)type;

- (void)addListenerWithPSClientListener:(id<PSClientListener>)listener;

- (void)removeListenerWithPSClientListener:(id<PSClientListener>)listener;

@end

J2OBJC_EMPTY_STATIC_INIT(PSPipestoneClient)

J2OBJC_TYPE_LITERAL_HEADER(PSPipestoneClient)

#define ComDevexpertsPipestoneClientSessionPipestoneClient PSPipestoneClient

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientSessionPipestoneClient")
