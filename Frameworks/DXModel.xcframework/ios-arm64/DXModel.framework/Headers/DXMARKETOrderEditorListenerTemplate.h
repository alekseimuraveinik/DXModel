
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOneclickOrderEditorListenerTemplate")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderOneclickOrderEditorListenerTemplate
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOneclickOrderEditorListenerTemplate 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOneclickOrderEditorListenerTemplate 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderOneclickOrderEditorListenerTemplate

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETOrderEditorListenerTemplate_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOneclickOrderEditorListenerTemplate || defined(INCLUDE_DXMARKETOrderEditorListenerTemplate))
#define DXMARKETOrderEditorListenerTemplate_

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseListenersOrderEditorListener 1
#define INCLUDE_DXMARKETOrderEditorListener 1
#include "DXMARKETOrderEditorListener.h"

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

@interface DXMARKETOrderEditorListenerTemplate : NSObject < DXMARKETOrderEditorListener >

#pragma mark Public

- (instancetype __nonnull)init;

- (void)attachOffsetChangedWithDXMARKETAttachedOrder:(DXMARKETAttachedOrder *)order;

- (void)attachOffsetErrorChangedWithDXMARKETAttachedOrder:(DXMARKETAttachedOrder *)order;

- (void)attachTrailModeChangedWithDXMARKETAttachedStopOrder:(DXMARKETAttachedStopOrder *)order;

- (void)cashDirectionChangedWithDXMARKETAbstractCashOrder:(DXMARKETAbstractCashOrder *)order;

- (void)cashPriceChangedWithDXMARKETAbstractCashOrder:(DXMARKETAbstractCashOrder *)order;

- (void)cashPriceErrorChangedWithDXMARKETValidationInfo:(DXMARKETValidationInfo *)error;

- (void)commissionChangedWithDXMARKETCashOrderFieldData:(id<DXMARKETCashOrderFieldData>)order;

- (void)directionChangedWithDXMARKETPriceOrder:(DXMARKETPriceOrder *)order;

- (void)feeChangedWithDXMARKETAbstractCashOrder:(DXMARKETAbstractCashOrder *)order;

- (void)firstUpdateWithDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)model;

- (void)marginChangedWithDXMARKETMarginOrderData:(id<DXMARKETMarginOrderData>)order;

- (void)masterValueUpdatedWithDXMARKETAttachedOrder:(DXMARKETAttachedOrder *)order;

- (void)ocoChildOrderTypeChangedWithDXMARKETOcoOrder:(DXMARKETOcoOrder *)ocoOrder
                                             withInt:(jint)childIndex;

- (void)onGlobalValidationErrorWithPSErrorTO:(PSErrorTO *)code;

- (void)percentOfBalanceChangedWithDXMARKETAttachedOrder:(DXMARKETAttachedOrder *)order;

- (void)percentOfBalanceErrorChangedWithDXMARKETAttachedOrder:(DXMARKETAttachedOrder *)order;

- (void)plChangedWithDXMARKETAttachedOrder:(DXMARKETAttachedOrder *)order;

- (void)plErrorChangedWithDXMARKETAttachedOrder:(DXMARKETAttachedOrder *)order;

- (void)priceChangedWithDXMARKETPriceOrder:(DXMARKETPriceOrder *)order;

- (void)priceErrorChangedWithDXMARKETPriceOrder:(DXMARKETPriceOrder *)order;

- (void)priceParamsChangedWithDXMARKETPriceOrder:(DXMARKETPriceOrder *)order;

- (void)prospectiveCostChangedWithDXMARKETCashOrderFieldData:(id<DXMARKETCashOrderFieldData>)order;

- (void)quantityChangedWithDXMARKETAbstractOrder:(DXMARKETAbstractOrder *)order;

- (void)quantityErrorChangedWithDXMARKETAbstractOrder:(DXMARKETAbstractOrder *)order;

- (void)quantityParamsChangedWithDXMARKETAbstractOrder:(DXMARKETAbstractOrder *)order;

- (void)receiveChangedWithDXMARKETAbstractCashOrder:(DXMARKETAbstractCashOrder *)order;

- (void)receiveErrorChangedWithDXMARKETValidationInfo:(DXMARKETValidationInfo *)error;

- (void)spendChangedWithDXMARKETAbstractCashOrder:(DXMARKETAbstractCashOrder *)order;

- (void)spendErrorChangedWithDXMARKETValidationInfo:(DXMARKETValidationInfo *)error;

- (void)stopLossStatusChangedWithDXMARKETProtectedOrder:(DXMARKETProtectedOrder *)order;

- (void)takeProfitStatusChangedWithDXMARKETProtectedOrder:(DXMARKETProtectedOrder *)order;

- (void)totalSpendChangedWithDXMARKETAbstractCashOrder:(DXMARKETAbstractCashOrder *)order;

- (void)trailValueChangedWithDXMARKETStopOrder:(DXMARKETStopOrder *)order;

- (void)trailValueErrorChangedWithDXMARKETStopOrder:(DXMARKETStopOrder *)order;

- (void)validityStateChangedWithDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)model;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETOrderEditorListenerTemplate)

FOUNDATION_EXPORT void DXMARKETOrderEditorListenerTemplate_init(DXMARKETOrderEditorListenerTemplate *self);

FOUNDATION_EXPORT DXMARKETOrderEditorListenerTemplate *new_DXMARKETOrderEditorListenerTemplate_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETOrderEditorListenerTemplate *create_DXMARKETOrderEditorListenerTemplate_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETOrderEditorListenerTemplate)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderOneclickOrderEditorListenerTemplate DXMARKETOrderEditorListenerTemplate;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOneclickOrderEditorListenerTemplate")
