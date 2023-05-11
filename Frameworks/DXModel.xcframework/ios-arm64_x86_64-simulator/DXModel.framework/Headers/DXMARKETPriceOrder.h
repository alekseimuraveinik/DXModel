
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBasePriceOrder")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBasePriceOrder
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBasePriceOrder 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBasePriceOrder 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBasePriceOrder

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETPriceOrder_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBasePriceOrder || defined(INCLUDE_DXMARKETPriceOrder))
#define DXMARKETPriceOrder_

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseAbstractOrder 1
#define INCLUDE_DXMARKETAbstractOrder 1
#include "DXMARKETAbstractOrder.h"

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseMarginOrderData 1
#define INCLUDE_DXMARKETMarginOrderData 1
#include "DXMARKETMarginOrderData.h"

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseCashOrderFieldData 1
#define INCLUDE_DXMARKETCashOrderFieldData 1
#include "DXMARKETCashOrderFieldData.h"

@class DXMARKETOrderEditorModel;
@class DXMARKETOrderEntryValue;
@class DXMARKETValidationInfo;
@class DXOrderEntryTypeTO;
@class DXOrderTemplateTO;
@class DXOrderValidationDetailsTO;
@class DXOrderValidationParamsTO;
@class DXPricedOrderTemplateTO;
@class DXPricedOrderValidationParamsTO;
@class DXSizedOrderValidationParamsTO;
@protocol DXMARKETOrderData;
@protocol DXMARKETOrderErrorStringProvider;
@protocol JavaUtilList;

@interface DXMARKETPriceOrder : DXMARKETAbstractOrder < DXMARKETMarginOrderData, DXMARKETCashOrderFieldData >

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)params
                                    withDXOrderEntryTypeTO:(DXOrderEntryTypeTO *)orderType;

- (NSString *)buildErrorWithBoundsWithDXMARKETOrderEntryValue:(DXMARKETOrderEntryValue *)value
                                                 withNSString:(NSString *)bounds
                         withDXMARKETOrderErrorStringProvider:(id<DXMARKETOrderErrorStringProvider>)stringProvider;

- (NSString *)buildErrorWithMinIncrementWithDXMARKETOrderEntryValue:(DXMARKETOrderEntryValue *)value
                                                       withNSString:(NSString *)increment
                               withDXMARKETOrderErrorStringProvider:(id<DXMARKETOrderErrorStringProvider>)stringProvider;

- (jlong)getCommissionValue;

- (NSString *)getMarginString;

- (NSString *)getPriceString;

- (DXMARKETValidationInfo *)getPriceValidationInfo;

- (jlong)getProspectiveCostValue;

- (jboolean)isBuy;

- (jboolean)isPriceChangeable;

- (jboolean)isSideChangeable;

- (void)retainPreviousOrderStateWithDXMARKETOrderData:(id<DXMARKETOrderData>)prevOrder;

- (jboolean)setBuyWithBoolean:(jboolean)buy;

- (jboolean)setPriceWithNSString:(NSString *)priceStr;

- (void)stepPriceWithBoolean:(jboolean)forward;

- (DXOrderTemplateTO *)toTemplateWithBoolean:(jboolean)empty;

- (void)updateStateWithPriceWithLong:(jlong)price;

#pragma mark Protected

- (void)beforePriceSet;

- (void)clearPrimaryList;

- (NSString *)composeMarginRegex;

- (NSString *)composePriceRegex;

- (DXPricedOrderTemplateTO *)constructTemplateImpl;

- (jdouble)currentIncrement;

- (DXPricedOrderValidationParamsTO *)extractPricedParamsWithDXOrderValidationParamsTO:(DXOrderValidationParamsTO *)params;

- (DXSizedOrderValidationParamsTO *)extractSizedParamsForQuantityWithDXOrderValidationParamsTO:(DXOrderValidationParamsTO *)params;

- (id<JavaUtilList>)getChangingValues;

- (DXMARKETOrderEntryValue *)getPriceValue;

- (void)onBuyUpdatedWithBoolean:(jboolean)buy;

- (void)onPriceUpdated;

- (void)onQuantityChanged;

- (NSString *)priceErrorWithBoolean:(jboolean)relative
withDXMARKETOrderErrorStringProvider:(id<DXMARKETOrderErrorStringProvider>)stringProvider;

- (void)updateImplWithDXOrderValidationParamsTO:(DXOrderValidationParamsTO *)inputParams;

- (void)updateIncrement;

- (void)updateInstrumentDataWithDXOrderValidationDetailsTO:(DXOrderValidationDetailsTO *)details;

- (void)updateSideWithBoolean:(jboolean)buy;

- (jboolean)validateImpl;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETPriceOrder)

FOUNDATION_EXPORT void DXMARKETPriceOrder_initWithDXMARKETOrderEditorModel_withDXOrderEntryTypeTO_(DXMARKETPriceOrder *self, DXMARKETOrderEditorModel *params, DXOrderEntryTypeTO *orderType);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETPriceOrder)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderBasePriceOrder DXMARKETPriceOrder;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBasePriceOrder")
