
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseMarginValueListener")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseMarginValueListener
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseMarginValueListener 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseMarginValueListener 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseMarginValueListener

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETMarginValueListener_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseMarginValueListener || defined(INCLUDE_DXMARKETMarginValueListener))
#define DXMARKETMarginValueListener_

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseValueOrderEntryValueListener 1
#define INCLUDE_DXMARKETOrderEntryValueListener 1
#include "DXMARKETOrderEntryValueListener.h"

@class DXMARKETOrderEditorModel;
@class DXMARKETValidationInfo;
@protocol DXMARKETMarginOrderData;

@interface DXMARKETMarginValueListener : NSObject < DXMARKETOrderEntryValueListener >

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)model
                               withDXMARKETMarginOrderData:(id<DXMARKETMarginOrderData>)marginOrderData;

- (void)errorUpdatedWithDXMARKETValidationInfo:(DXMARKETValidationInfo *)newError;

- (void)valueUpdatedWithLong:(jlong)newValue;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETMarginValueListener)

FOUNDATION_EXPORT void DXMARKETMarginValueListener_initWithDXMARKETOrderEditorModel_withDXMARKETMarginOrderData_(DXMARKETMarginValueListener *self, DXMARKETOrderEditorModel *model, id<DXMARKETMarginOrderData> marginOrderData);

FOUNDATION_EXPORT DXMARKETMarginValueListener *new_DXMARKETMarginValueListener_initWithDXMARKETOrderEditorModel_withDXMARKETMarginOrderData_(DXMARKETOrderEditorModel *model, id<DXMARKETMarginOrderData> marginOrderData) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETMarginValueListener *create_DXMARKETMarginValueListener_initWithDXMARKETOrderEditorModel_withDXMARKETMarginOrderData_(DXMARKETOrderEditorModel *model, id<DXMARKETMarginOrderData> marginOrderData);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETMarginValueListener)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderBaseMarginValueListener DXMARKETMarginValueListener;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseMarginValueListener")
