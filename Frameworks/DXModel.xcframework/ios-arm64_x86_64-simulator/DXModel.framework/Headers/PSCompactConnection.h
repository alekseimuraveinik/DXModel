
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCompactCompactConnection")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoCompactCompactConnection
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCompactCompactConnection 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCompactCompactConnection 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoCompactCompactConnection

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSCompactConnection_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCompactCompactConnection || defined(INCLUDE_PSCompactConnection))
#define PSCompactConnection_

#define RESTRICT_ComDevexpertsPipestoneCommonIoConnectionImpl 1
#define INCLUDE_PSConnectionImpl 1
#include "PSConnectionImpl.h"

@class JavaIoInputStream;
@class JavaIoOutputStream;
@class PSCompactInputStream;
@class PSCompactOutputStream;
@protocol PSConnection;

@interface PSCompactConnection : PSConnectionImpl

#pragma mark Public

- (instancetype __nonnull)initWithPSConnection:(id<PSConnection>)connection;

- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)input
                             withJavaIoOutputStream:(JavaIoOutputStream *)output;

- (PSCompactInputStream *)getInputStream;

- (PSCompactOutputStream *)getOutputStream;

@end

J2OBJC_EMPTY_STATIC_INIT(PSCompactConnection)

FOUNDATION_EXPORT void PSCompactConnection_initWithJavaIoInputStream_withJavaIoOutputStream_(PSCompactConnection *self, JavaIoInputStream *input, JavaIoOutputStream *output);

FOUNDATION_EXPORT PSCompactConnection *new_PSCompactConnection_initWithJavaIoInputStream_withJavaIoOutputStream_(JavaIoInputStream *input, JavaIoOutputStream *output) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSCompactConnection *create_PSCompactConnection_initWithJavaIoInputStream_withJavaIoOutputStream_(JavaIoInputStream *input, JavaIoOutputStream *output);

FOUNDATION_EXPORT void PSCompactConnection_initWithPSConnection_(PSCompactConnection *self, id<PSConnection> connection);

FOUNDATION_EXPORT PSCompactConnection *new_PSCompactConnection_initWithPSConnection_(id<PSConnection> connection) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSCompactConnection *create_PSCompactConnection_initWithPSConnection_(id<PSConnection> connection);

J2OBJC_TYPE_LITERAL_HEADER(PSCompactConnection)

@compatibility_alias ComDevexpertsPipestoneCommonIoCompactCompactConnection PSCompactConnection;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCompactCompactConnection")
