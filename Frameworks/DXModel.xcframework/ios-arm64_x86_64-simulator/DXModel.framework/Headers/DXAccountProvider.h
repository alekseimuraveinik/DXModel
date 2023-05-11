
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAccountAccountProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAccountAccountProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAccountProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountProvider || defined(INCLUDE_DXAccountProvider))
#define DXAccountProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXAccountProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXAccountProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXAccountProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXAccountProvider)

inline DXAccountProvider *DXAccountProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAccountProvider *DXAccountProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAccountProvider, INSTANCE, DXAccountProvider *)

FOUNDATION_EXPORT void DXAccountProvider_init(DXAccountProvider *self);

FOUNDATION_EXPORT DXAccountProvider *new_DXAccountProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAccountProvider *create_DXAccountProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXAccountProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiAccountAccountProvider DXAccountProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountProvider")
