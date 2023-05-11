
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserUserInfoProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiUserUserInfoProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserUserInfoProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserUserInfoProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiUserUserInfoProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXUserInfoProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserUserInfoProvider || defined(INCLUDE_DXUserInfoProvider))
#define DXUserInfoProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXUserInfoProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXUserInfoProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXUserInfoProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXUserInfoProvider)

inline DXUserInfoProvider *DXUserInfoProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXUserInfoProvider *DXUserInfoProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXUserInfoProvider, INSTANCE, DXUserInfoProvider *)

FOUNDATION_EXPORT void DXUserInfoProvider_init(DXUserInfoProvider *self);

FOUNDATION_EXPORT DXUserInfoProvider *new_DXUserInfoProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXUserInfoProvider *create_DXUserInfoProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXUserInfoProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiUserUserInfoProvider DXUserInfoProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserUserInfoProvider")
