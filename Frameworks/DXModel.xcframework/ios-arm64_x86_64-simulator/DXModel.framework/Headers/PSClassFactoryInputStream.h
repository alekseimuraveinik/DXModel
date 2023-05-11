
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiCustomIoClassFactoryInputStream")
#ifdef RESTRICT_ComDevexpertsPipestoneApiCustomIoClassFactoryInputStream
#define INCLUDE_ALL_ComDevexpertsPipestoneApiCustomIoClassFactoryInputStream 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneApiCustomIoClassFactoryInputStream 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneApiCustomIoClassFactoryInputStream

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSClassFactoryInputStream_) && (INCLUDE_ALL_ComDevexpertsPipestoneApiCustomIoClassFactoryInputStream || defined(INCLUDE_PSClassFactoryInputStream))
#define PSClassFactoryInputStream_

#define RESTRICT_ComDevexpertsPipestoneCommonIoCustomCustomInputStream 1
#define INCLUDE_PSCustomInputStream 1
#include "PSCustomInputStream.h"

@class JavaIoInputStream;
@class PSCustomClassFactory;
@protocol PSCustomSerializable;

@interface PSClassFactoryInputStream : PSCustomInputStream

#pragma mark Public

- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)inArg
                           withPSCustomClassFactory:(PSCustomClassFactory *)factory;

- (jint)getProtocolVersion;

- (id<PSCustomSerializable>)readCustomSerializable;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSClassFactoryInputStream)

FOUNDATION_EXPORT void PSClassFactoryInputStream_initWithJavaIoInputStream_withPSCustomClassFactory_(PSClassFactoryInputStream *self, JavaIoInputStream *inArg, PSCustomClassFactory *factory);

FOUNDATION_EXPORT PSClassFactoryInputStream *new_PSClassFactoryInputStream_initWithJavaIoInputStream_withPSCustomClassFactory_(JavaIoInputStream *inArg, PSCustomClassFactory *factory) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSClassFactoryInputStream *create_PSClassFactoryInputStream_initWithJavaIoInputStream_withPSCustomClassFactory_(JavaIoInputStream *inArg, PSCustomClassFactory *factory);

J2OBJC_TYPE_LITERAL_HEADER(PSClassFactoryInputStream)

@compatibility_alias ComDevexpertsPipestoneApiCustomIoClassFactoryInputStream PSClassFactoryInputStream;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiCustomIoClassFactoryInputStream")
