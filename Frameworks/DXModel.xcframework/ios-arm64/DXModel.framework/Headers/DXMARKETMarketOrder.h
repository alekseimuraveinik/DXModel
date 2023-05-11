
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseMarketOrder")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseMarketOrder
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseMarketOrder 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseMarketOrder 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseMarketOrder

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETMarketOrder_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseMarketOrder || defined(INCLUDE_DXMARKETMarketOrder))
#define DXMARKETMarketOrder_

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseProtectedOrder 1
#define INCLUDE_DXMARKETProtectedOrder 1
#include "DXMARKETProtectedOrder.h"

@class DXMARKETOrderEditorModel;
@class DXOrderEntryTypeTO;
@class DXOrderValidationParamsTO;
@class DXPricedOrderTemplateTO;

@interface DXMARKETMarketOrder : DXMARKETProtectedOrder

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)params
                                    withDXOrderEntryTypeTO:(DXOrderEntryTypeTO *)type;

- (jboolean)setPriceWithNSString:(NSString *)priceStr;

- (void)stepPriceWithBoolean:(jboolean)forward;

- (void)stopValuesAutoUpdate;

#pragma mark Protected

- (jboolean)checkIfCorrectWithDXOrderEntryTypeTO:(DXOrderEntryTypeTO *)typeTO;

- (DXPricedOrderTemplateTO *)constructTemplateImpl;

- (jlong)getAttachValidationDistance;

- (void)updateImplWithDXOrderValidationParamsTO:(DXOrderValidationParamsTO *)inputParams;

- (void)updateSlBasePriceWithLong:(jlong)parentPrice;

- (void)updateTpBasePriceWithLong:(jlong)parentPrice;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETMarketOrder)

FOUNDATION_EXPORT void DXMARKETMarketOrder_initWithDXMARKETOrderEditorModel_withDXOrderEntryTypeTO_(DXMARKETMarketOrder *self, DXMARKETOrderEditorModel *params, DXOrderEntryTypeTO *type);

FOUNDATION_EXPORT DXMARKETMarketOrder *new_DXMARKETMarketOrder_initWithDXMARKETOrderEditorModel_withDXOrderEntryTypeTO_(DXMARKETOrderEditorModel *params, DXOrderEntryTypeTO *type) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETMarketOrder *create_DXMARKETMarketOrder_initWithDXMARKETOrderEditorModel_withDXOrderEntryTypeTO_(DXMARKETOrderEditorModel *params, DXOrderEntryTypeTO *type);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETMarketOrder)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderBaseMarketOrder DXMARKETMarketOrder;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseMarketOrder")
