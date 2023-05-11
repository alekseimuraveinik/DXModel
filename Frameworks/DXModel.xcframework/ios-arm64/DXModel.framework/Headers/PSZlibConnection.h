
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoZipedZlibConnection")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoZipedZlibConnection
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoZipedZlibConnection 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoZipedZlibConnection 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoZipedZlibConnection

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSZlibConnection_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoZipedZlibConnection || defined(INCLUDE_PSZlibConnection))
#define PSZlibConnection_

#define RESTRICT_ComDevexpertsPipestoneCommonIoConnectionImpl 1
#define INCLUDE_PSConnectionImpl 1
#include "PSConnectionImpl.h"

@class JavaIoInputStream;
@class JavaIoOutputStream;
@protocol PSConnection;

@interface PSZlibConnection : PSConnectionImpl

#pragma mark Package-Private

- (instancetype __nonnull)initWithPSConnection:(id<PSConnection>)conn;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)arg0
                             withJavaIoOutputStream:(JavaIoOutputStream *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(PSZlibConnection)

FOUNDATION_EXPORT void PSZlibConnection_initWithPSConnection_(PSZlibConnection *self, id<PSConnection> conn);

FOUNDATION_EXPORT PSZlibConnection *new_PSZlibConnection_initWithPSConnection_(id<PSConnection> conn) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSZlibConnection *create_PSZlibConnection_initWithPSConnection_(id<PSConnection> conn);

J2OBJC_TYPE_LITERAL_HEADER(PSZlibConnection)

@compatibility_alias ComDevexpertsPipestoneCommonIoZipedZlibConnection PSZlibConnection;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoZipedZlibConnection")
