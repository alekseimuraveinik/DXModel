
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientSessionClientListener")
#ifdef RESTRICT_ComDevexpertsPipestoneClientSessionClientListener
#define INCLUDE_ALL_ComDevexpertsPipestoneClientSessionClientListener 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneClientSessionClientListener 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneClientSessionClientListener
#ifdef INCLUDE_PSClientListener_Template
#define INCLUDE_PSClientListener 1
#endif

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSClientListener_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientSessionClientListener || defined(INCLUDE_PSClientListener))
#define PSClientListener_

@class JavaIoIOException;
@class JavaLangException;
@class JavaLangThrowable;
@class PSConnectionSpec;
@class PSErrorTO;
@protocol PSSession;

@protocol PSClientListener < JavaObject >

- (void)onConnectedWithPSSession:(id<PSSession>)session
            withPSConnectionSpec:(PSConnectionSpec *)spec;

- (void)onDisconnectedWithPSSession:(id<PSSession>)session
               withPSConnectionSpec:(PSConnectionSpec *)spec;

- (void)onConnectionTerminatedWithPSConnectionSpec:(PSConnectionSpec *)spec
                             withJavaIoIOException:(JavaIoIOException *)reason;

- (void)onSessionStopped;

- (void)onConnectionAttemptFailedWithPSConnectionSpec:(PSConnectionSpec *)spec
                                withJavaLangException:(JavaLangException *)reason;

- (void)onServerUnavailableWithPSConnectionSpec:(PSConnectionSpec *)spec;

- (void)onConnectionFailed;

- (void)onUnexpectedErrorWithJavaLangThrowable:(JavaLangThrowable *)error;

- (void)onSessionClosedOnRemoteSideWithPSErrorTO:(PSErrorTO *)error;

@end

J2OBJC_EMPTY_STATIC_INIT(PSClientListener)

J2OBJC_TYPE_LITERAL_HEADER(PSClientListener)

#define ComDevexpertsPipestoneClientSessionClientListener PSClientListener

#endif

#if !defined (PSClientListener_Template_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientSessionClientListener || defined(INCLUDE_PSClientListener_Template))
#define PSClientListener_Template_

@class JavaIoIOException;
@class JavaLangException;
@class JavaLangThrowable;
@class PSConnectionSpec;
@class PSErrorTO;
@protocol PSSession;

@interface PSClientListener_Template : NSObject < PSClientListener >

#pragma mark Public

- (instancetype __nonnull)init;

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

@end

J2OBJC_EMPTY_STATIC_INIT(PSClientListener_Template)

FOUNDATION_EXPORT void PSClientListener_Template_init(PSClientListener_Template *self);

FOUNDATION_EXPORT PSClientListener_Template *new_PSClientListener_Template_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSClientListener_Template *create_PSClientListener_Template_init(void);

J2OBJC_TYPE_LITERAL_HEADER(PSClientListener_Template)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientSessionClientListener")
