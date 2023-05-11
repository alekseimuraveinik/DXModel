
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoHttpHttpAliveConnection")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoHttpHttpAliveConnection
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoHttpHttpAliveConnection 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoHttpHttpAliveConnection 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoHttpHttpAliveConnection

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSHttpAliveConnection_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoHttpHttpAliveConnection || defined(INCLUDE_PSHttpAliveConnection))
#define PSHttpAliveConnection_

@protocol PSConnection;

@interface PSHttpAliveConnection : NSObject

#pragma mark Public

+ (id<PSConnection>)openWithNSString:(NSString *)url;

+ (id<PSConnection>)openWithNSString:(NSString *)url
                             withInt:(jint)connectTimeout;

@end

J2OBJC_EMPTY_STATIC_INIT(PSHttpAliveConnection)

FOUNDATION_EXPORT id<PSConnection> PSHttpAliveConnection_openWithNSString_(NSString *url);

FOUNDATION_EXPORT id<PSConnection> PSHttpAliveConnection_openWithNSString_withInt_(NSString *url, jint connectTimeout);

J2OBJC_TYPE_LITERAL_HEADER(PSHttpAliveConnection)

@compatibility_alias ComDevexpertsPipestoneCommonIoHttpHttpAliveConnection PSHttpAliveConnection;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoHttpHttpAliveConnection")
