
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiCustomIoClassFactoryOutputStream")
#ifdef RESTRICT_ComDevexpertsPipestoneApiCustomIoClassFactoryOutputStream
#define INCLUDE_ALL_ComDevexpertsPipestoneApiCustomIoClassFactoryOutputStream 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneApiCustomIoClassFactoryOutputStream 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneApiCustomIoClassFactoryOutputStream

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSClassFactoryOutputStream_) && (INCLUDE_ALL_ComDevexpertsPipestoneApiCustomIoClassFactoryOutputStream || defined(INCLUDE_PSClassFactoryOutputStream))
#define PSClassFactoryOutputStream_

#define RESTRICT_ComDevexpertsPipestoneCommonIoCustomCustomOutputStream 1
#define INCLUDE_PSCustomOutputStream 1
#include "PSCustomOutputStream.h"

@class JavaIoOutputStream;
@class PSCustomClassFactory;
@protocol PSCustomSerializable;

@interface PSClassFactoryOutputStream : PSCustomOutputStream

#pragma mark Public

- (instancetype __nonnull)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg
                            withPSCustomClassFactory:(PSCustomClassFactory *)factory;

- (jint)getProtocolVersion;

- (void)writeCustomSerializableWithPSCustomSerializable:(id<PSCustomSerializable>)cs;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaIoOutputStream:(JavaIoOutputStream *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSClassFactoryOutputStream)

FOUNDATION_EXPORT void PSClassFactoryOutputStream_initWithJavaIoOutputStream_withPSCustomClassFactory_(PSClassFactoryOutputStream *self, JavaIoOutputStream *outArg, PSCustomClassFactory *factory);

FOUNDATION_EXPORT PSClassFactoryOutputStream *new_PSClassFactoryOutputStream_initWithJavaIoOutputStream_withPSCustomClassFactory_(JavaIoOutputStream *outArg, PSCustomClassFactory *factory) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSClassFactoryOutputStream *create_PSClassFactoryOutputStream_initWithJavaIoOutputStream_withPSCustomClassFactory_(JavaIoOutputStream *outArg, PSCustomClassFactory *factory);

J2OBJC_TYPE_LITERAL_HEADER(PSClassFactoryOutputStream)

@compatibility_alias ComDevexpertsPipestoneApiCustomIoClassFactoryOutputStream PSClassFactoryOutputStream;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiCustomIoClassFactoryOutputStream")
