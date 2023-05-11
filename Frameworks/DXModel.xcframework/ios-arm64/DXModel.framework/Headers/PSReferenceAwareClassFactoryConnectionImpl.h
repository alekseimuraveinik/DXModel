
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiCustomReferenceAwareClassFactoryConnectionImpl")
#ifdef RESTRICT_ComDevexpertsPipestoneApiCustomReferenceAwareClassFactoryConnectionImpl
#define INCLUDE_ALL_ComDevexpertsPipestoneApiCustomReferenceAwareClassFactoryConnectionImpl 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneApiCustomReferenceAwareClassFactoryConnectionImpl 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneApiCustomReferenceAwareClassFactoryConnectionImpl

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSReferenceAwareClassFactoryConnectionImpl_) && (INCLUDE_ALL_ComDevexpertsPipestoneApiCustomReferenceAwareClassFactoryConnectionImpl || defined(INCLUDE_PSReferenceAwareClassFactoryConnectionImpl))
#define PSReferenceAwareClassFactoryConnectionImpl_

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

@interface PSReferenceAwareClassFactoryConnectionImpl : PSConnectionImpl < PSClassFactoryConnection >

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

J2OBJC_EMPTY_STATIC_INIT(PSReferenceAwareClassFactoryConnectionImpl)

FOUNDATION_EXPORT void PSReferenceAwareClassFactoryConnectionImpl_initWithPSConnection_withPSCustomClassFactory_(PSReferenceAwareClassFactoryConnectionImpl *self, id<PSConnection> connection, PSCustomClassFactory *factory);

FOUNDATION_EXPORT PSReferenceAwareClassFactoryConnectionImpl *new_PSReferenceAwareClassFactoryConnectionImpl_initWithPSConnection_withPSCustomClassFactory_(id<PSConnection> connection, PSCustomClassFactory *factory) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSReferenceAwareClassFactoryConnectionImpl *create_PSReferenceAwareClassFactoryConnectionImpl_initWithPSConnection_withPSCustomClassFactory_(id<PSConnection> connection, PSCustomClassFactory *factory);

J2OBJC_TYPE_LITERAL_HEADER(PSReferenceAwareClassFactoryConnectionImpl)

@compatibility_alias ComDevexpertsPipestoneApiCustomReferenceAwareClassFactoryConnectionImpl PSReferenceAwareClassFactoryConnectionImpl;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiCustomReferenceAwareClassFactoryConnectionImpl")
