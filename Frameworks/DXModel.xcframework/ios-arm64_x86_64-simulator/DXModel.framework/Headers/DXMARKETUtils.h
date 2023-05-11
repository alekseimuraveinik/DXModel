
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartUtils")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartUtils
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartUtils 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartUtils 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartUtils

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETUtils_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartUtils || defined(INCLUDE_DXMARKETUtils))
#define DXMARKETUtils_

@interface DXMARKETUtils : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

+ (jint)getDegreeWithDouble:(jdouble)number;

+ (jint)getUnitWeightWithDouble:(jdouble)weight;

+ (jdouble)pow10WithInt:(jint)a;

+ (jdouble)roundStepWithDouble:(jdouble)step;

@end

J2OBJC_STATIC_INIT(DXMARKETUtils)

FOUNDATION_EXPORT void DXMARKETUtils_init(DXMARKETUtils *self);

FOUNDATION_EXPORT DXMARKETUtils *new_DXMARKETUtils_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETUtils *create_DXMARKETUtils_init(void);

FOUNDATION_EXPORT jdouble DXMARKETUtils_pow10WithInt_(jint a);

FOUNDATION_EXPORT jint DXMARKETUtils_getDegreeWithDouble_(jdouble number);

FOUNDATION_EXPORT jint DXMARKETUtils_getUnitWeightWithDouble_(jdouble weight);

FOUNDATION_EXPORT jdouble DXMARKETUtils_roundStepWithDouble_(jdouble step);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETUtils)

@compatibility_alias ComDevexpertsDxmarketClientModelChartUtils DXMARKETUtils;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartUtils")
