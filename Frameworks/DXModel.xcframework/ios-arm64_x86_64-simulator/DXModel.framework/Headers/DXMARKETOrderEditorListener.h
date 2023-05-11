
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseListenersOrderEditorListener")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseListenersOrderEditorListener
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseListenersOrderEditorListener 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseListenersOrderEditorListener 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseListenersOrderEditorListener

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETOrderEditorListener_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseListenersOrderEditorListener || defined(INCLUDE_DXMARKETOrderEditorListener))
#define DXMARKETOrderEditorListener_

@class DXMARKETAbstractCashOrder;
@class DXMARKETAbstractOrder;
@class DXMARKETAttachedOrder;
@class DXMARKETAttachedStopOrder;
@class DXMARKETOcoOrder;
@class DXMARKETOrderEditorModel;
@class DXMARKETPriceOrder;
@class DXMARKETProtectedOrder;
@class DXMARKETStopOrder;
@class DXMARKETValidationInfo;
@class PSErrorTO;
@protocol DXMARKETCashOrderFieldData;
@protocol DXMARKETMarginOrderData;

@protocol DXMARKETOrderEditorListener < JavaObject >

- (void)quantityParamsChangedWithDXMARKETAbstractOrder:(DXMARKETAbstractOrder *)order;

- (void)quantityChangedWithDXMARKETAbstractOrder:(DXMARKETAbstractOrder *)order;

- (void)quantityErrorChangedWithDXMARKETAbstractOrder:(DXMARKETAbstractOrder *)order;

- (void)directionChangedWithDXMARKETPriceOrder:(DXMARKETPriceOrder *)order;

- (void)priceParamsChangedWithDXMARKETPriceOrder:(DXMARKETPriceOrder *)order;

- (void)priceChangedWithDXMARKETPriceOrder:(DXMARKETPriceOrder *)order;

- (void)priceErrorChangedWithDXMARKETPriceOrder:(DXMARKETPriceOrder *)order;

- (void)takeProfitStatusChangedWithDXMARKETProtectedOrder:(DXMARKETProtectedOrder *)order;

- (void)stopLossStatusChangedWithDXMARKETProtectedOrder:(DXMARKETProtectedOrder *)order;

- (void)validityStateChangedWithDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)model;

- (void)trailValueChangedWithDXMARKETStopOrder:(DXMARKETStopOrder *)order;

- (void)trailValueErrorChangedWithDXMARKETStopOrder:(DXMARKETStopOrder *)order;

- (void)masterValueUpdatedWithDXMARKETAttachedOrder:(DXMARKETAttachedOrder *)order;

- (void)attachOffsetChangedWithDXMARKETAttachedOrder:(DXMARKETAttachedOrder *)order;

- (void)attachOffsetErrorChangedWithDXMARKETAttachedOrder:(DXMARKETAttachedOrder *)order;

- (void)attachTrailModeChangedWithDXMARKETAttachedStopOrder:(DXMARKETAttachedStopOrder *)order;

- (void)onGlobalValidationErrorWithPSErrorTO:(PSErrorTO *)code;

- (void)firstUpdateWithDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)model;

- (void)marginChangedWithDXMARKETMarginOrderData:(id<DXMARKETMarginOrderData>)order;

- (void)commissionChangedWithDXMARKETCashOrderFieldData:(id<DXMARKETCashOrderFieldData>)order;

- (void)prospectiveCostChangedWithDXMARKETCashOrderFieldData:(id<DXMARKETCashOrderFieldData>)order;

- (void)feeChangedWithDXMARKETAbstractCashOrder:(DXMARKETAbstractCashOrder *)order;

- (void)totalSpendChangedWithDXMARKETAbstractCashOrder:(DXMARKETAbstractCashOrder *)order;

- (void)spendChangedWithDXMARKETAbstractCashOrder:(DXMARKETAbstractCashOrder *)order;

- (void)spendErrorChangedWithDXMARKETValidationInfo:(DXMARKETValidationInfo *)error;

- (void)receiveChangedWithDXMARKETAbstractCashOrder:(DXMARKETAbstractCashOrder *)order;

- (void)receiveErrorChangedWithDXMARKETValidationInfo:(DXMARKETValidationInfo *)error;

- (void)cashPriceChangedWithDXMARKETAbstractCashOrder:(DXMARKETAbstractCashOrder *)order;

- (void)cashPriceErrorChangedWithDXMARKETValidationInfo:(DXMARKETValidationInfo *)error;

- (void)cashDirectionChangedWithDXMARKETAbstractCashOrder:(DXMARKETAbstractCashOrder *)order;

- (void)plChangedWithDXMARKETAttachedOrder:(DXMARKETAttachedOrder *)order;

- (void)plErrorChangedWithDXMARKETAttachedOrder:(DXMARKETAttachedOrder *)order;

- (void)percentOfBalanceChangedWithDXMARKETAttachedOrder:(DXMARKETAttachedOrder *)order;

- (void)percentOfBalanceErrorChangedWithDXMARKETAttachedOrder:(DXMARKETAttachedOrder *)order;

- (void)ocoChildOrderTypeChangedWithDXMARKETOcoOrder:(DXMARKETOcoOrder *)ocoOrder
                                             withInt:(jint)childIndex;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETOrderEditorListener)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETOrderEditorListener)

#define ComDevexpertsDxmarketClientModelOrderBaseListenersOrderEditorListener DXMARKETOrderEditorListener

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseListenersOrderEditorListener")
