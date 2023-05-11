
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountChangeActionProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAccountAccountChangeActionProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountChangeActionProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountChangeActionProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAccountAccountChangeActionProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAccountChangeActionProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountChangeActionProvider || defined(INCLUDE_DXAccountChangeActionProvider))
#define DXAccountChangeActionProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXAccountChangeActionProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXAccountChangeActionProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXAccountChangeActionProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXAccountChangeActionProvider)

inline DXAccountChangeActionProvider *DXAccountChangeActionProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAccountChangeActionProvider *DXAccountChangeActionProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAccountChangeActionProvider, INSTANCE, DXAccountChangeActionProvider *)

FOUNDATION_EXPORT void DXAccountChangeActionProvider_init(DXAccountChangeActionProvider *self);

FOUNDATION_EXPORT DXAccountChangeActionProvider *new_DXAccountChangeActionProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAccountChangeActionProvider *create_DXAccountChangeActionProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXAccountChangeActionProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiAccountAccountChangeActionProvider DXAccountChangeActionProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountChangeActionProvider")
