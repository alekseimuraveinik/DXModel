
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEncryptedOutputStream")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoEncryptedEncryptedOutputStream
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEncryptedOutputStream 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEncryptedOutputStream 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoEncryptedEncryptedOutputStream

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSEncryptedOutputStream_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEncryptedOutputStream || defined(INCLUDE_PSEncryptedOutputStream))
#define PSEncryptedOutputStream_

#define RESTRICT_JavaIoFilterOutputStream 1
#define INCLUDE_JavaIoFilterOutputStream 1
#include "java/io/FilterOutputStream.h"

@class IOSByteArray;
@class JavaIoOutputStream;
@protocol PSBufferedBlockCipher;

@interface PSEncryptedOutputStream : JavaIoFilterOutputStream

#pragma mark Public

- (instancetype __nonnull)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg
                           withPSBufferedBlockCipher:(id<PSBufferedBlockCipher>)cipher;

- (void)flush;

- (void)writeWithByteArray:(IOSByteArray *)b
                   withInt:(jint)off
                   withInt:(jint)len;

- (void)writeWithInt:(jint)b;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaIoOutputStream:(JavaIoOutputStream *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSEncryptedOutputStream)

FOUNDATION_EXPORT void PSEncryptedOutputStream_initWithJavaIoOutputStream_withPSBufferedBlockCipher_(PSEncryptedOutputStream *self, JavaIoOutputStream *outArg, id<PSBufferedBlockCipher> cipher);

FOUNDATION_EXPORT PSEncryptedOutputStream *new_PSEncryptedOutputStream_initWithJavaIoOutputStream_withPSBufferedBlockCipher_(JavaIoOutputStream *outArg, id<PSBufferedBlockCipher> cipher) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSEncryptedOutputStream *create_PSEncryptedOutputStream_initWithJavaIoOutputStream_withPSBufferedBlockCipher_(JavaIoOutputStream *outArg, id<PSBufferedBlockCipher> cipher);

J2OBJC_TYPE_LITERAL_HEADER(PSEncryptedOutputStream)

@compatibility_alias ComDevexpertsPipestoneCommonIoEncryptedEncryptedOutputStream PSEncryptedOutputStream;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEncryptedOutputStream")
