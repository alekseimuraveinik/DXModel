
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkProtocolTransportSession")
#ifdef RESTRICT_ComDevexpertsPipestoneClientNetworkProtocolTransportSession
#define INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkProtocolTransportSession 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkProtocolTransportSession 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneClientNetworkProtocolTransportSession

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSTransportSession_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkProtocolTransportSession || defined(INCLUDE_PSTransportSession))
#define PSTransportSession_

#define RESTRICT_ComDevexpertsPipestoneClientSessionSessionImpl 1
#define INCLUDE_PSSessionImpl_RequestListener 1
#include "PSSessionImpl.h"

@class PSSerializedConnection;
@class PSSessionImpl;
@protocol PSTransportErrorListener;

@interface PSTransportSession : NSObject < PSSessionImpl_RequestListener >

#pragma mark Public

- (instancetype __nonnull)initWithPSSerializedConnection:(PSSerializedConnection *)connection
                                       withPSSessionImpl:(PSSessionImpl *)session;

- (void)close;

- (void)markForClosing;

- (void)onNewRequest;

- (void)openAndWait;

- (void)setListenerWithPSTransportErrorListener:(id<PSTransportErrorListener>)listener;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(PSTransportSession)

FOUNDATION_EXPORT void PSTransportSession_initWithPSSerializedConnection_withPSSessionImpl_(PSTransportSession *self, PSSerializedConnection *connection, PSSessionImpl *session);

FOUNDATION_EXPORT PSTransportSession *new_PSTransportSession_initWithPSSerializedConnection_withPSSessionImpl_(PSSerializedConnection *connection, PSSessionImpl *session) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSTransportSession *create_PSTransportSession_initWithPSSerializedConnection_withPSSessionImpl_(PSSerializedConnection *connection, PSSessionImpl *session);

J2OBJC_TYPE_LITERAL_HEADER(PSTransportSession)

@compatibility_alias ComDevexpertsPipestoneClientNetworkProtocolTransportSession PSTransportSession;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkProtocolTransportSession")
