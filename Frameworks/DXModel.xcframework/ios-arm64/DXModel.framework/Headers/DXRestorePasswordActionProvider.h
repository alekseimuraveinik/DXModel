
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserRestorePasswordActionProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiUserRestorePasswordActionProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserRestorePasswordActionProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserRestorePasswordActionProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiUserRestorePasswordActionProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXRestorePasswordActionProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserRestorePasswordActionProvider || defined(INCLUDE_DXRestorePasswordActionProvider))
#define DXRestorePasswordActionProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXRestorePasswordActionProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXRestorePasswordActionProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXRestorePasswordActionProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXRestorePasswordActionProvider)

inline DXRestorePasswordActionProvider *DXRestorePasswordActionProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXRestorePasswordActionProvider *DXRestorePasswordActionProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXRestorePasswordActionProvider, INSTANCE, DXRestorePasswordActionProvider *)

FOUNDATION_EXPORT void DXRestorePasswordActionProvider_init(DXRestorePasswordActionProvider *self);

FOUNDATION_EXPORT DXRestorePasswordActionProvider *new_DXRestorePasswordActionProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXRestorePasswordActionProvider *create_DXRestorePasswordActionProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXRestorePasswordActionProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiUserRestorePasswordActionProvider DXRestorePasswordActionProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserRestorePasswordActionProvider")
