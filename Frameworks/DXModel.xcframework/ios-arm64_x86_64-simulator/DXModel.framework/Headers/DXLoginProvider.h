
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationLoginProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAuthenticationLoginProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationLoginProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationLoginProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAuthenticationLoginProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXLoginProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationLoginProvider || defined(INCLUDE_DXLoginProvider))
#define DXLoginProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXLoginProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXLoginProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXLoginProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXLoginProvider)

inline DXLoginProvider *DXLoginProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXLoginProvider *DXLoginProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXLoginProvider, INSTANCE, DXLoginProvider *)

FOUNDATION_EXPORT void DXLoginProvider_init(DXLoginProvider *self);

FOUNDATION_EXPORT DXLoginProvider *new_DXLoginProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXLoginProvider *create_DXLoginProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXLoginProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiAuthenticationLoginProvider DXLoginProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationLoginProvider")
