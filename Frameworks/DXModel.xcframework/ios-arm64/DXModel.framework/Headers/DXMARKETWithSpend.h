
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashWithSpend")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderCashWithSpend
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashWithSpend 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashWithSpend 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderCashWithSpend

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETWithSpend_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashWithSpend || defined(INCLUDE_DXMARKETWithSpend))
#define DXMARKETWithSpend_

@class DXMARKETValidationInfo;

@protocol DXMARKETWithSpend < JavaObject >

- (NSString *)getSpend;

- (DXMARKETValidationInfo *)getSpendValidationInfo;

- (jlong)getZpendValue;

- (void)setSpendWithNSString:(NSString *)value;

- (void)stepSpentWithBoolean:(jboolean)forward;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETWithSpend)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETWithSpend)

#define ComDevexpertsDxmarketClientModelOrderCashWithSpend DXMARKETWithSpend

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashWithSpend")
