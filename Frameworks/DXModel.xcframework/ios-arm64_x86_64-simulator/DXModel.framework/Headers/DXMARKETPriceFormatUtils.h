
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelUtilPriceFormatUtils")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelUtilPriceFormatUtils
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelUtilPriceFormatUtils 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelUtilPriceFormatUtils 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelUtilPriceFormatUtils

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETPriceFormatUtils_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelUtilPriceFormatUtils || defined(INCLUDE_DXMARKETPriceFormatUtils))
#define DXMARKETPriceFormatUtils_

@protocol DXDecimalFormatter;

@interface DXMARKETPriceFormatUtils : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

+ (NSString *)guardPriceWithZeroWithLong:(jlong)decimalPrice
                                 withInt:(jint)precision
                  withDXDecimalFormatter:(id<DXDecimalFormatter>)formatter;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETPriceFormatUtils)

FOUNDATION_EXPORT void DXMARKETPriceFormatUtils_init(DXMARKETPriceFormatUtils *self);

FOUNDATION_EXPORT DXMARKETPriceFormatUtils *new_DXMARKETPriceFormatUtils_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETPriceFormatUtils *create_DXMARKETPriceFormatUtils_init(void);

FOUNDATION_EXPORT NSString *DXMARKETPriceFormatUtils_guardPriceWithZeroWithLong_withInt_withDXDecimalFormatter_(jlong decimalPrice, jint precision, id<DXDecimalFormatter> formatter);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETPriceFormatUtils)

@compatibility_alias ComDevexpertsDxmarketClientModelUtilPriceFormatUtils DXMARKETPriceFormatUtils;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelUtilPriceFormatUtils")
