
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelUtilArrayUtils")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelUtilArrayUtils
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelUtilArrayUtils 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelUtilArrayUtils 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelUtilArrayUtils

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETArrayUtils_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelUtilArrayUtils || defined(INCLUDE_DXMARKETArrayUtils))
#define DXMARKETArrayUtils_

@class IOSCharArray;

@interface DXMARKETArrayUtils : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

+ (IOSCharArray *)appendWithCharArray:(IOSCharArray *)first
                        withCharArray:(IOSCharArray *)second;

+ (IOSCharArray *)getPartOfWithCharArray:(IOSCharArray *)array
                                 withInt:(jint)from
                                 withInt:(jint)to;

+ (IOSCharArray *)reverseWithCharArray:(IOSCharArray *)array;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETArrayUtils)

FOUNDATION_EXPORT void DXMARKETArrayUtils_init(DXMARKETArrayUtils *self);

FOUNDATION_EXPORT DXMARKETArrayUtils *new_DXMARKETArrayUtils_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETArrayUtils *create_DXMARKETArrayUtils_init(void);

FOUNDATION_EXPORT IOSCharArray *DXMARKETArrayUtils_reverseWithCharArray_(IOSCharArray *array);

FOUNDATION_EXPORT IOSCharArray *DXMARKETArrayUtils_appendWithCharArray_withCharArray_(IOSCharArray *first, IOSCharArray *second);

FOUNDATION_EXPORT IOSCharArray *DXMARKETArrayUtils_getPartOfWithCharArray_withInt_withInt_(IOSCharArray *array, jint from, jint to);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETArrayUtils)

@compatibility_alias ComDevexpertsDxmarketClientModelUtilArrayUtils DXMARKETArrayUtils;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelUtilArrayUtils")
