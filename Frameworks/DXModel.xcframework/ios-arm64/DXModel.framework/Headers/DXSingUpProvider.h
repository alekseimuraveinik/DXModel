
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSignupSingUpProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiSignupSingUpProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSignupSingUpProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSignupSingUpProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiSignupSingUpProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXSingUpProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSignupSingUpProvider || defined(INCLUDE_DXSingUpProvider))
#define DXSingUpProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXSingUpProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXSingUpProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXSingUpProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXSingUpProvider)

inline DXSingUpProvider *DXSingUpProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXSingUpProvider *DXSingUpProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXSingUpProvider, INSTANCE, DXSingUpProvider *)

FOUNDATION_EXPORT void DXSingUpProvider_init(DXSingUpProvider *self);

FOUNDATION_EXPORT DXSingUpProvider *new_DXSingUpProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXSingUpProvider *create_DXSingUpProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXSingUpProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiSignupSingUpProvider DXSingUpProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSignupSingUpProvider")
