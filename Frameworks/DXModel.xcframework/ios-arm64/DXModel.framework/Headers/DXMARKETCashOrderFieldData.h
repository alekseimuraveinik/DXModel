
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseCashOrderFieldData")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseCashOrderFieldData
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseCashOrderFieldData 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseCashOrderFieldData 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseCashOrderFieldData

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETCashOrderFieldData_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseCashOrderFieldData || defined(INCLUDE_DXMARKETCashOrderFieldData))
#define DXMARKETCashOrderFieldData_

@protocol DXMARKETCashOrderFieldData < JavaObject >

- (jlong)getCommissionValue;

- (jlong)getProspectiveCostValue;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETCashOrderFieldData)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETCashOrderFieldData)

#define ComDevexpertsDxmarketClientModelOrderBaseCashOrderFieldData DXMARKETCashOrderFieldData

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseCashOrderFieldData")
