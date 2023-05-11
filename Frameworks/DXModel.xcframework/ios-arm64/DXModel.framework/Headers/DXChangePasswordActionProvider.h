
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserChangePasswordActionProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiUserChangePasswordActionProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserChangePasswordActionProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserChangePasswordActionProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiUserChangePasswordActionProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXChangePasswordActionProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserChangePasswordActionProvider || defined(INCLUDE_DXChangePasswordActionProvider))
#define DXChangePasswordActionProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXChangePasswordActionProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXChangePasswordActionProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXChangePasswordActionProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXChangePasswordActionProvider)

inline DXChangePasswordActionProvider *DXChangePasswordActionProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChangePasswordActionProvider *DXChangePasswordActionProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChangePasswordActionProvider, INSTANCE, DXChangePasswordActionProvider *)

FOUNDATION_EXPORT void DXChangePasswordActionProvider_init(DXChangePasswordActionProvider *self);

FOUNDATION_EXPORT DXChangePasswordActionProvider *new_DXChangePasswordActionProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXChangePasswordActionProvider *create_DXChangePasswordActionProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXChangePasswordActionProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiUserChangePasswordActionProvider DXChangePasswordActionProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserChangePasswordActionProvider")
