
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationMathUtils")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiOrderValidationMathUtils
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationMathUtils 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationMathUtils 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiOrderValidationMathUtils

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMathUtils_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationMathUtils || defined(INCLUDE_DXMathUtils))
#define DXMathUtils_

@interface DXMathUtils : NSObject
@property (readonly, class) jdouble EPS NS_SWIFT_NAME(EPS);

+ (jdouble)EPS;

#pragma mark Public

- (instancetype __nonnull)init;

+ (jint)compareWithDouble:(jdouble)a
               withDouble:(jdouble)b
               withDouble:(jdouble)eps;

+ (jboolean)isZeroWithDouble:(jdouble)a;

+ (jdouble)roundDecimalWithDouble:(jdouble)x;

+ (jdouble)roundDownWithDouble:(jdouble)value
                    withDouble:(jdouble)precision;

+ (jdouble)roundToNearestWithDouble:(jdouble)value
                         withDouble:(jdouble)precision;

+ (jdouble)roundUpWithDouble:(jdouble)value
                  withDouble:(jdouble)precision;

+ (jdouble)signumWithDouble:(jdouble)d;

@end

J2OBJC_STATIC_INIT(DXMathUtils)

inline jdouble DXMathUtils_get_EPS(void);
#define DXMathUtils_EPS 5.0E-10
J2OBJC_STATIC_FIELD_CONSTANT(DXMathUtils, EPS, jdouble)

FOUNDATION_EXPORT void DXMathUtils_init(DXMathUtils *self);

FOUNDATION_EXPORT DXMathUtils *new_DXMathUtils_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMathUtils *create_DXMathUtils_init(void);

FOUNDATION_EXPORT jboolean DXMathUtils_isZeroWithDouble_(jdouble a);

FOUNDATION_EXPORT jint DXMathUtils_compareWithDouble_withDouble_withDouble_(jdouble a, jdouble b, jdouble eps);

FOUNDATION_EXPORT jdouble DXMathUtils_roundToNearestWithDouble_withDouble_(jdouble value, jdouble precision);

FOUNDATION_EXPORT jdouble DXMathUtils_roundUpWithDouble_withDouble_(jdouble value, jdouble precision);

FOUNDATION_EXPORT jdouble DXMathUtils_roundDownWithDouble_withDouble_(jdouble value, jdouble precision);

FOUNDATION_EXPORT jdouble DXMathUtils_signumWithDouble_(jdouble d);

FOUNDATION_EXPORT jdouble DXMathUtils_roundDecimalWithDouble_(jdouble x);

J2OBJC_TYPE_LITERAL_HEADER(DXMathUtils)

@compatibility_alias ComDevexpertsMobileDxplatformApiOrderValidationMathUtils DXMathUtils;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderValidationMathUtils")
