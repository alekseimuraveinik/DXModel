
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonApiDecimal")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonApiDecimal
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonApiDecimal 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonApiDecimal 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonApiDecimal

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSDecimal_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonApiDecimal || defined(INCLUDE_PSDecimal))
#define PSDecimal_

#define RESTRICT_JavaLangComparable 1
#define INCLUDE_JavaLangComparable 1
#include "java/lang/Comparable.h"

@class IOSLongArray;

@interface PSDecimal : NSNumber < JavaLangComparable > {
 @public
  jlong decimal_;
}
@property (readonly, class) jlong NaN NS_SWIFT_NAME(NaN);
@property (readonly, class) jlong POSITIVE_INFINITY NS_SWIFT_NAME(POSITIVE_INFINITY);
@property (readonly, class) jlong NEGATIVE_INFINITY NS_SWIFT_NAME(NEGATIVE_INFINITY);
@property (readonly, class) jlong ZERO NS_SWIFT_NAME(ZERO);
@property (readonly, class) jint MAX_PRECISION NS_SWIFT_NAME(MAX_PRECISION);
@property (readonly, copy, class) NSString *NAN_STRING NS_SWIFT_NAME(NAN_STRING);
@property (readonly, copy, class) NSString *POSITIVE_INFINITY_STRING NS_SWIFT_NAME(POSITIVE_INFINITY_STRING);
@property (readonly, copy, class) NSString *NEGATIVE_INFINITY_STRING NS_SWIFT_NAME(NEGATIVE_INFINITY_STRING);
@property (readonly, copy, class) NSString *INVALID_DECIMAL NS_SWIFT_NAME(INVALID_DECIMAL);

+ (jlong)NaN;

+ (jlong)POSITIVE_INFINITY;

+ (jlong)NEGATIVE_INFINITY;

+ (jlong)ZERO;

+ (jint)MAX_PRECISION;

+ (NSString *)NAN_STRING;

+ (NSString *)POSITIVE_INFINITY_STRING;

+ (NSString *)NEGATIVE_INFINITY_STRING;

+ (NSString *)INVALID_DECIMAL;

#pragma mark Public

- (instancetype __nonnull)initWithLong:(jlong)decimal;

- (instancetype __nonnull)initWithNSString:(NSString *)s;

+ (jlong)absWithLong:(jlong)decimal;

- (jbyte)charValue;

+ (jint)compareWithLong:(jlong)a
               withLong:(jlong)b;

- (jint)compareToWithId:(PSDecimal *)obj;

+ (jlong)composeWithDouble:(jdouble)value;

+ (jlong)composeWithDouble:(jdouble)value
                   withInt:(jint)minPrecision
                   withInt:(jint)maxPrecision;

- (jdouble)doubleValue;

- (jboolean)isEqual:(id)obj;

- (jfloat)floatValue;

+ (jint)getPrecisionWithLong:(jlong)value;

- (NSUInteger)hash;

- (jint)intValue;

+ (jboolean)isInfiniteWithLong:(jlong)decimal;

+ (jboolean)isNaNWithLong:(jlong)decimal;

- (jlong)longLongValue;

+ (jlong)negWithLong:(jlong)decimal;

+ (jlong)parseWithNSString:(NSString *)s;

- (jshort)shortValue;

+ (jint)signWithLong:(jlong)decimal;

+ (jdouble)toDoubleWithLong:(jlong)decimal;

- (NSString *)description;

+ (NSString *)toStringWithLong:(jlong)decimal;

+ (NSString *)toStringWithLongArray:(IOSLongArray *)array;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(PSDecimal)

inline jlong PSDecimal_get_NaN(void);
#define PSDecimal_NaN 0LL
J2OBJC_STATIC_FIELD_CONSTANT(PSDecimal, NaN, jlong)

inline jlong PSDecimal_get_POSITIVE_INFINITY(void);
#define PSDecimal_POSITIVE_INFINITY 32LL
J2OBJC_STATIC_FIELD_CONSTANT(PSDecimal, POSITIVE_INFINITY, jlong)

inline jlong PSDecimal_get_NEGATIVE_INFINITY(void);
#define PSDecimal_NEGATIVE_INFINITY -32LL
J2OBJC_STATIC_FIELD_CONSTANT(PSDecimal, NEGATIVE_INFINITY, jlong)

inline jlong PSDecimal_get_ZERO(void);
#define PSDecimal_ZERO 1LL
J2OBJC_STATIC_FIELD_CONSTANT(PSDecimal, ZERO, jlong)

inline jint PSDecimal_get_MAX_PRECISION(void);
#define PSDecimal_MAX_PRECISION 8
J2OBJC_STATIC_FIELD_CONSTANT(PSDecimal, MAX_PRECISION, jint)

inline NSString *PSDecimal_get_NAN_STRING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *PSDecimal_NAN_STRING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(PSDecimal, NAN_STRING, NSString *)

inline NSString *PSDecimal_get_POSITIVE_INFINITY_STRING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *PSDecimal_POSITIVE_INFINITY_STRING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(PSDecimal, POSITIVE_INFINITY_STRING, NSString *)

inline NSString *PSDecimal_get_NEGATIVE_INFINITY_STRING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *PSDecimal_NEGATIVE_INFINITY_STRING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(PSDecimal, NEGATIVE_INFINITY_STRING, NSString *)

inline NSString *PSDecimal_get_INVALID_DECIMAL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *PSDecimal_INVALID_DECIMAL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(PSDecimal, INVALID_DECIMAL, NSString *)

FOUNDATION_EXPORT jboolean PSDecimal_isNaNWithLong_(jlong decimal);

FOUNDATION_EXPORT jboolean PSDecimal_isInfiniteWithLong_(jlong decimal);

FOUNDATION_EXPORT jint PSDecimal_signWithLong_(jlong decimal);

FOUNDATION_EXPORT jlong PSDecimal_negWithLong_(jlong decimal);

FOUNDATION_EXPORT jlong PSDecimal_absWithLong_(jlong decimal);

FOUNDATION_EXPORT jint PSDecimal_getPrecisionWithLong_(jlong value);

FOUNDATION_EXPORT jdouble PSDecimal_toDoubleWithLong_(jlong decimal);

FOUNDATION_EXPORT jlong PSDecimal_composeWithDouble_(jdouble value);

FOUNDATION_EXPORT jlong PSDecimal_composeWithDouble_withInt_withInt_(jdouble value, jint minPrecision, jint maxPrecision);

FOUNDATION_EXPORT NSString *PSDecimal_toStringWithLong_(jlong decimal);

FOUNDATION_EXPORT NSString *PSDecimal_toStringWithLongArray_(IOSLongArray *array);

FOUNDATION_EXPORT jint PSDecimal_compareWithLong_withLong_(jlong a, jlong b);

FOUNDATION_EXPORT jlong PSDecimal_parseWithNSString_(NSString *s);

FOUNDATION_EXPORT void PSDecimal_initWithLong_(PSDecimal *self, jlong decimal);

FOUNDATION_EXPORT PSDecimal *new_PSDecimal_initWithLong_(jlong decimal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSDecimal *create_PSDecimal_initWithLong_(jlong decimal);

FOUNDATION_EXPORT void PSDecimal_initWithNSString_(PSDecimal *self, NSString *s);

FOUNDATION_EXPORT PSDecimal *new_PSDecimal_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSDecimal *create_PSDecimal_initWithNSString_(NSString *s);

J2OBJC_TYPE_LITERAL_HEADER(PSDecimal)

@compatibility_alias ComDevexpertsPipestoneCommonApiDecimal PSDecimal;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonApiDecimal")
