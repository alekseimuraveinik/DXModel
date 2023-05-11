
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseProspectiveCostValueListener")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseProspectiveCostValueListener
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseProspectiveCostValueListener 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseProspectiveCostValueListener 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseProspectiveCostValueListener

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETProspectiveCostValueListener_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseProspectiveCostValueListener || defined(INCLUDE_DXMARKETProspectiveCostValueListener))
#define DXMARKETProspectiveCostValueListener_

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseValueOrderEntryValueListener 1
#define INCLUDE_DXMARKETOrderEntryValueListener 1
#include "DXMARKETOrderEntryValueListener.h"

@class DXMARKETOrderEditorModel;
@class DXMARKETValidationInfo;
@protocol DXMARKETCashOrderFieldData;

@interface DXMARKETProspectiveCostValueListener : NSObject < DXMARKETOrderEntryValueListener >

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)model
                            withDXMARKETCashOrderFieldData:(id<DXMARKETCashOrderFieldData>)cashOrderFieldData;

- (void)errorUpdatedWithDXMARKETValidationInfo:(DXMARKETValidationInfo *)newError;

- (void)valueUpdatedWithLong:(jlong)newValue;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETProspectiveCostValueListener)

FOUNDATION_EXPORT void DXMARKETProspectiveCostValueListener_initWithDXMARKETOrderEditorModel_withDXMARKETCashOrderFieldData_(DXMARKETProspectiveCostValueListener *self, DXMARKETOrderEditorModel *model, id<DXMARKETCashOrderFieldData> cashOrderFieldData);

FOUNDATION_EXPORT DXMARKETProspectiveCostValueListener *new_DXMARKETProspectiveCostValueListener_initWithDXMARKETOrderEditorModel_withDXMARKETCashOrderFieldData_(DXMARKETOrderEditorModel *model, id<DXMARKETCashOrderFieldData> cashOrderFieldData) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETProspectiveCostValueListener *create_DXMARKETProspectiveCostValueListener_initWithDXMARKETOrderEditorModel_withDXMARKETCashOrderFieldData_(DXMARKETOrderEditorModel *model, id<DXMARKETCashOrderFieldData> cashOrderFieldData);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETProspectiveCostValueListener)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderBaseProspectiveCostValueListener DXMARKETProspectiveCostValueListener;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseProspectiveCostValueListener")
