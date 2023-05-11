
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseCommissionValueListener")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseCommissionValueListener
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseCommissionValueListener 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseCommissionValueListener 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseCommissionValueListener

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETCommissionValueListener_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseCommissionValueListener || defined(INCLUDE_DXMARKETCommissionValueListener))
#define DXMARKETCommissionValueListener_

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseValueOrderEntryValueListener 1
#define INCLUDE_DXMARKETOrderEntryValueListener 1
#include "DXMARKETOrderEntryValueListener.h"

@class DXMARKETOrderEditorModel;
@class DXMARKETValidationInfo;
@protocol DXMARKETCashOrderFieldData;

@interface DXMARKETCommissionValueListener : NSObject < DXMARKETOrderEntryValueListener >

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)model
                            withDXMARKETCashOrderFieldData:(id<DXMARKETCashOrderFieldData>)cashOrderFieldData;

- (void)errorUpdatedWithDXMARKETValidationInfo:(DXMARKETValidationInfo *)newError;

- (void)valueUpdatedWithLong:(jlong)newValue;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETCommissionValueListener)

FOUNDATION_EXPORT void DXMARKETCommissionValueListener_initWithDXMARKETOrderEditorModel_withDXMARKETCashOrderFieldData_(DXMARKETCommissionValueListener *self, DXMARKETOrderEditorModel *model, id<DXMARKETCashOrderFieldData> cashOrderFieldData);

FOUNDATION_EXPORT DXMARKETCommissionValueListener *new_DXMARKETCommissionValueListener_initWithDXMARKETOrderEditorModel_withDXMARKETCashOrderFieldData_(DXMARKETOrderEditorModel *model, id<DXMARKETCashOrderFieldData> cashOrderFieldData) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETCommissionValueListener *create_DXMARKETCommissionValueListener_initWithDXMARKETOrderEditorModel_withDXMARKETCashOrderFieldData_(DXMARKETOrderEditorModel *model, id<DXMARKETCashOrderFieldData> cashOrderFieldData);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETCommissionValueListener)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderBaseCommissionValueListener DXMARKETCommissionValueListener;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseCommissionValueListener")
