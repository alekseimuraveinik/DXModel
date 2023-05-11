
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiCustomClassFactoryConnectionImpl")
#ifdef RESTRICT_ComDevexpertsPipestoneApiCustomClassFactoryConnectionImpl
#define INCLUDE_ALL_ComDevexpertsPipestoneApiCustomClassFactoryConnectionImpl 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneApiCustomClassFactoryConnectionImpl 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneApiCustomClassFactoryConnectionImpl

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSClassFactoryConnectionImpl_) && (INCLUDE_ALL_ComDevexpertsPipestoneApiCustomClassFactoryConnectionImpl || defined(INCLUDE_PSClassFactoryConnectionImpl))
#define PSClassFactoryConnectionImpl_

#define RESTRICT_ComDevexpertsPipestoneCommonIoConnectionImpl 1
#define INCLUDE_PSConnectionImpl 1
#include "PSConnectionImpl.h"

#define RESTRICT_ComDevexpertsPipestoneCommonIoClassFactoryConnection 1
#define INCLUDE_PSClassFactoryConnection 1
#include "PSClassFactoryConnection.h"

@class JavaIoInputStream;
@class JavaIoOutputStream;
@class PSCustomClassFactory;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSConnection;

@interface PSClassFactoryConnectionImpl : PSConnectionImpl < PSClassFactoryConnection >

#pragma mark Public

- (instancetype __nonnull)initWithPSConnection:(id<PSConnection>)connection
                      withPSCustomClassFactory:(PSCustomClassFactory *)factory;

- (PSCustomClassFactory *)getClassFactory;

- (PSCustomInputStream *)getInputStream;

- (PSCustomOutputStream *)getOutputStream;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)arg0
                             withJavaIoOutputStream:(JavaIoOutputStream *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSClassFactoryConnectionImpl)

FOUNDATION_EXPORT void PSClassFactoryConnectionImpl_initWithPSConnection_withPSCustomClassFactory_(PSClassFactoryConnectionImpl *self, id<PSConnection> connection, PSCustomClassFactory *factory);

FOUNDATION_EXPORT PSClassFactoryConnectionImpl *new_PSClassFactoryConnectionImpl_initWithPSConnection_withPSCustomClassFactory_(id<PSConnection> connection, PSCustomClassFactory *factory) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSClassFactoryConnectionImpl *create_PSClassFactoryConnectionImpl_initWithPSConnection_withPSCustomClassFactory_(id<PSConnection> connection, PSCustomClassFactory *factory);

J2OBJC_TYPE_LITERAL_HEADER(PSClassFactoryConnectionImpl)

@compatibility_alias ComDevexpertsPipestoneApiCustomClassFactoryConnectionImpl PSClassFactoryConnectionImpl;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiCustomClassFactoryConnectionImpl")
