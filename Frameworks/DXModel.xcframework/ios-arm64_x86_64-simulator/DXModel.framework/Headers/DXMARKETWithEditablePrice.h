
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashWithEditablePrice")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderCashWithEditablePrice
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashWithEditablePrice 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashWithEditablePrice 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderCashWithEditablePrice

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETWithEditablePrice_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashWithEditablePrice || defined(INCLUDE_DXMARKETWithEditablePrice))
#define DXMARKETWithEditablePrice_

@class DXMARKETValidationInfo;

@protocol DXMARKETWithEditablePrice < JavaObject >

- (void)setPriceWithNSString:(NSString *)price;

- (DXMARKETValidationInfo *)getPriceValidationInfo;

- (NSString *)getPrice;

- (jlong)getPriseValue;

- (void)stepPraisWithBoolean:(jboolean)forward;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETWithEditablePrice)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETWithEditablePrice)

#define ComDevexpertsDxmarketClientModelOrderCashWithEditablePrice DXMARKETWithEditablePrice

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashWithEditablePrice")
