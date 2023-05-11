
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoHttpHttpConnection")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoHttpHttpConnection
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoHttpHttpConnection 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoHttpHttpConnection 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoHttpHttpConnection

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSHttpConnection_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoHttpHttpConnection || defined(INCLUDE_PSHttpConnection))
#define PSHttpConnection_

#define RESTRICT_ComDevexpertsPipestoneCommonIoConnection 1
#define INCLUDE_PSConnection 1
#include "PSConnection.h"

@class JavaIoInputStream;
@class JavaIoOutputStream;

@interface PSHttpConnection : NSObject < PSConnection >

#pragma mark Public

- (void)close;

+ (PSHttpConnection *)getWithNSString:(NSString *)url
                              withInt:(jint)connectTimeout;

- (JavaIoInputStream *)getInputStream;

- (JavaIoOutputStream *)getOutputStream;

+ (PSHttpConnection *)postWithNSString:(NSString *)url
                               withInt:(jint)connectTimeout;

- (void)setHeaderWithNSString:(NSString *)name
                 withNSString:(NSString *)value;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSHttpConnection)

FOUNDATION_EXPORT PSHttpConnection *PSHttpConnection_postWithNSString_withInt_(NSString *url, jint connectTimeout);

FOUNDATION_EXPORT PSHttpConnection *PSHttpConnection_getWithNSString_withInt_(NSString *url, jint connectTimeout);

J2OBJC_TYPE_LITERAL_HEADER(PSHttpConnection)

@compatibility_alias ComDevexpertsPipestoneCommonIoHttpHttpConnection PSHttpConnection;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoHttpHttpConnection")
