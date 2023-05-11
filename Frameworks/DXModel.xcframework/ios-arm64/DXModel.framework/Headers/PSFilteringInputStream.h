
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoFilterFilteringInputStream")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoFilterFilteringInputStream
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoFilterFilteringInputStream 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoFilterFilteringInputStream 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoFilterFilteringInputStream

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSFilteringInputStream_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoFilterFilteringInputStream || defined(INCLUDE_PSFilteringInputStream))
#define PSFilteringInputStream_

#define RESTRICT_JavaIoInputStream 1
#define INCLUDE_JavaIoInputStream 1
#include "java/io/InputStream.h"

@class IOSByteArray;
@class JavaIoIOException;

@interface PSFilteringInputStream : JavaIoInputStream {
 @public
  JavaIoInputStream *in_;
}

#pragma mark Public

- (jint)available;

- (void)close;

- (void)markWithInt:(jint)readlimit;

- (jboolean)markSupported;

- (jint)read;

- (jint)readWithByteArray:(IOSByteArray *)b;

- (jint)readWithByteArray:(IOSByteArray *)b
                  withInt:(jint)off
                  withInt:(jint)len;

- (void)reset;

- (jlong)skipWithLong:(jlong)n;

#pragma mark Protected

- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)inArg;

- (void)handleEndOfStream;

- (JavaIoIOException *)handleExceptionWithJavaIoIOException:(JavaIoIOException *)e;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSFilteringInputStream)

J2OBJC_FIELD_SETTER(PSFilteringInputStream, in_, JavaIoInputStream *)

FOUNDATION_EXPORT void PSFilteringInputStream_initWithJavaIoInputStream_(PSFilteringInputStream *self, JavaIoInputStream *inArg);

FOUNDATION_EXPORT PSFilteringInputStream *new_PSFilteringInputStream_initWithJavaIoInputStream_(JavaIoInputStream *inArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSFilteringInputStream *create_PSFilteringInputStream_initWithJavaIoInputStream_(JavaIoInputStream *inArg);

J2OBJC_TYPE_LITERAL_HEADER(PSFilteringInputStream)

@compatibility_alias ComDevexpertsPipestoneCommonIoFilterFilteringInputStream PSFilteringInputStream;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoFilterFilteringInputStream")
