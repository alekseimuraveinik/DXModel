
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkIoSocketTransport")
#ifdef RESTRICT_ComDevexpertsPipestoneClientNetworkIoSocketTransport
#define INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkIoSocketTransport 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkIoSocketTransport 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneClientNetworkIoSocketTransport

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSSocketTransport_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkIoSocketTransport || defined(INCLUDE_PSSocketTransport))
#define PSSocketTransport_

#define RESTRICT_ComDevexpertsPipestoneClientNetworkIoTransport 1
#define INCLUDE_PSTransport 1
#include "PSTransport.h"

@protocol PSConnection;

@interface PSSocketTransport : NSObject < PSTransport >

#pragma mark Public

- (instancetype __nonnull)initWithNSString:(NSString *)host
                                   withInt:(jint)port;

- (instancetype __nonnull)initWithNSString:(NSString *)host
                                   withInt:(jint)port
                                   withInt:(jint)timeout
                                   withInt:(jint)soTimeout;

- (id<PSConnection>)connect;

- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(PSSocketTransport)

FOUNDATION_EXPORT void PSSocketTransport_initWithNSString_withInt_withInt_withInt_(PSSocketTransport *self, NSString *host, jint port, jint timeout, jint soTimeout);

FOUNDATION_EXPORT PSSocketTransport *new_PSSocketTransport_initWithNSString_withInt_withInt_withInt_(NSString *host, jint port, jint timeout, jint soTimeout) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSSocketTransport *create_PSSocketTransport_initWithNSString_withInt_withInt_withInt_(NSString *host, jint port, jint timeout, jint soTimeout);

FOUNDATION_EXPORT void PSSocketTransport_initWithNSString_withInt_(PSSocketTransport *self, NSString *host, jint port);

FOUNDATION_EXPORT PSSocketTransport *new_PSSocketTransport_initWithNSString_withInt_(NSString *host, jint port) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSSocketTransport *create_PSSocketTransport_initWithNSString_withInt_(NSString *host, jint port);

J2OBJC_TYPE_LITERAL_HEADER(PSSocketTransport)

@compatibility_alias ComDevexpertsPipestoneClientNetworkIoSocketTransport PSSocketTransport;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkIoSocketTransport")
