
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilSerializationSerializeUtils")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonUtilSerializationSerializeUtils
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilSerializationSerializeUtils 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilSerializationSerializeUtils 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonUtilSerializationSerializeUtils

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSSerializeUtils_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilSerializationSerializeUtils || defined(INCLUDE_PSSerializeUtils))
#define PSSerializeUtils_

@class IOSClass;
@class IOSIntArray;
@class IOSLongArray;
@class IOSObjectArray;
@class PSCustomInputStream;
@class PSCustomOutputStream;

@interface PSSerializeUtils : NSObject

#pragma mark Public

+ (IOSIntArray *)readIntArrayWithPSCustomInputStream:(PSCustomInputStream *)is;

+ (IOSLongArray *)readLongArrayWithPSCustomInputStream:(PSCustomInputStream *)is;

+ (IOSObjectArray *)readStringArrayWithPSCustomInputStream:(PSCustomInputStream *)is;

+ (IOSObjectArray *)readTOArrayWithPSCustomInputStream:(PSCustomInputStream *)is
                                          withIOSClass:(IOSClass *)clazz;

+ (void)writeArrayWithPSCustomOutputStream:(PSCustomOutputStream *)os
             withPSCustomSerializableArray:(IOSObjectArray *)array;

+ (void)writeArrayWithPSCustomOutputStream:(PSCustomOutputStream *)os
                              withIntArray:(IOSIntArray *)array;

+ (void)writeArrayWithPSCustomOutputStream:(PSCustomOutputStream *)os
                             withLongArray:(IOSLongArray *)array;

+ (void)writeArrayWithPSCustomOutputStream:(PSCustomOutputStream *)os
                         withNSStringArray:(IOSObjectArray *)array;

@end

J2OBJC_EMPTY_STATIC_INIT(PSSerializeUtils)

FOUNDATION_EXPORT void PSSerializeUtils_writeArrayWithPSCustomOutputStream_withLongArray_(PSCustomOutputStream *os, IOSLongArray *array);

FOUNDATION_EXPORT void PSSerializeUtils_writeArrayWithPSCustomOutputStream_withIntArray_(PSCustomOutputStream *os, IOSIntArray *array);

FOUNDATION_EXPORT void PSSerializeUtils_writeArrayWithPSCustomOutputStream_withNSStringArray_(PSCustomOutputStream *os, IOSObjectArray *array);

FOUNDATION_EXPORT void PSSerializeUtils_writeArrayWithPSCustomOutputStream_withPSCustomSerializableArray_(PSCustomOutputStream *os, IOSObjectArray *array);

FOUNDATION_EXPORT IOSLongArray *PSSerializeUtils_readLongArrayWithPSCustomInputStream_(PSCustomInputStream *is);

FOUNDATION_EXPORT IOSIntArray *PSSerializeUtils_readIntArrayWithPSCustomInputStream_(PSCustomInputStream *is);

FOUNDATION_EXPORT IOSObjectArray *PSSerializeUtils_readStringArrayWithPSCustomInputStream_(PSCustomInputStream *is);

FOUNDATION_EXPORT IOSObjectArray *PSSerializeUtils_readTOArrayWithPSCustomInputStream_withIOSClass_(PSCustomInputStream *is, IOSClass *clazz);

J2OBJC_TYPE_LITERAL_HEADER(PSSerializeUtils)

@compatibility_alias ComDevexpertsPipestoneCommonUtilSerializationSerializeUtils PSSerializeUtils;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilSerializationSerializeUtils")
