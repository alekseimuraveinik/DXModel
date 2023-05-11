
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiCustomIoReferenceAwareClassFactoryInputStream")
#ifdef RESTRICT_ComDevexpertsPipestoneApiCustomIoReferenceAwareClassFactoryInputStream
#define INCLUDE_ALL_ComDevexpertsPipestoneApiCustomIoReferenceAwareClassFactoryInputStream 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneApiCustomIoReferenceAwareClassFactoryInputStream 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneApiCustomIoReferenceAwareClassFactoryInputStream

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSReferenceAwareClassFactoryInputStream_) && (INCLUDE_ALL_ComDevexpertsPipestoneApiCustomIoReferenceAwareClassFactoryInputStream || defined(INCLUDE_PSReferenceAwareClassFactoryInputStream))
#define PSReferenceAwareClassFactoryInputStream_

#define RESTRICT_ComDevexpertsPipestoneCommonIoCustomCustomInputStream 1
#define INCLUDE_PSCustomInputStream 1
#include "PSCustomInputStream.h"

@class JavaIoInputStream;
@class PSCustomClassFactory;
@protocol PSCustomSerializable;

@interface PSReferenceAwareClassFactoryInputStream : PSCustomInputStream

#pragma mark Public

- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)inArg
                           withPSCustomClassFactory:(PSCustomClassFactory *)factory;

- (void)cleanup;

- (jint)getProtocolVersion;

- (id<PSCustomSerializable>)readCustomSerializable;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSReferenceAwareClassFactoryInputStream)

FOUNDATION_EXPORT void PSReferenceAwareClassFactoryInputStream_initWithJavaIoInputStream_withPSCustomClassFactory_(PSReferenceAwareClassFactoryInputStream *self, JavaIoInputStream *inArg, PSCustomClassFactory *factory);

FOUNDATION_EXPORT PSReferenceAwareClassFactoryInputStream *new_PSReferenceAwareClassFactoryInputStream_initWithJavaIoInputStream_withPSCustomClassFactory_(JavaIoInputStream *inArg, PSCustomClassFactory *factory) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSReferenceAwareClassFactoryInputStream *create_PSReferenceAwareClassFactoryInputStream_initWithJavaIoInputStream_withPSCustomClassFactory_(JavaIoInputStream *inArg, PSCustomClassFactory *factory);

J2OBJC_TYPE_LITERAL_HEADER(PSReferenceAwareClassFactoryInputStream)

@compatibility_alias ComDevexpertsPipestoneApiCustomIoReferenceAwareClassFactoryInputStream PSReferenceAwareClassFactoryInputStream;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiCustomIoReferenceAwareClassFactoryInputStream")
