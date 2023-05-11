
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelAlertAlertListViewHelper")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelAlertAlertListViewHelper
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelAlertAlertListViewHelper 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelAlertAlertListViewHelper 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelAlertAlertListViewHelper

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETAlertListViewHelper_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelAlertAlertListViewHelper || defined(INCLUDE_DXMARKETAlertListViewHelper))
#define DXMARKETAlertListViewHelper_

@class DXAlertStatusEnum;

@protocol DXMARKETAlertListViewHelper < JavaObject >

- (jint)getPageForAlertStatusWithDXAlertStatusEnum:(DXAlertStatusEnum *)status;

- (jint)getActionsForAlertStatusWithDXAlertStatusEnum:(DXAlertStatusEnum *)status;

@end

@interface DXMARKETAlertListViewHelper : NSObject
@property (readonly, class) jint PAGE_INVALID NS_SWIFT_NAME(PAGE_INVALID);
@property (readonly, class) jint PAGE_ACTIVE NS_SWIFT_NAME(PAGE_ACTIVE);
@property (readonly, class) jint PAGE_TRIGGERED NS_SWIFT_NAME(PAGE_TRIGGERED);
@property (readonly, class) jint PAGE_EXPIRED NS_SWIFT_NAME(PAGE_EXPIRED);
@property (readonly, class) jint PAGE_CANCELED NS_SWIFT_NAME(PAGE_CANCELED);
@property (readonly, class) jint ACTION_DUPLICATE NS_SWIFT_NAME(ACTION_DUPLICATE);
@property (readonly, class) jint ACTION_CANCEL NS_SWIFT_NAME(ACTION_CANCEL);
@property (readonly, class) jint ACTION_CUSTOMIZE NS_SWIFT_NAME(ACTION_CUSTOMIZE);

+ (jint)PAGE_INVALID;

+ (jint)PAGE_ACTIVE;

+ (jint)PAGE_TRIGGERED;

+ (jint)PAGE_EXPIRED;

+ (jint)PAGE_CANCELED;

+ (jint)ACTION_DUPLICATE;

+ (jint)ACTION_CANCEL;

+ (jint)ACTION_CUSTOMIZE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETAlertListViewHelper)

inline jint DXMARKETAlertListViewHelper_get_PAGE_INVALID(void);
#define DXMARKETAlertListViewHelper_PAGE_INVALID -1
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETAlertListViewHelper, PAGE_INVALID, jint)

inline jint DXMARKETAlertListViewHelper_get_PAGE_ACTIVE(void);
#define DXMARKETAlertListViewHelper_PAGE_ACTIVE 1
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETAlertListViewHelper, PAGE_ACTIVE, jint)

inline jint DXMARKETAlertListViewHelper_get_PAGE_TRIGGERED(void);
#define DXMARKETAlertListViewHelper_PAGE_TRIGGERED 2
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETAlertListViewHelper, PAGE_TRIGGERED, jint)

inline jint DXMARKETAlertListViewHelper_get_PAGE_EXPIRED(void);
#define DXMARKETAlertListViewHelper_PAGE_EXPIRED 4
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETAlertListViewHelper, PAGE_EXPIRED, jint)

inline jint DXMARKETAlertListViewHelper_get_PAGE_CANCELED(void);
#define DXMARKETAlertListViewHelper_PAGE_CANCELED 8
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETAlertListViewHelper, PAGE_CANCELED, jint)

inline jint DXMARKETAlertListViewHelper_get_ACTION_DUPLICATE(void);
#define DXMARKETAlertListViewHelper_ACTION_DUPLICATE 1
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETAlertListViewHelper, ACTION_DUPLICATE, jint)

inline jint DXMARKETAlertListViewHelper_get_ACTION_CANCEL(void);
#define DXMARKETAlertListViewHelper_ACTION_CANCEL 2
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETAlertListViewHelper, ACTION_CANCEL, jint)

inline jint DXMARKETAlertListViewHelper_get_ACTION_CUSTOMIZE(void);
#define DXMARKETAlertListViewHelper_ACTION_CUSTOMIZE 4
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETAlertListViewHelper, ACTION_CUSTOMIZE, jint)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETAlertListViewHelper)

#define ComDevexpertsDxmarketClientModelAlertAlertListViewHelper DXMARKETAlertListViewHelper

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelAlertAlertListViewHelper")
