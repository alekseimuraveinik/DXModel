
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationPortalLinksProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAuthenticationPortalLinksProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationPortalLinksProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationPortalLinksProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAuthenticationPortalLinksProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXPortalLinksProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationPortalLinksProvider || defined(INCLUDE_DXPortalLinksProvider))
#define DXPortalLinksProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXPortalLinksProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXPortalLinksProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXPortalLinksProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXPortalLinksProvider)

inline DXPortalLinksProvider *DXPortalLinksProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXPortalLinksProvider *DXPortalLinksProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXPortalLinksProvider, INSTANCE, DXPortalLinksProvider *)

FOUNDATION_EXPORT void DXPortalLinksProvider_init(DXPortalLinksProvider *self);

FOUNDATION_EXPORT DXPortalLinksProvider *new_DXPortalLinksProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXPortalLinksProvider *create_DXPortalLinksProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXPortalLinksProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiAuthenticationPortalLinksProvider DXPortalLinksProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationPortalLinksProvider")
