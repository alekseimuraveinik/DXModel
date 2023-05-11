
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientSessionSessionManager")
#ifdef RESTRICT_ComDevexpertsPipestoneClientSessionSessionManager
#define INCLUDE_ALL_ComDevexpertsPipestoneClientSessionSessionManager 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneClientSessionSessionManager 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneClientSessionSessionManager

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSSessionManager_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientSessionSessionManager || defined(INCLUDE_PSSessionManager))
#define PSSessionManager_

#define RESTRICT_ComDevexpertsPipestoneClientSessionClientListener 1
#define INCLUDE_PSClientListener_Template 1
#include "PSClientListener.h"

#define RESTRICT_ComDevexpertsPipestoneClientSessionAuthenticationWatcher 1
#define INCLUDE_PSAuthenticationWatcher 1
#include "PSAuthenticationWatcher.h"

@class PSConnectionSpec;
@class PSSerializedConnection;
@class PSSessionImpl;
@protocol PSRemoteCloseNotificationListener;
@protocol PSSession;
@protocol PSSessionAuthenticator;
@protocol PSSynchronizer;

@interface PSSessionManager : PSClientListener_Template < PSAuthenticationWatcher >

#pragma mark Public

- (void)authenticate;

- (void)checkSessionRestoreWithPSSerializedConnection:(PSSerializedConnection *)connection;

- (PSSessionImpl *)getSession;

- (PSSessionImpl *)newSession OBJC_METHOD_FAMILY_NONE;

- (void)onConnectedWithPSSession:(id<PSSession>)active
            withPSConnectionSpec:(PSConnectionSpec *)spec;

- (void)onDisconnectedWithPSSession:(id<PSSession>)session
               withPSConnectionSpec:(PSConnectionSpec *)spec;

#pragma mark Package-Private

- (instancetype __nonnull)initWithPSSynchronizer:(id<PSSynchronizer>)synchronizer
                      withPSSessionAuthenticator:(id<PSSessionAuthenticator>)authenticationListener
           withPSRemoteCloseNotificationListener:(id<PSRemoteCloseNotificationListener>)closeNotificationListener
                                     withBoolean:(jboolean)sendOnlyDifference;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(PSSessionManager)

FOUNDATION_EXPORT void PSSessionManager_initWithPSSynchronizer_withPSSessionAuthenticator_withPSRemoteCloseNotificationListener_withBoolean_(PSSessionManager *self, id<PSSynchronizer> synchronizer, id<PSSessionAuthenticator> authenticationListener, id<PSRemoteCloseNotificationListener> closeNotificationListener, jboolean sendOnlyDifference);

FOUNDATION_EXPORT PSSessionManager *new_PSSessionManager_initWithPSSynchronizer_withPSSessionAuthenticator_withPSRemoteCloseNotificationListener_withBoolean_(id<PSSynchronizer> synchronizer, id<PSSessionAuthenticator> authenticationListener, id<PSRemoteCloseNotificationListener> closeNotificationListener, jboolean sendOnlyDifference) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSSessionManager *create_PSSessionManager_initWithPSSynchronizer_withPSSessionAuthenticator_withPSRemoteCloseNotificationListener_withBoolean_(id<PSSynchronizer> synchronizer, id<PSSessionAuthenticator> authenticationListener, id<PSRemoteCloseNotificationListener> closeNotificationListener, jboolean sendOnlyDifference);

J2OBJC_TYPE_LITERAL_HEADER(PSSessionManager)

@compatibility_alias ComDevexpertsPipestoneClientSessionSessionManager PSSessionManager;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientSessionSessionManager")
