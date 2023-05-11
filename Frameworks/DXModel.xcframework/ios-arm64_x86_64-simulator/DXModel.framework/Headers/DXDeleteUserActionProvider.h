
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserDeleteUserActionProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiUserDeleteUserActionProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserDeleteUserActionProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserDeleteUserActionProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiUserDeleteUserActionProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXDeleteUserActionProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserDeleteUserActionProvider || defined(INCLUDE_DXDeleteUserActionProvider))
#define DXDeleteUserActionProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXDeleteUserActionProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXDeleteUserActionProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXDeleteUserActionProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXDeleteUserActionProvider)

inline DXDeleteUserActionProvider *DXDeleteUserActionProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXDeleteUserActionProvider *DXDeleteUserActionProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXDeleteUserActionProvider, INSTANCE, DXDeleteUserActionProvider *)

FOUNDATION_EXPORT void DXDeleteUserActionProvider_init(DXDeleteUserActionProvider *self);

FOUNDATION_EXPORT DXDeleteUserActionProvider *new_DXDeleteUserActionProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXDeleteUserActionProvider *create_DXDeleteUserActionProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXDeleteUserActionProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiUserDeleteUserActionProvider DXDeleteUserActionProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserDeleteUserActionProvider")
