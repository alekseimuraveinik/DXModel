
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseAbstractCashOrder")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseAbstractCashOrder
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseAbstractCashOrder 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseAbstractCashOrder 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseAbstractCashOrder

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETAbstractCashOrder_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseAbstractCashOrder || defined(INCLUDE_DXMARKETAbstractCashOrder))
#define DXMARKETAbstractCashOrder_

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseAbstractOrder 1
#define INCLUDE_DXMARKETAbstractOrder 1
#include "DXMARKETAbstractOrder.h"

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderCashWithTotalSpend 1
#define INCLUDE_DXMARKETWithTotalSpend 1
#include "DXMARKETWithTotalSpend.h"

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderCashWithFee 1
#define INCLUDE_DXMARKETWithFee 1
#include "DXMARKETWithFee.h"

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderCashWithSpend 1
#define INCLUDE_DXMARKETWithSpend 1
#include "DXMARKETWithSpend.h"

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderCashWithReceive 1
#define INCLUDE_DXMARKETWithReceive 1
#include "DXMARKETWithReceive.h"

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderCashWithSide 1
#define INCLUDE_DXMARKETWithSide 1
#include "DXMARKETWithSide.h"

@class DXMARKETOrderEditorModel;
@class DXMARKETValidationInfo;
@class DXOrderEntryTypeTO;
@class DXOrderValidationParamsTO;
@class DXSizedOrderValidationParamsTO;
@protocol DXMARKETErrorBuilder;
@protocol DXMARKETOrderEntryBuySellField;
@protocol DXMARKETOrderEntryDecimalField;

@interface DXMARKETAbstractCashOrder : DXMARKETAbstractOrder < DXMARKETWithTotalSpend, DXMARKETWithFee, DXMARKETWithSpend, DXMARKETWithReceive, DXMARKETWithSide > {
 @public
  id<DXMARKETOrderEntryDecimalField> fee_;
  id<DXMARKETOrderEntryDecimalField> spend_;
  id<DXMARKETOrderEntryDecimalField> receive_;
  id<DXMARKETOrderEntryDecimalField> totalSpend_;
  id<DXMARKETOrderEntryDecimalField> price_;
  id<DXMARKETOrderEntryBuySellField> direction_;
  jlong availableFundsBaseCurrency_;
  jlong availableFundsQuoteCurrency_;
}

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)model
                                    withDXOrderEntryTypeTO:(DXOrderEntryTypeTO *)orderType;

- (NSString *)getFee;

- (jlong)getFeeeValue;

- (NSString *)getReceive;

- (jlong)getReceiveAvailableFunds;

- (DXMARKETValidationInfo *)getReceiveValidationInfo;

- (jlong)getRecieveValue;

- (NSString *)getSpend;

- (jlong)getSpendAvailableFunds;

- (DXMARKETValidationInfo *)getSpendValidationInfo;

- (NSString *)getTotalSpend;

- (jlong)getTotolZpendValue;

- (jlong)getZpendValue;

- (jboolean)isBuy;

- (void)setBuyWithBoolean:(jboolean)buy;

- (void)setReceiveWithNSString:(NSString *)value;

- (void)setSpendWithNSString:(NSString *)value;

- (void)stepReceeveWithBoolean:(jboolean)forward;

- (void)stepSpentWithBoolean:(jboolean)forward;

- (jboolean)validate;

#pragma mark Protected

- (DXSizedOrderValidationParamsTO *)extractSizedParamsForQuantityWithDXOrderValidationParamsTO:(DXOrderValidationParamsTO *)params;

- (id<DXMARKETErrorBuilder>)getErrorBuilder;

- (void)updateImplWithDXOrderValidationParamsTO:(DXOrderValidationParamsTO *)params;

- (jboolean)validateImpl;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETAbstractCashOrder)

J2OBJC_FIELD_SETTER(DXMARKETAbstractCashOrder, fee_, id<DXMARKETOrderEntryDecimalField>)
J2OBJC_FIELD_SETTER(DXMARKETAbstractCashOrder, spend_, id<DXMARKETOrderEntryDecimalField>)
J2OBJC_FIELD_SETTER(DXMARKETAbstractCashOrder, receive_, id<DXMARKETOrderEntryDecimalField>)
J2OBJC_FIELD_SETTER(DXMARKETAbstractCashOrder, totalSpend_, id<DXMARKETOrderEntryDecimalField>)
J2OBJC_FIELD_SETTER(DXMARKETAbstractCashOrder, price_, id<DXMARKETOrderEntryDecimalField>)
J2OBJC_FIELD_SETTER(DXMARKETAbstractCashOrder, direction_, id<DXMARKETOrderEntryBuySellField>)

FOUNDATION_EXPORT void DXMARKETAbstractCashOrder_initWithDXMARKETOrderEditorModel_withDXOrderEntryTypeTO_(DXMARKETAbstractCashOrder *self, DXMARKETOrderEditorModel *model, DXOrderEntryTypeTO *orderType);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETAbstractCashOrder)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderBaseAbstractCashOrder DXMARKETAbstractCashOrder;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseAbstractCashOrder")
