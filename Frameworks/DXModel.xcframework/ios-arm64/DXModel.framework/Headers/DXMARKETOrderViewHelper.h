
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOrderViewHelper")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderOrderViewHelper
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOrderViewHelper 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOrderViewHelper 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderOrderViewHelper

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETOrderViewHelper_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOrderViewHelper || defined(INCLUDE_DXMARKETOrderViewHelper))
#define DXMARKETOrderViewHelper_

@class DXOrderGroupTO;
@class DXOrderStatusEnum;

@protocol DXMARKETOrderViewHelper < JavaObject >

- (jint)getPageForOrderStatusWithDXOrderStatusEnum:(DXOrderStatusEnum *)status;

- (jint)getPageForOrderGroupWithDXOrderGroupTO:(DXOrderGroupTO *)group;

@end

@interface DXMARKETOrderViewHelper : NSObject
@property (readonly, class) jint PAGE_INVALID NS_SWIFT_NAME(PAGE_INVALID);
@property (readonly, class) jint PAGE_CANCELED NS_SWIFT_NAME(PAGE_CANCELED);
@property (readonly, class) jint PAGE_WORKING NS_SWIFT_NAME(PAGE_WORKING);
@property (readonly, class) jint PAGE_FILLED NS_SWIFT_NAME(PAGE_FILLED);
@property (readonly, class) jint PAGE_REJECTED NS_SWIFT_NAME(PAGE_REJECTED);
@property (readonly, class) jint PAGE_PROCESSING NS_SWIFT_NAME(PAGE_PROCESSING);
@property (readonly, class) jint PAGE_PENDING NS_SWIFT_NAME(PAGE_PENDING);

+ (jint)PAGE_INVALID;

+ (jint)PAGE_CANCELED;

+ (jint)PAGE_WORKING;

+ (jint)PAGE_FILLED;

+ (jint)PAGE_REJECTED;

+ (jint)PAGE_PROCESSING;

+ (jint)PAGE_PENDING;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETOrderViewHelper)

inline jint DXMARKETOrderViewHelper_get_PAGE_INVALID(void);
#define DXMARKETOrderViewHelper_PAGE_INVALID -1
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETOrderViewHelper, PAGE_INVALID, jint)

inline jint DXMARKETOrderViewHelper_get_PAGE_CANCELED(void);
#define DXMARKETOrderViewHelper_PAGE_CANCELED 1
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETOrderViewHelper, PAGE_CANCELED, jint)

inline jint DXMARKETOrderViewHelper_get_PAGE_WORKING(void);
#define DXMARKETOrderViewHelper_PAGE_WORKING 2
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETOrderViewHelper, PAGE_WORKING, jint)

inline jint DXMARKETOrderViewHelper_get_PAGE_FILLED(void);
#define DXMARKETOrderViewHelper_PAGE_FILLED 4
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETOrderViewHelper, PAGE_FILLED, jint)

inline jint DXMARKETOrderViewHelper_get_PAGE_REJECTED(void);
#define DXMARKETOrderViewHelper_PAGE_REJECTED 8
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETOrderViewHelper, PAGE_REJECTED, jint)

inline jint DXMARKETOrderViewHelper_get_PAGE_PROCESSING(void);
#define DXMARKETOrderViewHelper_PAGE_PROCESSING 16
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETOrderViewHelper, PAGE_PROCESSING, jint)

inline jint DXMARKETOrderViewHelper_get_PAGE_PENDING(void);
#define DXMARKETOrderViewHelper_PAGE_PENDING 32
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETOrderViewHelper, PAGE_PENDING, jint)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETOrderViewHelper)

#define ComDevexpertsDxmarketClientModelOrderOrderViewHelper DXMARKETOrderViewHelper

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOrderViewHelper")
