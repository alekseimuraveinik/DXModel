
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientUtilPriceUtils")
#ifdef RESTRICT_ComDevexpertsDxmarketClientUtilPriceUtils
#define INCLUDE_ALL_ComDevexpertsDxmarketClientUtilPriceUtils 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientUtilPriceUtils 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientUtilPriceUtils

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETPriceUtils_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientUtilPriceUtils || defined(INCLUDE_DXMARKETPriceUtils))
#define DXMARKETPriceUtils_

@class IOSObjectArray;

@interface DXMARKETPriceUtils : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

+ (IOSObjectArray *)splitWithLong:(jlong)price
                          withInt:(jint)pipSize;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETPriceUtils)

FOUNDATION_EXPORT void DXMARKETPriceUtils_init(DXMARKETPriceUtils *self);

FOUNDATION_EXPORT DXMARKETPriceUtils *new_DXMARKETPriceUtils_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETPriceUtils *create_DXMARKETPriceUtils_init(void);

FOUNDATION_EXPORT IOSObjectArray *DXMARKETPriceUtils_splitWithLong_withInt_(jlong price, jint pipSize);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETPriceUtils)

@compatibility_alias ComDevexpertsDxmarketClientUtilPriceUtils DXMARKETPriceUtils;

#endif

#if !defined (DXMARKETPriceUtils_OffsetUtils_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientUtilPriceUtils || defined(INCLUDE_DXMARKETPriceUtils_OffsetUtils))
#define DXMARKETPriceUtils_OffsetUtils_

@class DXInstrumentTO;

@interface DXMARKETPriceUtils_OffsetUtils : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

+ (jlong)offsetAsPipsWithDouble:(jdouble)offsetValue
             withDXInstrumentTO:(DXInstrumentTO *)instrumentTO;

+ (jlong)offsetAsPipsWithDouble:(jdouble)offsetValue
                        withInt:(jint)pipSize
                        withInt:(jint)instrumentPrecision;

+ (jlong)offsetAsPipsWithLong:(jlong)offsetValue
           withDXInstrumentTO:(DXInstrumentTO *)instrumentTO;

+ (jlong)offsetAsPipsWithLong:(jlong)offsetValue
                      withInt:(jint)pipSize
                      withInt:(jint)instrumentPrecision;

+ (jlong)pipsToOffsetWithDouble:(jdouble)offsetValue
                        withInt:(jint)pipSize
                        withInt:(jint)precision;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETPriceUtils_OffsetUtils)

FOUNDATION_EXPORT void DXMARKETPriceUtils_OffsetUtils_init(DXMARKETPriceUtils_OffsetUtils *self);

FOUNDATION_EXPORT DXMARKETPriceUtils_OffsetUtils *new_DXMARKETPriceUtils_OffsetUtils_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETPriceUtils_OffsetUtils *create_DXMARKETPriceUtils_OffsetUtils_init(void);

FOUNDATION_EXPORT jlong DXMARKETPriceUtils_OffsetUtils_pipsToOffsetWithDouble_withInt_withInt_(jdouble offsetValue, jint pipSize, jint precision);

FOUNDATION_EXPORT jlong DXMARKETPriceUtils_OffsetUtils_offsetAsPipsWithDouble_withInt_withInt_(jdouble offsetValue, jint pipSize, jint instrumentPrecision);

FOUNDATION_EXPORT jlong DXMARKETPriceUtils_OffsetUtils_offsetAsPipsWithDouble_withDXInstrumentTO_(jdouble offsetValue, DXInstrumentTO *instrumentTO);

FOUNDATION_EXPORT jlong DXMARKETPriceUtils_OffsetUtils_offsetAsPipsWithLong_withInt_withInt_(jlong offsetValue, jint pipSize, jint instrumentPrecision);

FOUNDATION_EXPORT jlong DXMARKETPriceUtils_OffsetUtils_offsetAsPipsWithLong_withDXInstrumentTO_(jlong offsetValue, DXInstrumentTO *instrumentTO);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETPriceUtils_OffsetUtils)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientUtilPriceUtils")
