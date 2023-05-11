
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertAlertProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAlertAlertProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertAlertProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertAlertProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAlertAlertProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAlertProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertAlertProvider || defined(INCLUDE_DXAlertProvider))
#define DXAlertProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXAlertProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXAlertProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXAlertProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXAlertProvider)

inline DXAlertProvider *DXAlertProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAlertProvider *DXAlertProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAlertProvider, INSTANCE, DXAlertProvider *)

FOUNDATION_EXPORT void DXAlertProvider_init(DXAlertProvider *self);

FOUNDATION_EXPORT DXAlertProvider *new_DXAlertProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAlertProvider *create_DXAlertProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXAlertProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiAlertAlertProvider DXAlertProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertAlertProvider")
