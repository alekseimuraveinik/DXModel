
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientSessionFeedImpl")
#ifdef RESTRICT_ComDevexpertsPipestoneClientSessionFeedImpl
#define INCLUDE_ALL_ComDevexpertsPipestoneClientSessionFeedImpl 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneClientSessionFeedImpl 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneClientSessionFeedImpl

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSFeedImpl_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientSessionFeedImpl || defined(INCLUDE_PSFeedImpl))
#define PSFeedImpl_

#define RESTRICT_ComDevexpertsPipestoneClientApiFeedsFeed 1
#define INCLUDE_PSFeed 1
#include "PSFeed.h"

@class PSErrorTO;
@class PSRequest;
@class PSSubscriptionResponse;
@protocol PSFeedListener;
@protocol PSTransferObject;

@interface PSFeedImpl : NSObject < PSFeed >

#pragma mark Public

- (void)addListenerWithPSFeedListener:(id<PSFeedListener>)listener;

- (void)close;

- (id<PSTransferObject>)getLastRequest;

- (id<PSTransferObject>)getLastResponse;

- (NSString *)getName;

- (jboolean)isSuspended;

- (void)prependListenerWithPSFeedListener:(id<PSFeedListener>)listener;

- (void)removeListenerWithPSFeedListener:(id<PSFeedListener>)listener;

- (void)resumeUpdates;

- (void)strictSubscribeWithId:(id<PSTransferObject>)request;

- (void)strictSubscribeWithId:(id<PSTransferObject>)request
           withPSFeedListener:(id<PSFeedListener>)listener;

- (void)subscribeWithId:(id<PSTransferObject>)request;

- (void)subscribeWithId:(id<PSTransferObject>)request
     withPSFeedListener:(id<PSFeedListener>)listener;

- (void)suspendUpdates;

#pragma mark Package-Private

- (instancetype __nonnull)initWithInt:(jint)feedId
                         withNSString:(NSString *)name;

- (jboolean)applyResponseWithPSSubscriptionResponse:(PSSubscriptionResponse *)subscriptionResponse;

- (void)closeImplWithPSErrorTO:(PSErrorTO *)error;

- (void)fireUpdate;

- (PSRequest *)getCloseRequest;

- (jint)getFeedId;

- (jboolean)isClosed;

- (void)reset;

- (PSRequest *)retrieveRequestWithBoolean:(jboolean)onlyDifference;

- (PSRequest *)retrieveResubscriptionRequestWithBoolean:(jboolean)onlyDifference;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(PSFeedImpl)

FOUNDATION_EXPORT void PSFeedImpl_initWithInt_withNSString_(PSFeedImpl *self, jint feedId, NSString *name);

FOUNDATION_EXPORT PSFeedImpl *new_PSFeedImpl_initWithInt_withNSString_(jint feedId, NSString *name) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSFeedImpl *create_PSFeedImpl_initWithInt_withNSString_(jint feedId, NSString *name);

J2OBJC_TYPE_LITERAL_HEADER(PSFeedImpl)

@compatibility_alias ComDevexpertsPipestoneClientSessionFeedImpl PSFeedImpl;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientSessionFeedImpl")
