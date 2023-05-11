
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserExternalLinkActionProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiUserExternalLinkActionProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserExternalLinkActionProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserExternalLinkActionProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiUserExternalLinkActionProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXExternalLinkActionProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserExternalLinkActionProvider || defined(INCLUDE_DXExternalLinkActionProvider))
#define DXExternalLinkActionProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXExternalLinkActionProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXExternalLinkActionProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXExternalLinkActionProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXExternalLinkActionProvider)

inline DXExternalLinkActionProvider *DXExternalLinkActionProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXExternalLinkActionProvider *DXExternalLinkActionProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXExternalLinkActionProvider, INSTANCE, DXExternalLinkActionProvider *)

FOUNDATION_EXPORT void DXExternalLinkActionProvider_init(DXExternalLinkActionProvider *self);

FOUNDATION_EXPORT DXExternalLinkActionProvider *new_DXExternalLinkActionProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXExternalLinkActionProvider *create_DXExternalLinkActionProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXExternalLinkActionProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiUserExternalLinkActionProvider DXExternalLinkActionProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserExternalLinkActionProvider")
