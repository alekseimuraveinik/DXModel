
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientSessionSessionImpl")
#ifdef RESTRICT_ComDevexpertsPipestoneClientSessionSessionImpl
#define INCLUDE_ALL_ComDevexpertsPipestoneClientSessionSessionImpl 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneClientSessionSessionImpl 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneClientSessionSessionImpl

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSSessionImpl_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientSessionSessionImpl || defined(INCLUDE_PSSessionImpl))
#define PSSessionImpl_

#define RESTRICT_ComDevexpertsPipestoneClientSessionSession 1
#define INCLUDE_PSSession 1
#include "PSSession.h"

@class PSFeedId;
@class PSPacket;
@protocol PSActionPerformer;
@protocol PSFeed;
@protocol PSRemoteCloseNotificationListener;
@protocol PSSessionImpl_RequestListener;
@protocol PSSynchronizer;
@protocol PSTypeProvider;

@interface PSSessionImpl : NSObject < PSSession >
@property (readonly, copy, class) NSString *EMPTY_SESSION_ID NS_SWIFT_NAME(EMPTY_SESSION_ID);

+ (NSString *)EMPTY_SESSION_ID;

#pragma mark Public

- (instancetype __nonnull)initWithPSSynchronizer:(id<PSSynchronizer>)uiSynchronizer
           withPSRemoteCloseNotificationListener:(id<PSRemoteCloseNotificationListener>)closeNotificationListener
                                     withBoolean:(jboolean)useDiff;

- (void)addRequestListenerWithPSSessionImpl_RequestListener:(id<PSSessionImpl_RequestListener>)listener;

- (id<PSFeed>)getOrCreateFeedWithPSFeedId:(PSFeedId *)id_;

- (id<PSActionPerformer>)getOrCreatePerformerWithPSTypeProvider:(id<PSTypeProvider>)type;

- (PSPacket *)getOutgoingPacket;

- (void)processReceivedPacketWithPSPacket:(PSPacket *)packet;

- (void)reconnectWithPSSessionImpl:(PSSessionImpl *)backup;

- (void)recreateSessionStateWithPSSessionImpl:(PSSessionImpl *)backup;

- (void)removeRequestListenerWithPSSessionImpl_RequestListener:(id<PSSessionImpl_RequestListener>)listener;

- (void)reset;

- (NSString *)description;

#pragma mark Package-Private

- (jint)getLastReceivedPackedVersion;

- (PSPacket *)getLastSentPacket;

- (NSString *)getSessionId;

- (void)setSessionIdWithNSString:(NSString *)sessionId;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(PSSessionImpl)

inline NSString *PSSessionImpl_get_EMPTY_SESSION_ID(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *PSSessionImpl_EMPTY_SESSION_ID;
J2OBJC_STATIC_FIELD_OBJ_FINAL(PSSessionImpl, EMPTY_SESSION_ID, NSString *)

FOUNDATION_EXPORT void PSSessionImpl_initWithPSSynchronizer_withPSRemoteCloseNotificationListener_withBoolean_(PSSessionImpl *self, id<PSSynchronizer> uiSynchronizer, id<PSRemoteCloseNotificationListener> closeNotificationListener, jboolean useDiff);

FOUNDATION_EXPORT PSSessionImpl *new_PSSessionImpl_initWithPSSynchronizer_withPSRemoteCloseNotificationListener_withBoolean_(id<PSSynchronizer> uiSynchronizer, id<PSRemoteCloseNotificationListener> closeNotificationListener, jboolean useDiff) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSSessionImpl *create_PSSessionImpl_initWithPSSynchronizer_withPSRemoteCloseNotificationListener_withBoolean_(id<PSSynchronizer> uiSynchronizer, id<PSRemoteCloseNotificationListener> closeNotificationListener, jboolean useDiff);

J2OBJC_TYPE_LITERAL_HEADER(PSSessionImpl)

@compatibility_alias ComDevexpertsPipestoneClientSessionSessionImpl PSSessionImpl;

#endif

#if !defined (PSSessionImpl_RequestListener_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientSessionSessionImpl || defined(INCLUDE_PSSessionImpl_RequestListener))
#define PSSessionImpl_RequestListener_

@protocol PSSessionImpl_RequestListener < JavaObject >

- (void)onNewRequest;

@end

J2OBJC_EMPTY_STATIC_INIT(PSSessionImpl_RequestListener)

J2OBJC_TYPE_LITERAL_HEADER(PSSessionImpl_RequestListener)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientSessionSessionImpl")
