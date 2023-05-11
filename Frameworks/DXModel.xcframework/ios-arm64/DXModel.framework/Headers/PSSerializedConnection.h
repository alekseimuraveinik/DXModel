
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCustomSerializedConnection")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoCustomSerializedConnection
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCustomSerializedConnection 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCustomSerializedConnection 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoCustomSerializedConnection

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSSerializedConnection_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCustomSerializedConnection || defined(INCLUDE_PSSerializedConnection))
#define PSSerializedConnection_

#define RESTRICT_JavaIoCloseable 1
#define INCLUDE_JavaIoCloseable 1
#include "java/io/Closeable.h"

@class PSChunkedConnection;
@class PSCustomClassFactory;
@protocol PSClassFactoryConnection;
@protocol PSCustomSerializable;

@interface PSSerializedConnection : NSObject < JavaIoCloseable >

#pragma mark Public

- (instancetype __nonnull)initWithPSClassFactoryConnection:(id<PSClassFactoryConnection>)custom
                                   withPSChunkedConnection:(PSChunkedConnection *)chunked;

- (void)close;

- (PSCustomClassFactory *)getClassFactory;

- (id<PSCustomSerializable>)receive;

- (id<PSCustomSerializable>)receiveUnblocking;

- (void)sendWithPSCustomSerializable:(id<PSCustomSerializable>)packet;

- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSSerializedConnection)

FOUNDATION_EXPORT void PSSerializedConnection_initWithPSClassFactoryConnection_withPSChunkedConnection_(PSSerializedConnection *self, id<PSClassFactoryConnection> custom, PSChunkedConnection *chunked);

FOUNDATION_EXPORT PSSerializedConnection *new_PSSerializedConnection_initWithPSClassFactoryConnection_withPSChunkedConnection_(id<PSClassFactoryConnection> custom, PSChunkedConnection *chunked) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSSerializedConnection *create_PSSerializedConnection_initWithPSClassFactoryConnection_withPSChunkedConnection_(id<PSClassFactoryConnection> custom, PSChunkedConnection *chunked);

J2OBJC_TYPE_LITERAL_HEADER(PSSerializedConnection)

@compatibility_alias ComDevexpertsPipestoneCommonIoCustomSerializedConnection PSSerializedConnection;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCustomSerializedConnection")
