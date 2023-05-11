
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseOcoOrder")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseOcoOrder
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseOcoOrder 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseOcoOrder 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseOcoOrder

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETOcoOrder_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseOcoOrder || defined(INCLUDE_DXMARKETOcoOrder))
#define DXMARKETOcoOrder_

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseAbstractOrder 1
#define INCLUDE_DXMARKETAbstractOrder 1
#include "DXMARKETAbstractOrder.h"

@class DXMARKETOrderEditorModel;
@class DXMARKETPriceOrder;
@class DXOrderEntryTypeTO;
@class DXOrderTemplateTO;
@class DXOrderValidationDetailsTO;
@class DXOrderValidationParamsTO;
@class DXSizedOrderValidationParamsTO;
@protocol DXMARKETOrderData;
@protocol JavaUtilList;

@interface DXMARKETOcoOrder : DXMARKETAbstractOrder

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)model
                                    withDXOrderEntryTypeTO:(DXOrderEntryTypeTO *)orderType
                                                   withInt:(jint)childrenCount;

- (jboolean)changeChildOrderTypeWithInt:(jint)i
                 withDXOrderEntryTypeTO:(DXOrderEntryTypeTO *)type;

- (DXMARKETPriceOrder *)getChildOrderWithInt:(jint)i;

- (id<JavaUtilList>)getChildOrderTypesWithInt:(jint)i;

- (jint)getOrdersCount;

- (void)retainPreviousOrderStateWithDXMARKETOrderData:(id<DXMARKETOrderData>)prevOrder;

- (DXOrderTemplateTO *)toTemplateWithBoolean:(jboolean)empty;

#pragma mark Protected

- (jboolean)checkIfCorrectWithDXOrderEntryTypeTO:(DXOrderEntryTypeTO *)typeTO;

- (DXSizedOrderValidationParamsTO *)extractSizedParamsForQuantityWithDXOrderValidationParamsTO:(DXOrderValidationParamsTO *)params;

- (void)onQuantityChanged;

- (void)refreshPrimaryValues;

- (void)updateImplWithDXOrderValidationParamsTO:(DXOrderValidationParamsTO *)params;

- (void)updateInstrumentDataWithDXOrderValidationDetailsTO:(DXOrderValidationDetailsTO *)details;

- (jboolean)validateImpl;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)arg0
                                    withDXOrderEntryTypeTO:(DXOrderEntryTypeTO *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETOcoOrder)

FOUNDATION_EXPORT void DXMARKETOcoOrder_initWithDXMARKETOrderEditorModel_withDXOrderEntryTypeTO_withInt_(DXMARKETOcoOrder *self, DXMARKETOrderEditorModel *model, DXOrderEntryTypeTO *orderType, jint childrenCount);

FOUNDATION_EXPORT DXMARKETOcoOrder *new_DXMARKETOcoOrder_initWithDXMARKETOrderEditorModel_withDXOrderEntryTypeTO_withInt_(DXMARKETOrderEditorModel *model, DXOrderEntryTypeTO *orderType, jint childrenCount) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETOcoOrder *create_DXMARKETOcoOrder_initWithDXMARKETOrderEditorModel_withDXOrderEntryTypeTO_withInt_(DXMARKETOrderEditorModel *model, DXOrderEntryTypeTO *orderType, jint childrenCount);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETOcoOrder)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderBaseOcoOrder DXMARKETOcoOrder;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseOcoOrder")
