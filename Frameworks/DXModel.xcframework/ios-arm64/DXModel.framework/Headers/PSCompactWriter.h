
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCompactCompactWriter")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoCompactCompactWriter
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCompactCompactWriter 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCompactCompactWriter 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoCompactCompactWriter

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSCompactWriter_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCompactCompactWriter || defined(INCLUDE_PSCompactWriter))
#define PSCompactWriter_

@class JavaIoOutputStream;

@interface PSCompactWriter : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

- (void)writeBooleanWithBoolean:(jboolean)v
         withJavaIoOutputStream:(JavaIoOutputStream *)outArg;

- (void)writeByteWithInt:(jint)v
  withJavaIoOutputStream:(JavaIoOutputStream *)outArg;

- (void)writeCharWithChar:(jchar)c
   withJavaIoOutputStream:(JavaIoOutputStream *)outArg;

- (void)writeCompactIntWithInt:(jint)i
        withJavaIoOutputStream:(JavaIoOutputStream *)outArg;

- (void)writeCompactLongWithLong:(jlong)i
          withJavaIoOutputStream:(JavaIoOutputStream *)outArg;

- (void)writeShortWithInt:(jint)v
   withJavaIoOutputStream:(JavaIoOutputStream *)outArg;

- (void)writeStringWithNSString:(NSString *)s
         withJavaIoOutputStream:(JavaIoOutputStream *)outArg;

- (void)writeUtfCharWithChar:(jchar)c
      withJavaIoOutputStream:(JavaIoOutputStream *)outArg;

@end

J2OBJC_EMPTY_STATIC_INIT(PSCompactWriter)

FOUNDATION_EXPORT void PSCompactWriter_init(PSCompactWriter *self);

FOUNDATION_EXPORT PSCompactWriter *new_PSCompactWriter_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSCompactWriter *create_PSCompactWriter_init(void);

J2OBJC_TYPE_LITERAL_HEADER(PSCompactWriter)

@compatibility_alias ComDevexpertsPipestoneCommonIoCompactCompactWriter PSCompactWriter;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCompactCompactWriter")
