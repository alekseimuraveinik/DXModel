
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseBaseOrderViewHelper")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseBaseOrderViewHelper
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseBaseOrderViewHelper 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseBaseOrderViewHelper 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseBaseOrderViewHelper

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETBaseOrderViewHelper_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseBaseOrderViewHelper || defined(INCLUDE_DXMARKETBaseOrderViewHelper))
#define DXMARKETBaseOrderViewHelper_

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderOrderViewHelper 1
#define INCLUDE_DXMARKETOrderViewHelper 1
#include "DXMARKETOrderViewHelper.h"

@class DXOrderGroupTO;
@class DXOrderStatusEnum;
@class IOSObjectArray;

@interface DXMARKETBaseOrderViewHelper : NSObject < DXMARKETOrderViewHelper >

#pragma mark Public

- (instancetype __nonnull)init;

+ (jboolean)checkWithDXOrderStatusEnum:(DXOrderStatusEnum *)status
            withDXOrderStatusEnumArray:(IOSObjectArray *)enumz;

- (jint)getPageForOrderGroupWithDXOrderGroupTO:(DXOrderGroupTO *)group;

- (jint)getPageForOrderStatusWithDXOrderStatusEnum:(DXOrderStatusEnum *)status;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETBaseOrderViewHelper)

FOUNDATION_EXPORT void DXMARKETBaseOrderViewHelper_init(DXMARKETBaseOrderViewHelper *self);

FOUNDATION_EXPORT DXMARKETBaseOrderViewHelper *new_DXMARKETBaseOrderViewHelper_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETBaseOrderViewHelper *create_DXMARKETBaseOrderViewHelper_init(void);

FOUNDATION_EXPORT jboolean DXMARKETBaseOrderViewHelper_checkWithDXOrderStatusEnum_withDXOrderStatusEnumArray_(DXOrderStatusEnum *status, IOSObjectArray *enumz);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETBaseOrderViewHelper)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderBaseBaseOrderViewHelper DXMARKETBaseOrderViewHelper;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseBaseOrderViewHelper")
