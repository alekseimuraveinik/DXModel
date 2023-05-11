
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientSessionSession")
#ifdef RESTRICT_ComDevexpertsPipestoneClientSessionSession
#define INCLUDE_ALL_ComDevexpertsPipestoneClientSessionSession 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneClientSessionSession 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneClientSessionSession

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSSession_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientSessionSession || defined(INCLUDE_PSSession))
#define PSSession_

@class PSFeedId;
@protocol PSActionPerformer;
@protocol PSFeed;
@protocol PSTypeProvider;

@protocol PSSession < JavaObject >

- (id<PSFeed>)getOrCreateFeedWithPSFeedId:(PSFeedId *)id_;

- (id<PSActionPerformer>)getOrCreatePerformerWithPSTypeProvider:(id<PSTypeProvider>)type;

- (void)reset;

@end

J2OBJC_EMPTY_STATIC_INIT(PSSession)

J2OBJC_TYPE_LITERAL_HEADER(PSSession)

#define ComDevexpertsPipestoneClientSessionSession PSSession

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientSessionSession")
