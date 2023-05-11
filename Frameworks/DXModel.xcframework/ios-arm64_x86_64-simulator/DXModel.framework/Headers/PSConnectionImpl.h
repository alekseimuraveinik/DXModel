
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoConnectionImpl")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoConnectionImpl
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoConnectionImpl 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoConnectionImpl 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoConnectionImpl

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSConnectionImpl_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoConnectionImpl || defined(INCLUDE_PSConnectionImpl))
#define PSConnectionImpl_

#define RESTRICT_ComDevexpertsPipestoneCommonIoConnection 1
#define INCLUDE_PSConnection 1
#include "PSConnection.h"

@class JavaIoInputStream;
@class JavaIoOutputStream;

@interface PSConnectionImpl : NSObject < PSConnection >

#pragma mark Public

- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)input
                             withJavaIoOutputStream:(JavaIoOutputStream *)output;

- (void)close;

- (JavaIoInputStream *)getInputStream;

- (JavaIoOutputStream *)getOutputStream;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSConnectionImpl)

FOUNDATION_EXPORT void PSConnectionImpl_initWithJavaIoInputStream_withJavaIoOutputStream_(PSConnectionImpl *self, JavaIoInputStream *input, JavaIoOutputStream *output);

FOUNDATION_EXPORT PSConnectionImpl *new_PSConnectionImpl_initWithJavaIoInputStream_withJavaIoOutputStream_(JavaIoInputStream *input, JavaIoOutputStream *output) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSConnectionImpl *create_PSConnectionImpl_initWithJavaIoInputStream_withJavaIoOutputStream_(JavaIoInputStream *input, JavaIoOutputStream *output);

J2OBJC_TYPE_LITERAL_HEADER(PSConnectionImpl)

@compatibility_alias ComDevexpertsPipestoneCommonIoConnectionImpl PSConnectionImpl;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoConnectionImpl")
