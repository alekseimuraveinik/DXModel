
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSettingsUpdateUserSettingsActionProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiSettingsUpdateUserSettingsActionProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSettingsUpdateUserSettingsActionProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSettingsUpdateUserSettingsActionProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiSettingsUpdateUserSettingsActionProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXUpdateUserSettingsActionProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSettingsUpdateUserSettingsActionProvider || defined(INCLUDE_DXUpdateUserSettingsActionProvider))
#define DXUpdateUserSettingsActionProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXUpdateUserSettingsActionProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXUpdateUserSettingsActionProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXUpdateUserSettingsActionProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXUpdateUserSettingsActionProvider)

inline DXUpdateUserSettingsActionProvider *DXUpdateUserSettingsActionProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXUpdateUserSettingsActionProvider *DXUpdateUserSettingsActionProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXUpdateUserSettingsActionProvider, INSTANCE, DXUpdateUserSettingsActionProvider *)

FOUNDATION_EXPORT void DXUpdateUserSettingsActionProvider_init(DXUpdateUserSettingsActionProvider *self);

FOUNDATION_EXPORT DXUpdateUserSettingsActionProvider *new_DXUpdateUserSettingsActionProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXUpdateUserSettingsActionProvider *create_DXUpdateUserSettingsActionProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXUpdateUserSettingsActionProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiSettingsUpdateUserSettingsActionProvider DXUpdateUserSettingsActionProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSettingsUpdateUserSettingsActionProvider")
