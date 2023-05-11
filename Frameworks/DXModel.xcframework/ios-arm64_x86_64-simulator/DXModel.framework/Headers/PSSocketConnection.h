
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoSocketSocketConnection")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoSocketSocketConnection
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoSocketSocketConnection 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoSocketSocketConnection 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoSocketSocketConnection

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSSocketConnection_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoSocketSocketConnection || defined(INCLUDE_PSSocketConnection))
#define PSSocketConnection_

#define RESTRICT_ComDevexpertsPipestoneCommonIoConnectionImpl 1
#define INCLUDE_PSConnectionImpl 1
#include "PSConnectionImpl.h"

@class JavaIoInputStream;
@class JavaIoOutputStream;
@class JavaNetSocket;
@protocol PSConnection;

@interface PSSocketConnection : PSConnectionImpl

#pragma mark Public

- (instancetype __nonnull)initWithJavaNetSocket:(JavaNetSocket *)socket;

+ (id<PSConnection>)openWithNSString:(NSString *)host
                             withInt:(jint)port;

+ (id<PSConnection>)openWithNSString:(NSString *)host
                             withInt:(jint)port
                             withInt:(jint)timeoutMsec;

+ (id<PSConnection>)openWithNSString:(NSString *)host
                             withInt:(jint)port
                             withInt:(jint)timeoutMsec
                             withInt:(jint)soTimeout;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)arg0
                             withJavaIoOutputStream:(JavaIoOutputStream *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSSocketConnection)

FOUNDATION_EXPORT id<PSConnection> PSSocketConnection_openWithNSString_withInt_(NSString *host, jint port);

FOUNDATION_EXPORT id<PSConnection> PSSocketConnection_openWithNSString_withInt_withInt_(NSString *host, jint port, jint timeoutMsec);

FOUNDATION_EXPORT id<PSConnection> PSSocketConnection_openWithNSString_withInt_withInt_withInt_(NSString *host, jint port, jint timeoutMsec, jint soTimeout);

FOUNDATION_EXPORT void PSSocketConnection_initWithJavaNetSocket_(PSSocketConnection *self, JavaNetSocket *socket);

FOUNDATION_EXPORT PSSocketConnection *new_PSSocketConnection_initWithJavaNetSocket_(JavaNetSocket *socket) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSSocketConnection *create_PSSocketConnection_initWithJavaNetSocket_(JavaNetSocket *socket);

J2OBJC_TYPE_LITERAL_HEADER(PSSocketConnection)

@compatibility_alias ComDevexpertsPipestoneCommonIoSocketSocketConnection PSSocketConnection;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoSocketSocketConnection")
