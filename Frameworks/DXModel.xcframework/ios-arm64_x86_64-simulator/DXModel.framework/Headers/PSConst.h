
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilConst")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonUtilConst
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilConst 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilConst 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonUtilConst

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSConst_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilConst || defined(INCLUDE_PSConst))
#define PSConst_

@class IOSBooleanArray;
@class IOSIntArray;
@class IOSLongArray;
@class IOSObjectArray;

@protocol PSConst < JavaObject >

@end

@interface PSConst : NSObject
@property (readonly, class, strong) IOSIntArray *EMPTY_INT_ARRAY NS_SWIFT_NAME(EMPTY_INT_ARRAY);
@property (readonly, class, strong) IOSLongArray *EMPTY_LONG_ARRAY NS_SWIFT_NAME(EMPTY_LONG_ARRAY);
@property (readonly, class, strong) IOSBooleanArray *EMPTY_BOOL_ARRAY NS_SWIFT_NAME(EMPTY_BOOL_ARRAY);
@property (readonly, class, strong) IOSObjectArray *EMPTY_STRING_ARRAY NS_SWIFT_NAME(EMPTY_STRING_ARRAY);

+ (IOSIntArray *)EMPTY_INT_ARRAY;

+ (IOSLongArray *)EMPTY_LONG_ARRAY;

+ (IOSBooleanArray *)EMPTY_BOOL_ARRAY;

+ (IOSObjectArray *)EMPTY_STRING_ARRAY;

@end

J2OBJC_STATIC_INIT(PSConst)

inline IOSIntArray *PSConst_get_EMPTY_INT_ARRAY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSIntArray *PSConst_EMPTY_INT_ARRAY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(PSConst, EMPTY_INT_ARRAY, IOSIntArray *)

inline IOSLongArray *PSConst_get_EMPTY_LONG_ARRAY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSLongArray *PSConst_EMPTY_LONG_ARRAY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(PSConst, EMPTY_LONG_ARRAY, IOSLongArray *)

inline IOSBooleanArray *PSConst_get_EMPTY_BOOL_ARRAY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSBooleanArray *PSConst_EMPTY_BOOL_ARRAY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(PSConst, EMPTY_BOOL_ARRAY, IOSBooleanArray *)

inline IOSObjectArray *PSConst_get_EMPTY_STRING_ARRAY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSObjectArray *PSConst_EMPTY_STRING_ARRAY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(PSConst, EMPTY_STRING_ARRAY, IOSObjectArray *)

J2OBJC_TYPE_LITERAL_HEADER(PSConst)

#define ComDevexpertsPipestoneCommonUtilConst PSConst

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilConst")
