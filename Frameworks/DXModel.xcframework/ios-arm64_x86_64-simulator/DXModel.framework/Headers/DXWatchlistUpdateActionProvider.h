
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistUpdateActionProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistUpdateActionProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistUpdateActionProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistUpdateActionProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistUpdateActionProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXWatchlistUpdateActionProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistUpdateActionProvider || defined(INCLUDE_DXWatchlistUpdateActionProvider))
#define DXWatchlistUpdateActionProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXWatchlistUpdateActionProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXWatchlistUpdateActionProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXWatchlistUpdateActionProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXWatchlistUpdateActionProvider)

inline DXWatchlistUpdateActionProvider *DXWatchlistUpdateActionProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXWatchlistUpdateActionProvider *DXWatchlistUpdateActionProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXWatchlistUpdateActionProvider, INSTANCE, DXWatchlistUpdateActionProvider *)

FOUNDATION_EXPORT void DXWatchlistUpdateActionProvider_init(DXWatchlistUpdateActionProvider *self);

FOUNDATION_EXPORT DXWatchlistUpdateActionProvider *new_DXWatchlistUpdateActionProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXWatchlistUpdateActionProvider *create_DXWatchlistUpdateActionProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXWatchlistUpdateActionProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiWatchlistWatchlistUpdateActionProvider DXWatchlistUpdateActionProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistUpdateActionProvider")
