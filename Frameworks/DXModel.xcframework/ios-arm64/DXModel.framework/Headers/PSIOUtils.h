
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoUtilIOUtils")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoUtilIOUtils
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoUtilIOUtils 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoUtilIOUtils 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoUtilIOUtils

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSIOUtils_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoUtilIOUtils || defined(INCLUDE_PSIOUtils))
#define PSIOUtils_

@class IOSByteArray;
@class IOSObjectArray;
@class JavaIoInputStream;
@class JavaNetInetAddress;
@protocol JavaIoCloseable;

@interface PSIOUtils : NSObject

#pragma mark Public

+ (void)closeWithJavaIoCloseable:(id<JavaIoCloseable>)closeable;

+ (void)closeWithJavaIoCloseableArray:(IOSObjectArray *)items;

+ (JavaNetInetAddress *)getInetAddressByNameWithNSString:(NSString *)address;

+ (void)readWithJavaIoInputStream:(JavaIoInputStream *)inArg
                    withByteArray:(IOSByteArray *)b
                          withInt:(jint)off
                          withInt:(jint)len;

@end

J2OBJC_EMPTY_STATIC_INIT(PSIOUtils)

FOUNDATION_EXPORT void PSIOUtils_readWithJavaIoInputStream_withByteArray_withInt_withInt_(JavaIoInputStream *inArg, IOSByteArray *b, jint off, jint len);

FOUNDATION_EXPORT JavaNetInetAddress *PSIOUtils_getInetAddressByNameWithNSString_(NSString *address);

FOUNDATION_EXPORT void PSIOUtils_closeWithJavaIoCloseable_(id<JavaIoCloseable> closeable);

FOUNDATION_EXPORT void PSIOUtils_closeWithJavaIoCloseableArray_(IOSObjectArray *items);

J2OBJC_TYPE_LITERAL_HEADER(PSIOUtils)

@compatibility_alias ComDevexpertsPipestoneCommonIoUtilIOUtils PSIOUtils;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoUtilIOUtils")
