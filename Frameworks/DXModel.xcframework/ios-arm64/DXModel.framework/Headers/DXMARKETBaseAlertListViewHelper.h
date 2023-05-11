
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelAlertBaseBaseAlertListViewHelper")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelAlertBaseBaseAlertListViewHelper
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelAlertBaseBaseAlertListViewHelper 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelAlertBaseBaseAlertListViewHelper 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelAlertBaseBaseAlertListViewHelper

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETBaseAlertListViewHelper_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelAlertBaseBaseAlertListViewHelper || defined(INCLUDE_DXMARKETBaseAlertListViewHelper))
#define DXMARKETBaseAlertListViewHelper_

#define RESTRICT_ComDevexpertsDxmarketClientModelAlertAlertListViewHelper 1
#define INCLUDE_DXMARKETAlertListViewHelper 1
#include "DXMARKETAlertListViewHelper.h"

@class DXAlertStatusEnum;

@interface DXMARKETBaseAlertListViewHelper : NSObject < DXMARKETAlertListViewHelper >

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getActionsForAlertStatusWithDXAlertStatusEnum:(DXAlertStatusEnum *)status;

- (jint)getPageForAlertStatusWithDXAlertStatusEnum:(DXAlertStatusEnum *)status;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETBaseAlertListViewHelper)

FOUNDATION_EXPORT void DXMARKETBaseAlertListViewHelper_init(DXMARKETBaseAlertListViewHelper *self);

FOUNDATION_EXPORT DXMARKETBaseAlertListViewHelper *new_DXMARKETBaseAlertListViewHelper_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETBaseAlertListViewHelper *create_DXMARKETBaseAlertListViewHelper_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETBaseAlertListViewHelper)

@compatibility_alias ComDevexpertsDxmarketClientModelAlertBaseBaseAlertListViewHelper DXMARKETBaseAlertListViewHelper;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelAlertBaseBaseAlertListViewHelper")
