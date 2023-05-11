
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEncryptedInputStream")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoEncryptedEncryptedInputStream
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEncryptedInputStream 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEncryptedInputStream 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoEncryptedEncryptedInputStream

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSEncryptedInputStream_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEncryptedInputStream || defined(INCLUDE_PSEncryptedInputStream))
#define PSEncryptedInputStream_

#define RESTRICT_JavaIoFilterInputStream 1
#define INCLUDE_JavaIoFilterInputStream 1
#include "java/io/FilterInputStream.h"

@class IOSByteArray;
@class JavaIoInputStream;
@protocol PSBufferedBlockCipher;

@interface PSEncryptedInputStream : JavaIoFilterInputStream

#pragma mark Public

- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)inArg
                          withPSBufferedBlockCipher:(id<PSBufferedBlockCipher>)cipher;

- (jint)available;

- (jint)read;

- (jint)readWithByteArray:(IOSByteArray *)b
                  withInt:(jint)off
                  withInt:(jint)len;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSEncryptedInputStream)

FOUNDATION_EXPORT void PSEncryptedInputStream_initWithJavaIoInputStream_withPSBufferedBlockCipher_(PSEncryptedInputStream *self, JavaIoInputStream *inArg, id<PSBufferedBlockCipher> cipher);

FOUNDATION_EXPORT PSEncryptedInputStream *new_PSEncryptedInputStream_initWithJavaIoInputStream_withPSBufferedBlockCipher_(JavaIoInputStream *inArg, id<PSBufferedBlockCipher> cipher) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSEncryptedInputStream *create_PSEncryptedInputStream_initWithJavaIoInputStream_withPSBufferedBlockCipher_(JavaIoInputStream *inArg, id<PSBufferedBlockCipher> cipher);

J2OBJC_TYPE_LITERAL_HEADER(PSEncryptedInputStream)

@compatibility_alias ComDevexpertsPipestoneCommonIoEncryptedEncryptedInputStream PSEncryptedInputStream;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEncryptedInputStream")
