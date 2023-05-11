
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkIoSSLSocketTransport")
#ifdef RESTRICT_ComDevexpertsPipestoneClientNetworkIoSSLSocketTransport
#define INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkIoSSLSocketTransport 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkIoSSLSocketTransport 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneClientNetworkIoSSLSocketTransport

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSSSLSocketTransport_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkIoSSLSocketTransport || defined(INCLUDE_PSSSLSocketTransport))
#define PSSSLSocketTransport_

#define RESTRICT_ComDevexpertsPipestoneClientNetworkIoTransport 1
#define INCLUDE_PSTransport 1
#include "PSTransport.h"

@class JavaxNetSslSSLContext;
@protocol JavaxNetSslHostnameVerifier;
@protocol PSConnection;

@interface PSSSLSocketTransport : NSObject < PSTransport >

#pragma mark Public

- (instancetype __nonnull)initWithJavaxNetSslSSLContext:(JavaxNetSslSSLContext *)context
                        withJavaxNetSslHostnameVerifier:(id<JavaxNetSslHostnameVerifier>)verifier
                                           withNSString:(NSString *)host
                                                withInt:(jint)port
                                                withInt:(jint)timeout;

- (instancetype __nonnull)initWithJavaxNetSslSSLContext:(JavaxNetSslSSLContext *)context
                                           withNSString:(NSString *)host
                                                withInt:(jint)port
                                                withInt:(jint)timeout;

- (id<PSConnection>)connect;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSSSLSocketTransport)

FOUNDATION_EXPORT void PSSSLSocketTransport_initWithJavaxNetSslSSLContext_withNSString_withInt_withInt_(PSSSLSocketTransport *self, JavaxNetSslSSLContext *context, NSString *host, jint port, jint timeout);

FOUNDATION_EXPORT PSSSLSocketTransport *new_PSSSLSocketTransport_initWithJavaxNetSslSSLContext_withNSString_withInt_withInt_(JavaxNetSslSSLContext *context, NSString *host, jint port, jint timeout) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSSSLSocketTransport *create_PSSSLSocketTransport_initWithJavaxNetSslSSLContext_withNSString_withInt_withInt_(JavaxNetSslSSLContext *context, NSString *host, jint port, jint timeout);

FOUNDATION_EXPORT void PSSSLSocketTransport_initWithJavaxNetSslSSLContext_withJavaxNetSslHostnameVerifier_withNSString_withInt_withInt_(PSSSLSocketTransport *self, JavaxNetSslSSLContext *context, id<JavaxNetSslHostnameVerifier> verifier, NSString *host, jint port, jint timeout);

FOUNDATION_EXPORT PSSSLSocketTransport *new_PSSSLSocketTransport_initWithJavaxNetSslSSLContext_withJavaxNetSslHostnameVerifier_withNSString_withInt_withInt_(JavaxNetSslSSLContext *context, id<JavaxNetSslHostnameVerifier> verifier, NSString *host, jint port, jint timeout) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSSSLSocketTransport *create_PSSSLSocketTransport_initWithJavaxNetSslSSLContext_withJavaxNetSslHostnameVerifier_withNSString_withInt_withInt_(JavaxNetSslSSLContext *context, id<JavaxNetSslHostnameVerifier> verifier, NSString *host, jint port, jint timeout);

J2OBJC_TYPE_LITERAL_HEADER(PSSSLSocketTransport)

@compatibility_alias ComDevexpertsPipestoneClientNetworkIoSSLSocketTransport PSSSLSocketTransport;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkIoSSLSocketTransport")
