
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientSessionClientListenerNotifier")
#ifdef RESTRICT_ComDevexpertsPipestoneClientSessionClientListenerNotifier
#define INCLUDE_ALL_ComDevexpertsPipestoneClientSessionClientListenerNotifier 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneClientSessionClientListenerNotifier 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneClientSessionClientListenerNotifier

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSClientListenerNotifier_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientSessionClientListenerNotifier || defined(INCLUDE_PSClientListenerNotifier))
#define PSClientListenerNotifier_

#define RESTRICT_ComDevexpertsPipestoneClientSessionClientListener 1
#define INCLUDE_PSClientListener 1
#include "PSClientListener.h"

@class JavaIoIOException;
@class JavaLangException;
@class JavaLangThrowable;
@class PSConnectionSpec;
@class PSErrorTO;
@protocol JavaUtilCollection;
@protocol PSPipestoneClient;
@protocol PSSession;
@protocol PSSynchronizer;

@interface PSClientListenerNotifier : NSObject < PSClientListener >

#pragma mark Public

- (instancetype __nonnull)initWithPSPipestoneClient:(id<PSPipestoneClient>)client
                             withJavaUtilCollection:(id<JavaUtilCollection>)delegates
                                 withPSSynchronizer:(id<PSSynchronizer>)synchronizer;

- (void)onConnectedWithPSSession:(id<PSSession>)session
            withPSConnectionSpec:(PSConnectionSpec *)spec;

- (void)onConnectionAttemptFailedWithPSConnectionSpec:(PSConnectionSpec *)spec
                                withJavaLangException:(JavaLangException *)reason;

- (void)onConnectionFailed;

- (void)onConnectionTerminatedWithPSConnectionSpec:(PSConnectionSpec *)spec
                             withJavaIoIOException:(JavaIoIOException *)reason;

- (void)onDisconnectedWithPSSession:(id<PSSession>)session
               withPSConnectionSpec:(PSConnectionSpec *)spec;

- (void)onServerUnavailableWithPSConnectionSpec:(PSConnectionSpec *)spec;

- (void)onSessionClosedOnRemoteSideWithPSErrorTO:(PSErrorTO *)error;

- (void)onSessionStopped;

- (void)onUnexpectedErrorWithJavaLangThrowable:(JavaLangThrowable *)error;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(PSClientListenerNotifier)

FOUNDATION_EXPORT void PSClientListenerNotifier_initWithPSPipestoneClient_withJavaUtilCollection_withPSSynchronizer_(PSClientListenerNotifier *self, id<PSPipestoneClient> client, id<JavaUtilCollection> delegates, id<PSSynchronizer> synchronizer);

FOUNDATION_EXPORT PSClientListenerNotifier *new_PSClientListenerNotifier_initWithPSPipestoneClient_withJavaUtilCollection_withPSSynchronizer_(id<PSPipestoneClient> client, id<JavaUtilCollection> delegates, id<PSSynchronizer> synchronizer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSClientListenerNotifier *create_PSClientListenerNotifier_initWithPSPipestoneClient_withJavaUtilCollection_withPSSynchronizer_(id<PSPipestoneClient> client, id<JavaUtilCollection> delegates, id<PSSynchronizer> synchronizer);

J2OBJC_TYPE_LITERAL_HEADER(PSClientListenerNotifier)

@compatibility_alias ComDevexpertsPipestoneClientSessionClientListenerNotifier PSClientListenerNotifier;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientSessionClientListenerNotifier")
