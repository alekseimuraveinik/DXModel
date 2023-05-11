
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkProtocolTransportSessionListener")
#ifdef RESTRICT_ComDevexpertsPipestoneClientNetworkProtocolTransportSessionListener
#define INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkProtocolTransportSessionListener 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkProtocolTransportSessionListener 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneClientNetworkProtocolTransportSessionListener

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSTransportSessionListener_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkProtocolTransportSessionListener || defined(INCLUDE_PSTransportSessionListener))
#define PSTransportSessionListener_

@class JavaIoIOException;
@class JavaLangException;
@class JavaLangThrowable;
@class PSConnectionSpec;

@protocol PSTransportSessionListener < JavaObject >

- (void)onClosed;

- (void)onUnrecoverableExceptionWithJavaLangThrowable:(JavaLangThrowable *)throwable;

- (void)onDisconnectedWithJavaIoIOException:(JavaIoIOException *)exception;

- (void)onConnectionFailedWithJavaLangException:(JavaLangException *)reason;

- (void)onConnectionSucceededWithPSConnectionSpec:(PSConnectionSpec *)spec;

@end

J2OBJC_EMPTY_STATIC_INIT(PSTransportSessionListener)

J2OBJC_TYPE_LITERAL_HEADER(PSTransportSessionListener)

#define ComDevexpertsPipestoneClientNetworkProtocolTransportSessionListener PSTransportSessionListener

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkProtocolTransportSessionListener")
