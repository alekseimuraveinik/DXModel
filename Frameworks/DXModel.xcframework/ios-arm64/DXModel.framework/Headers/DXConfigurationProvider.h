
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiIntegrationConfigConfigurationProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiIntegrationConfigConfigurationProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiIntegrationConfigConfigurationProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiIntegrationConfigConfigurationProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiIntegrationConfigConfigurationProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXConfigurationProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiIntegrationConfigConfigurationProvider || defined(INCLUDE_DXConfigurationProvider))
#define DXConfigurationProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXConfigurationProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXConfigurationProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXConfigurationProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXConfigurationProvider)

inline DXConfigurationProvider *DXConfigurationProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXConfigurationProvider *DXConfigurationProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXConfigurationProvider, INSTANCE, DXConfigurationProvider *)

FOUNDATION_EXPORT void DXConfigurationProvider_init(DXConfigurationProvider *self);

FOUNDATION_EXPORT DXConfigurationProvider *new_DXConfigurationProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXConfigurationProvider *create_DXConfigurationProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXConfigurationProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiIntegrationConfigConfigurationProvider DXConfigurationProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiIntegrationConfigConfigurationProvider")
