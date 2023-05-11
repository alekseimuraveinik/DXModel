
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOrderData")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderOrderData
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOrderData 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOrderData 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderOrderData

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETOrderData_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOrderData || defined(INCLUDE_DXMARKETOrderData))
#define DXMARKETOrderData_

@class DXOrderEntryTypeTO;
@class DXOrderTemplateTO;
@class DXOrderValidationDetailsTO;

@protocol DXMARKETOrderData < JavaObject >

- (DXOrderEntryTypeTO *)getOrderType;

- (DXOrderTemplateTO *)toTemplateWithBoolean:(jboolean)empty;

- (jboolean)validate;

- (void)retainPreviousOrderStateWithDXMARKETOrderData:(id<DXMARKETOrderData>)prevOrder;

- (void)updateWithWithDXOrderValidationDetailsTO:(DXOrderValidationDetailsTO *)details;

- (void)stopValuesAutoUpdate;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETOrderData)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETOrderData)

#define ComDevexpertsDxmarketClientModelOrderOrderData DXMARKETOrderData

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOrderData")
