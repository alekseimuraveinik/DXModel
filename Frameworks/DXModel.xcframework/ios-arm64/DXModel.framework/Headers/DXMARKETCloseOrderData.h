
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseCloseOrderData")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseCloseOrderData
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseCloseOrderData 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseCloseOrderData 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseCloseOrderData

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETCloseOrderData_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseCloseOrderData || defined(INCLUDE_DXMARKETCloseOrderData))
#define DXMARKETCloseOrderData_

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseAbstractOrder 1
#define INCLUDE_DXMARKETAbstractOrder 1
#include "DXMARKETAbstractOrder.h"

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseMarginOrderData 1
#define INCLUDE_DXMARKETMarginOrderData 1
#include "DXMARKETMarginOrderData.h"

@class DXMARKETOrderEditorModel;
@class DXOrderEntryTypeTO;
@class DXOrderTemplateTO;
@class DXOrderValidationParamsTO;
@class DXSizedOrderValidationParamsTO;

@interface DXMARKETCloseOrderData : DXMARKETAbstractOrder < DXMARKETMarginOrderData >

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)params;

- (NSString *)getMarginString;

- (DXOrderTemplateTO *)toTemplateWithBoolean:(jboolean)empty;

#pragma mark Protected

- (DXSizedOrderValidationParamsTO *)extractSizedParamsForQuantityWithDXOrderValidationParamsTO:(DXOrderValidationParamsTO *)params;

- (void)updateImplWithDXOrderValidationParamsTO:(DXOrderValidationParamsTO *)params;

- (jboolean)validateImpl;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)arg0
                                    withDXOrderEntryTypeTO:(DXOrderEntryTypeTO *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETCloseOrderData)

FOUNDATION_EXPORT void DXMARKETCloseOrderData_initWithDXMARKETOrderEditorModel_(DXMARKETCloseOrderData *self, DXMARKETOrderEditorModel *params);

FOUNDATION_EXPORT DXMARKETCloseOrderData *new_DXMARKETCloseOrderData_initWithDXMARKETOrderEditorModel_(DXMARKETOrderEditorModel *params) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETCloseOrderData *create_DXMARKETCloseOrderData_initWithDXMARKETOrderEditorModel_(DXMARKETOrderEditorModel *params);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETCloseOrderData)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderBaseCloseOrderData DXMARKETCloseOrderData;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseCloseOrderData")
