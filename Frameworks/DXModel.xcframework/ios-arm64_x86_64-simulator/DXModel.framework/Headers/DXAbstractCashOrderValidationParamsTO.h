
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorCashAbstractCashOrderValidationParamsTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorCashAbstractCashOrderValidationParamsTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorCashAbstractCashOrderValidationParamsTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorCashAbstractCashOrderValidationParamsTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorCashAbstractCashOrderValidationParamsTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAbstractCashOrderValidationParamsTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorCashAbstractCashOrderValidationParamsTO || defined(INCLUDE_DXAbstractCashOrderValidationParamsTO))
#define DXAbstractCashOrderValidationParamsTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiEditorValidationOrderValidationParamsTO 1
#define INCLUDE_DXOrderValidationParamsTO 1
#include "DXOrderValidationParamsTO.h"

@class DXDecimalFieldDescriptorTO;
@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXAbstractCashOrderValidationParamsTO : DXOrderValidationParamsTO

#pragma mark Public

- (DXAbstractCashOrderValidationParamsTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (jboolean)isEqual:(id)o;

- (jlong)getAvailableFundsBaseCurrency;

- (jlong)getAvailableFundsQuoteCurrency;

- (DXDecimalFieldDescriptorTO *)getFee;

- (DXDecimalFieldDescriptorTO *)getPrice;

- (DXDecimalFieldDescriptorTO *)getReceive;

- (DXDecimalFieldDescriptorTO *)getSpend;

- (DXDecimalFieldDescriptorTO *)getTotalSpend;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setAvailableFundsBaseCurrencyWithLong:(jlong)availableFundsBaseCurrency;

- (void)setAvailableFundsQuoteCurrencyWithLong:(jlong)availableFundsQuoteCurrency;

- (void)setFeeWithDXDecimalFieldDescriptorTO:(DXDecimalFieldDescriptorTO *)fee;

- (void)setPriceWithDXDecimalFieldDescriptorTO:(DXDecimalFieldDescriptorTO *)price;

- (void)setReceiveWithDXDecimalFieldDescriptorTO:(DXDecimalFieldDescriptorTO *)receive;

- (void)setSpendWithDXDecimalFieldDescriptorTO:(DXDecimalFieldDescriptorTO *)spend;

- (void)setTotalSpendWithDXDecimalFieldDescriptorTO:(DXDecimalFieldDescriptorTO *)totalSpend;

- (NSString *)description;

#pragma mark Protected

- (instancetype __nonnull)init;

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_EMPTY_STATIC_INIT(DXAbstractCashOrderValidationParamsTO)

FOUNDATION_EXPORT void DXAbstractCashOrderValidationParamsTO_init(DXAbstractCashOrderValidationParamsTO *self);

J2OBJC_TYPE_LITERAL_HEADER(DXAbstractCashOrderValidationParamsTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorCashAbstractCashOrderValidationParamsTO DXAbstractCashOrderValidationParamsTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorCashAbstractCashOrderValidationParamsTO")
