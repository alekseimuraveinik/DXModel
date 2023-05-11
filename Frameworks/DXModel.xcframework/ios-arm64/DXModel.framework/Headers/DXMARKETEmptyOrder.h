
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseEmptyOrder")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseEmptyOrder
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseEmptyOrder 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseEmptyOrder 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseEmptyOrder

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETEmptyOrder_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseEmptyOrder || defined(INCLUDE_DXMARKETEmptyOrder))
#define DXMARKETEmptyOrder_

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseAbstractOrder 1
#define INCLUDE_DXMARKETAbstractOrder 1
#include "DXMARKETAbstractOrder.h"

@class DXMARKETOrderEditorModel;
@class DXOrderEntryTypeTO;
@class DXOrderTemplateTO;
@class DXOrderValidationParamsTO;
@class DXSizedOrderValidationParamsTO;

@interface DXMARKETEmptyOrder : DXMARKETAbstractOrder

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)model;

- (DXOrderTemplateTO *)toTemplateWithBoolean:(jboolean)empty;

#pragma mark Protected

- (DXSizedOrderValidationParamsTO *)extractSizedParamsForQuantityWithDXOrderValidationParamsTO:(DXOrderValidationParamsTO *)params;

- (void)updateImplWithDXOrderValidationParamsTO:(DXOrderValidationParamsTO *)params;

- (jboolean)validateImpl;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)arg0
                                    withDXOrderEntryTypeTO:(DXOrderEntryTypeTO *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETEmptyOrder)

FOUNDATION_EXPORT void DXMARKETEmptyOrder_initWithDXMARKETOrderEditorModel_(DXMARKETEmptyOrder *self, DXMARKETOrderEditorModel *model);

FOUNDATION_EXPORT DXMARKETEmptyOrder *new_DXMARKETEmptyOrder_initWithDXMARKETOrderEditorModel_(DXMARKETOrderEditorModel *model) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETEmptyOrder *create_DXMARKETEmptyOrder_initWithDXMARKETOrderEditorModel_(DXMARKETOrderEditorModel *model);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETEmptyOrder)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderBaseEmptyOrder DXMARKETEmptyOrder;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseEmptyOrder")
