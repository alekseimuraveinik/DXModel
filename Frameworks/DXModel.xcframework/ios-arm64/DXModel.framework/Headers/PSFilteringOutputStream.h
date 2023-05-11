
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoFilterFilteringOutputStream")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoFilterFilteringOutputStream
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoFilterFilteringOutputStream 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoFilterFilteringOutputStream 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoFilterFilteringOutputStream

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSFilteringOutputStream_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoFilterFilteringOutputStream || defined(INCLUDE_PSFilteringOutputStream))
#define PSFilteringOutputStream_

#define RESTRICT_JavaIoOutputStream 1
#define INCLUDE_JavaIoOutputStream 1
#include "java/io/OutputStream.h"

@class IOSByteArray;
@class JavaIoIOException;

@interface PSFilteringOutputStream : JavaIoOutputStream {
 @public
  JavaIoOutputStream *out_;
}

#pragma mark Public

- (void)close;

- (void)flush;

- (void)writeWithByteArray:(IOSByteArray *)b;

- (void)writeWithByteArray:(IOSByteArray *)b
                   withInt:(jint)off
                   withInt:(jint)len;

- (void)writeWithInt:(jint)b;

#pragma mark Protected

- (instancetype __nonnull)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg;

- (JavaIoIOException *)handleExceptionWithJavaIoIOException:(JavaIoIOException *)e;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSFilteringOutputStream)

J2OBJC_FIELD_SETTER(PSFilteringOutputStream, out_, JavaIoOutputStream *)

FOUNDATION_EXPORT void PSFilteringOutputStream_initWithJavaIoOutputStream_(PSFilteringOutputStream *self, JavaIoOutputStream *outArg);

FOUNDATION_EXPORT PSFilteringOutputStream *new_PSFilteringOutputStream_initWithJavaIoOutputStream_(JavaIoOutputStream *outArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSFilteringOutputStream *create_PSFilteringOutputStream_initWithJavaIoOutputStream_(JavaIoOutputStream *outArg);

J2OBJC_TYPE_LITERAL_HEADER(PSFilteringOutputStream)

@compatibility_alias ComDevexpertsPipestoneCommonIoFilterFilteringOutputStream PSFilteringOutputStream;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoFilterFilteringOutputStream")
