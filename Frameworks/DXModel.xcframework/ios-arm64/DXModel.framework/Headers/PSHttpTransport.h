
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkIoHttpTransport")
#ifdef RESTRICT_ComDevexpertsPipestoneClientNetworkIoHttpTransport
#define INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkIoHttpTransport 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkIoHttpTransport 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneClientNetworkIoHttpTransport

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSHttpTransport_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkIoHttpTransport || defined(INCLUDE_PSHttpTransport))
#define PSHttpTransport_

#define RESTRICT_ComDevexpertsPipestoneClientNetworkIoTransport 1
#define INCLUDE_PSTransport 1
#include "PSTransport.h"

@protocol PSConnection;

@interface PSHttpTransport : NSObject < PSTransport >

#pragma mark Public

- (instancetype __nonnull)initWithNSString:(NSString *)url;

- (instancetype __nonnull)initWithNSString:(NSString *)url
                                   withInt:(jint)timeout;

- (id<PSConnection>)connect;

- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(PSHttpTransport)

FOUNDATION_EXPORT void PSHttpTransport_initWithNSString_withInt_(PSHttpTransport *self, NSString *url, jint timeout);

FOUNDATION_EXPORT PSHttpTransport *new_PSHttpTransport_initWithNSString_withInt_(NSString *url, jint timeout) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSHttpTransport *create_PSHttpTransport_initWithNSString_withInt_(NSString *url, jint timeout);

FOUNDATION_EXPORT void PSHttpTransport_initWithNSString_(PSHttpTransport *self, NSString *url);

FOUNDATION_EXPORT PSHttpTransport *new_PSHttpTransport_initWithNSString_(NSString *url) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSHttpTransport *create_PSHttpTransport_initWithNSString_(NSString *url);

J2OBJC_TYPE_LITERAL_HEADER(PSHttpTransport)

@compatibility_alias ComDevexpertsPipestoneClientNetworkIoHttpTransport PSHttpTransport;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkIoHttpTransport")
