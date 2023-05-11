
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseLimitOrder")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseLimitOrder
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseLimitOrder 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseLimitOrder 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseLimitOrder

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETLimitOrder_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseLimitOrder || defined(INCLUDE_DXMARKETLimitOrder))
#define DXMARKETLimitOrder_

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseProtectedOrder 1
#define INCLUDE_DXMARKETProtectedOrder 1
#include "DXMARKETProtectedOrder.h"

@class DXMARKETOrderEditorModel;
@class DXOrderEntryTypeTO;
@class DXPricedOrderTemplateTO;

@interface DXMARKETLimitOrder : DXMARKETProtectedOrder

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)params
                                    withDXOrderEntryTypeTO:(DXOrderEntryTypeTO *)type;

#pragma mark Protected

- (jboolean)checkIfCorrectWithDXOrderEntryTypeTO:(DXOrderEntryTypeTO *)typeTO;

- (DXPricedOrderTemplateTO *)constructTemplateImpl;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETLimitOrder)

FOUNDATION_EXPORT void DXMARKETLimitOrder_initWithDXMARKETOrderEditorModel_withDXOrderEntryTypeTO_(DXMARKETLimitOrder *self, DXMARKETOrderEditorModel *params, DXOrderEntryTypeTO *type);

FOUNDATION_EXPORT DXMARKETLimitOrder *new_DXMARKETLimitOrder_initWithDXMARKETOrderEditorModel_withDXOrderEntryTypeTO_(DXMARKETOrderEditorModel *params, DXOrderEntryTypeTO *type) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETLimitOrder *create_DXMARKETLimitOrder_initWithDXMARKETOrderEditorModel_withDXOrderEntryTypeTO_(DXMARKETOrderEditorModel *params, DXOrderEntryTypeTO *type);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETLimitOrder)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderBaseLimitOrder DXMARKETLimitOrder;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseLimitOrder")
