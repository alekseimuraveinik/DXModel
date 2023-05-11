
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionCloseallCloseAllPositionProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiPositionCloseallCloseAllPositionProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionCloseallCloseAllPositionProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionCloseallCloseAllPositionProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiPositionCloseallCloseAllPositionProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXCloseAllPositionProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionCloseallCloseAllPositionProvider || defined(INCLUDE_DXCloseAllPositionProvider))
#define DXCloseAllPositionProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXCloseAllPositionProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXCloseAllPositionProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXCloseAllPositionProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXCloseAllPositionProvider)

inline DXCloseAllPositionProvider *DXCloseAllPositionProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXCloseAllPositionProvider *DXCloseAllPositionProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXCloseAllPositionProvider, INSTANCE, DXCloseAllPositionProvider *)

FOUNDATION_EXPORT void DXCloseAllPositionProvider_init(DXCloseAllPositionProvider *self);

FOUNDATION_EXPORT DXCloseAllPositionProvider *new_DXCloseAllPositionProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXCloseAllPositionProvider *create_DXCloseAllPositionProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXCloseAllPositionProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiPositionCloseallCloseAllPositionProvider DXCloseAllPositionProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionCloseallCloseAllPositionProvider")
