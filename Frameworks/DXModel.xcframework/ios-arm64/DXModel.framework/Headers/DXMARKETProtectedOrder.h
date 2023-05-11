
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseProtectedOrder")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseProtectedOrder
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseProtectedOrder 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseProtectedOrder 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseProtectedOrder

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETProtectedOrder_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseProtectedOrder || defined(INCLUDE_DXMARKETProtectedOrder))
#define DXMARKETProtectedOrder_

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderBasePriceOrder 1
#define INCLUDE_DXMARKETPriceOrder 1
#include "DXMARKETPriceOrder.h"

@class DXMARKETAttachedLimitOrder;
@class DXMARKETAttachedStopOrder;
@class DXMARKETOrderEditorModel;
@class DXOrderEntryTypeTO;
@class DXOrderTemplateTO;
@class DXOrderValidationDetailsTO;
@class DXOrderValidationParamsTO;
@class DXPricedOrderValidationParamsTO;
@class DXSizedOrderValidationParamsTO;
@protocol DXMARKETOrderData;

@interface DXMARKETProtectedOrder : DXMARKETPriceOrder {
 @public
  DXMARKETAttachedLimitOrder *takeProfitOrder_;
  DXMARKETAttachedStopOrder *stopLossOrder_;
}

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)params
                                    withDXOrderEntryTypeTO:(DXOrderEntryTypeTO *)orderType;

- (DXMARKETAttachedStopOrder *)getStopLossOrder;

- (DXMARKETAttachedLimitOrder *)getTakeProfitOrder;

- (jboolean)isStopLossEnabled;

- (jboolean)isStopLossToggleChangeable;

- (jboolean)isTakeProfitEnabled;

- (jboolean)isTakeProfitToggleChangeable;

- (void)retainPreviousOrderStateWithDXMARKETOrderData:(id<DXMARKETOrderData>)prevOrder;

- (void)setStopLossEnabledWithBoolean:(jboolean)stopLossEnabled;

- (void)setTakeProfitEnabledWithBoolean:(jboolean)takeProfitEnabled;

- (void)stopValuesAutoUpdate;

- (DXOrderTemplateTO *)toTemplateWithBoolean:(jboolean)empty;

#pragma mark Protected

- (DXPricedOrderValidationParamsTO *)extractPricedParamsWithDXOrderValidationParamsTO:(DXOrderValidationParamsTO *)inputParams;

- (DXSizedOrderValidationParamsTO *)extractSizedParamsForQuantityWithDXOrderValidationParamsTO:(DXOrderValidationParamsTO *)params;

- (jlong)getAttachValidationDistance;

- (void)onBuyUpdatedWithBoolean:(jboolean)buy;

- (void)onPriceUpdated;

- (void)onQuantityChanged;

- (void)refreshPrimaryValues;

- (void)setQuantityToProtectOrders;

- (void)updateImplWithDXOrderValidationParamsTO:(DXOrderValidationParamsTO *)inputParams;

- (void)updateInstrumentDataWithDXOrderValidationDetailsTO:(DXOrderValidationDetailsTO *)details;

- (void)updateSideForProtectOrdersWithBoolean:(jboolean)buy;

- (void)updateSlBasePriceWithLong:(jlong)parentPrice;

- (void)updateStopLossEnabledWithBoolean:(jboolean)stopLossEnabled;

- (void)updateTakeProfitEnabledWithBoolean:(jboolean)takeProfitEnabled;

- (void)updateTpBasePriceWithLong:(jlong)parentPrice;

- (jboolean)validateImpl;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETProtectedOrder)

J2OBJC_FIELD_SETTER(DXMARKETProtectedOrder, takeProfitOrder_, DXMARKETAttachedLimitOrder *)
J2OBJC_FIELD_SETTER(DXMARKETProtectedOrder, stopLossOrder_, DXMARKETAttachedStopOrder *)

FOUNDATION_EXPORT void DXMARKETProtectedOrder_initWithDXMARKETOrderEditorModel_withDXOrderEntryTypeTO_(DXMARKETProtectedOrder *self, DXMARKETOrderEditorModel *params, DXOrderEntryTypeTO *orderType);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETProtectedOrder)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderBaseProtectedOrder DXMARKETProtectedOrder;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseProtectedOrder")
