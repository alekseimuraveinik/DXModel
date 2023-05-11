
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseMarketCashOrder")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseMarketCashOrder
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseMarketCashOrder 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseMarketCashOrder 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseMarketCashOrder

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETMarketCashOrder_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseMarketCashOrder || defined(INCLUDE_DXMARKETMarketCashOrder))
#define DXMARKETMarketCashOrder_

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseAbstractCashOrder 1
#define INCLUDE_DXMARKETAbstractCashOrder 1
#include "DXMARKETAbstractCashOrder.h"

@class DXMARKETOrderEditorModel;
@class DXOrderEntryTypeTO;
@class DXOrderTemplateTO;

@interface DXMARKETMarketCashOrder : DXMARKETAbstractCashOrder

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)model
                                    withDXOrderEntryTypeTO:(DXOrderEntryTypeTO *)orderType;

- (DXOrderTemplateTO *)toTemplateWithBoolean:(jboolean)empty;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETMarketCashOrder)

FOUNDATION_EXPORT void DXMARKETMarketCashOrder_initWithDXMARKETOrderEditorModel_withDXOrderEntryTypeTO_(DXMARKETMarketCashOrder *self, DXMARKETOrderEditorModel *model, DXOrderEntryTypeTO *orderType);

FOUNDATION_EXPORT DXMARKETMarketCashOrder *new_DXMARKETMarketCashOrder_initWithDXMARKETOrderEditorModel_withDXOrderEntryTypeTO_(DXMARKETOrderEditorModel *model, DXOrderEntryTypeTO *orderType) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETMarketCashOrder *create_DXMARKETMarketCashOrder_initWithDXMARKETOrderEditorModel_withDXOrderEntryTypeTO_(DXMARKETOrderEditorModel *model, DXOrderEntryTypeTO *orderType);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETMarketCashOrder)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderBaseMarketCashOrder DXMARKETMarketCashOrder;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseMarketCashOrder")
