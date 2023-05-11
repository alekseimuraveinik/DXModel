
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionClosePositionActionProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiPositionClosePositionActionProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionClosePositionActionProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionClosePositionActionProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiPositionClosePositionActionProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXClosePositionActionProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionClosePositionActionProvider || defined(INCLUDE_DXClosePositionActionProvider))
#define DXClosePositionActionProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXClosePositionActionProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXClosePositionActionProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXClosePositionActionProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXClosePositionActionProvider)

inline DXClosePositionActionProvider *DXClosePositionActionProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXClosePositionActionProvider *DXClosePositionActionProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXClosePositionActionProvider, INSTANCE, DXClosePositionActionProvider *)

FOUNDATION_EXPORT void DXClosePositionActionProvider_init(DXClosePositionActionProvider *self);

FOUNDATION_EXPORT DXClosePositionActionProvider *new_DXClosePositionActionProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXClosePositionActionProvider *create_DXClosePositionActionProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXClosePositionActionProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiPositionClosePositionActionProvider DXClosePositionActionProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionClosePositionActionProvider")
