
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiCustomIoReferenceAwareClassFactoryOutputStream")
#ifdef RESTRICT_ComDevexpertsPipestoneApiCustomIoReferenceAwareClassFactoryOutputStream
#define INCLUDE_ALL_ComDevexpertsPipestoneApiCustomIoReferenceAwareClassFactoryOutputStream 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneApiCustomIoReferenceAwareClassFactoryOutputStream 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneApiCustomIoReferenceAwareClassFactoryOutputStream

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSReferenceAwareClassFactoryOutputStream_) && (INCLUDE_ALL_ComDevexpertsPipestoneApiCustomIoReferenceAwareClassFactoryOutputStream || defined(INCLUDE_PSReferenceAwareClassFactoryOutputStream))
#define PSReferenceAwareClassFactoryOutputStream_

#define RESTRICT_ComDevexpertsPipestoneCommonIoCustomCustomOutputStream 1
#define INCLUDE_PSCustomOutputStream 1
#include "PSCustomOutputStream.h"

@class JavaIoOutputStream;
@class PSCustomClassFactory;
@protocol PSCustomSerializable;

@interface PSReferenceAwareClassFactoryOutputStream : PSCustomOutputStream

#pragma mark Public

- (instancetype __nonnull)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg
                            withPSCustomClassFactory:(PSCustomClassFactory *)factory;

- (void)flush;

- (jint)getProtocolVersion;

- (void)writeCustomSerializableWithPSCustomSerializable:(id<PSCustomSerializable>)cs;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaIoOutputStream:(JavaIoOutputStream *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSReferenceAwareClassFactoryOutputStream)

FOUNDATION_EXPORT void PSReferenceAwareClassFactoryOutputStream_initWithJavaIoOutputStream_withPSCustomClassFactory_(PSReferenceAwareClassFactoryOutputStream *self, JavaIoOutputStream *outArg, PSCustomClassFactory *factory);

FOUNDATION_EXPORT PSReferenceAwareClassFactoryOutputStream *new_PSReferenceAwareClassFactoryOutputStream_initWithJavaIoOutputStream_withPSCustomClassFactory_(JavaIoOutputStream *outArg, PSCustomClassFactory *factory) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSReferenceAwareClassFactoryOutputStream *create_PSReferenceAwareClassFactoryOutputStream_initWithJavaIoOutputStream_withPSCustomClassFactory_(JavaIoOutputStream *outArg, PSCustomClassFactory *factory);

J2OBJC_TYPE_LITERAL_HEADER(PSReferenceAwareClassFactoryOutputStream)

@compatibility_alias ComDevexpertsPipestoneApiCustomIoReferenceAwareClassFactoryOutputStream PSReferenceAwareClassFactoryOutputStream;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiCustomIoReferenceAwareClassFactoryOutputStream")
