
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashOrderEntryBuySellField")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderCashOrderEntryBuySellField
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashOrderEntryBuySellField 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashOrderEntryBuySellField 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderCashOrderEntryBuySellField

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETOrderEntryBuySellField_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashOrderEntryBuySellField || defined(INCLUDE_DXMARKETOrderEntryBuySellField))
#define DXMARKETOrderEntryBuySellField_

@protocol DXMARKETOrderEntryBuySellField < JavaObject >

- (void)setBuyWithBoolean:(jboolean)isBuy;

- (jboolean)getBuy;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETOrderEntryBuySellField)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETOrderEntryBuySellField)

#define ComDevexpertsDxmarketClientModelOrderCashOrderEntryBuySellField DXMARKETOrderEntryBuySellField

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashOrderEntryBuySellField")
