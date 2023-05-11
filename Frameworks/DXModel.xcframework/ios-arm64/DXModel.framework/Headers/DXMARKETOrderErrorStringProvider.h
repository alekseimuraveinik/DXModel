
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseI18nOrderErrorStringProvider")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseI18nOrderErrorStringProvider
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseI18nOrderErrorStringProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseI18nOrderErrorStringProvider 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseI18nOrderErrorStringProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETOrderErrorStringProvider_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseI18nOrderErrorStringProvider || defined(INCLUDE_DXMARKETOrderErrorStringProvider))
#define DXMARKETOrderErrorStringProvider_

@protocol DXMARKETOrderErrorStringProvider < JavaObject >

- (NSString *)lessThan;

- (NSString *)moreThan;

- (NSString *)lessOrEqualThan;

- (NSString *)moreOrEqualThan;

- (NSString *)atLeast;

- (NSString *)quantityErrorWithBoolean:(jboolean)inCurrency;

- (NSString *)quantityIncrementErrorWithBoolean:(jboolean)inCurrency
                                   withNSString:(NSString *)increment;

- (NSString *)spendError;

- (NSString *)receiveError;

- (NSString *)priceErrorWithBoolean:(jboolean)relative;

- (NSString *)priceIncrementErrorWithNSString:(NSString *)increment;

- (NSString *)attachTakeProfitPriceErrorWithBoolean:(jboolean)relative;

- (NSString *)attachStopLossPriceErrorWithBoolean:(jboolean)relative;

- (NSString *)protectTakeProfitPriceErrorWithBoolean:(jboolean)relative;

- (NSString *)protectStopLossPriceErrorWithBoolean:(jboolean)relative;

- (NSString *)attachTakeProfitOffsetError;

- (NSString *)attachStopLossOffsetError;

- (NSString *)protectTakeProfitOffsetError;

- (NSString *)protectStopLossOffsetError;

- (NSString *)points;

- (NSString *)pips;

- (NSString *)trailOffsetError;

- (NSString *)plAmount;

- (NSString *)percentOfBalance;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETOrderErrorStringProvider)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETOrderErrorStringProvider)

#define ComDevexpertsDxmarketClientModelOrderBaseI18nOrderErrorStringProvider DXMARKETOrderErrorStringProvider

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseI18nOrderErrorStringProvider")
