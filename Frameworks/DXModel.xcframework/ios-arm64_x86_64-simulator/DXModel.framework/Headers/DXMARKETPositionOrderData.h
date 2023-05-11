
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBasePositionOrderData")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBasePositionOrderData
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBasePositionOrderData 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBasePositionOrderData 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBasePositionOrderData

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETPositionOrderData_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBasePositionOrderData || defined(INCLUDE_DXMARKETPositionOrderData))
#define DXMARKETPositionOrderData_

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseProtectedOrder 1
#define INCLUDE_DXMARKETProtectedOrder 1
#include "DXMARKETProtectedOrder.h"

@class DXMARKETOrderEditorModel;
@class DXOrderEntryTypeTO;
@class DXPricedOrderTemplateTO;

@interface DXMARKETPositionOrderData : DXMARKETProtectedOrder

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)params;

#pragma mark Protected

- (DXPricedOrderTemplateTO *)constructTemplateImpl;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)arg0
                                    withDXOrderEntryTypeTO:(DXOrderEntryTypeTO *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETPositionOrderData)

FOUNDATION_EXPORT void DXMARKETPositionOrderData_initWithDXMARKETOrderEditorModel_(DXMARKETPositionOrderData *self, DXMARKETOrderEditorModel *params);

FOUNDATION_EXPORT DXMARKETPositionOrderData *new_DXMARKETPositionOrderData_initWithDXMARKETOrderEditorModel_(DXMARKETOrderEditorModel *params) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETPositionOrderData *create_DXMARKETPositionOrderData_initWithDXMARKETOrderEditorModel_(DXMARKETOrderEditorModel *params);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETPositionOrderData)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderBasePositionOrderData DXMARKETPositionOrderData;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBasePositionOrderData")
