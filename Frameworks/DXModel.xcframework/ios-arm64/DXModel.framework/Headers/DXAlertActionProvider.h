
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertActionsAlertActionProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAlertActionsAlertActionProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertActionsAlertActionProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertActionsAlertActionProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAlertActionsAlertActionProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAlertActionProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertActionsAlertActionProvider || defined(INCLUDE_DXAlertActionProvider))
#define DXAlertActionProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXAlertActionProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXAlertActionProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXAlertActionProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXAlertActionProvider)

inline DXAlertActionProvider *DXAlertActionProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAlertActionProvider *DXAlertActionProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAlertActionProvider, INSTANCE, DXAlertActionProvider *)

FOUNDATION_EXPORT void DXAlertActionProvider_init(DXAlertActionProvider *self);

FOUNDATION_EXPORT DXAlertActionProvider *new_DXAlertActionProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAlertActionProvider *create_DXAlertActionProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXAlertActionProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiAlertActionsAlertActionProvider DXAlertActionProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertActionsAlertActionProvider")
