
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilSerializationArrayUtils")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonUtilSerializationArrayUtils
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilSerializationArrayUtils 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilSerializationArrayUtils 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonUtilSerializationArrayUtils

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSArrayUtils_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilSerializationArrayUtils || defined(INCLUDE_PSArrayUtils))
#define PSArrayUtils_

@class IOSObjectArray;

@interface PSArrayUtils : NSObject

#pragma mark Public

+ (void)makeReadOnlyWithNSObjectArray:(IOSObjectArray *)array;

@end

J2OBJC_EMPTY_STATIC_INIT(PSArrayUtils)

FOUNDATION_EXPORT void PSArrayUtils_makeReadOnlyWithNSObjectArray_(IOSObjectArray *array);

J2OBJC_TYPE_LITERAL_HEADER(PSArrayUtils)

@compatibility_alias ComDevexpertsPipestoneCommonUtilSerializationArrayUtils PSArrayUtils;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilSerializationArrayUtils")
