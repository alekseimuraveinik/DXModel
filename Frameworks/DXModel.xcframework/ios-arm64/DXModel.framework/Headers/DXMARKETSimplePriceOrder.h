
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseSimplePriceOrder")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseSimplePriceOrder
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseSimplePriceOrder 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseSimplePriceOrder 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseSimplePriceOrder

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETSimplePriceOrder_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseSimplePriceOrder || defined(INCLUDE_DXMARKETSimplePriceOrder))
#define DXMARKETSimplePriceOrder_

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderBasePriceOrder 1
#define INCLUDE_DXMARKETPriceOrder 1
#include "DXMARKETPriceOrder.h"

@class DXMARKETOrderEditorModel;
@class DXOrderEntryTypeTO;
@class DXOrderValidationParamsTO;
@class DXPricedOrderTemplateTO;
@class DXPricedOrderValidationParamsTO;

@interface DXMARKETSimplePriceOrder : DXMARKETPriceOrder

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)params;

- (DXOrderEntryTypeTO *)getOrderType;

#pragma mark Protected

- (DXPricedOrderTemplateTO *)constructTemplateImpl;

- (DXPricedOrderValidationParamsTO *)extractPricedParamsWithDXOrderValidationParamsTO:(DXOrderValidationParamsTO *)params;

#pragma mark Package-Private

- (void)updateOrderTypeWithDXOrderEntryTypeTO:(DXOrderEntryTypeTO *)orderType;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)arg0
                                    withDXOrderEntryTypeTO:(DXOrderEntryTypeTO *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETSimplePriceOrder)

FOUNDATION_EXPORT void DXMARKETSimplePriceOrder_initWithDXMARKETOrderEditorModel_(DXMARKETSimplePriceOrder *self, DXMARKETOrderEditorModel *params);

FOUNDATION_EXPORT DXMARKETSimplePriceOrder *new_DXMARKETSimplePriceOrder_initWithDXMARKETOrderEditorModel_(DXMARKETOrderEditorModel *params) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETSimplePriceOrder *create_DXMARKETSimplePriceOrder_initWithDXMARKETOrderEditorModel_(DXMARKETOrderEditorModel *params);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETSimplePriceOrder)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderBaseSimplePriceOrder DXMARKETSimplePriceOrder;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseSimplePriceOrder")
