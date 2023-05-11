
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoChunkedChunkedConnection")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoChunkedChunkedConnection
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoChunkedChunkedConnection 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoChunkedChunkedConnection 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoChunkedChunkedConnection

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSChunkedConnection_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoChunkedChunkedConnection || defined(INCLUDE_PSChunkedConnection))
#define PSChunkedConnection_

#define RESTRICT_ComDevexpertsPipestoneCommonIoConnectionImpl 1
#define INCLUDE_PSConnectionImpl 1
#include "PSConnectionImpl.h"

@class JavaIoInputStream;
@class JavaIoOutputStream;
@class PSChunkedInputStream;
@class PSChunkedOutputStream;
@protocol PSConnection;

@interface PSChunkedConnection : PSConnectionImpl

#pragma mark Public

- (instancetype __nonnull)initWithPSConnection:(id<PSConnection>)conn;

- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)input
                             withJavaIoOutputStream:(JavaIoOutputStream *)output;

- (PSChunkedInputStream *)getInputStream;

- (PSChunkedOutputStream *)getOutputStream;

@end

J2OBJC_EMPTY_STATIC_INIT(PSChunkedConnection)

FOUNDATION_EXPORT void PSChunkedConnection_initWithJavaIoInputStream_withJavaIoOutputStream_(PSChunkedConnection *self, JavaIoInputStream *input, JavaIoOutputStream *output);

FOUNDATION_EXPORT PSChunkedConnection *new_PSChunkedConnection_initWithJavaIoInputStream_withJavaIoOutputStream_(JavaIoInputStream *input, JavaIoOutputStream *output) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSChunkedConnection *create_PSChunkedConnection_initWithJavaIoInputStream_withJavaIoOutputStream_(JavaIoInputStream *input, JavaIoOutputStream *output);

FOUNDATION_EXPORT void PSChunkedConnection_initWithPSConnection_(PSChunkedConnection *self, id<PSConnection> conn);

FOUNDATION_EXPORT PSChunkedConnection *new_PSChunkedConnection_initWithPSConnection_(id<PSConnection> conn) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSChunkedConnection *create_PSChunkedConnection_initWithPSConnection_(id<PSConnection> conn);

J2OBJC_TYPE_LITERAL_HEADER(PSChunkedConnection)

@compatibility_alias ComDevexpertsPipestoneCommonIoChunkedChunkedConnection PSChunkedConnection;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoChunkedChunkedConnection")
