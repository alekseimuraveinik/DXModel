
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistDeleteActionProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistDeleteActionProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistDeleteActionProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistDeleteActionProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistDeleteActionProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXWatchlistDeleteActionProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistDeleteActionProvider || defined(INCLUDE_DXWatchlistDeleteActionProvider))
#define DXWatchlistDeleteActionProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXWatchlistDeleteActionProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXWatchlistDeleteActionProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXWatchlistDeleteActionProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXWatchlistDeleteActionProvider)

inline DXWatchlistDeleteActionProvider *DXWatchlistDeleteActionProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXWatchlistDeleteActionProvider *DXWatchlistDeleteActionProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXWatchlistDeleteActionProvider, INSTANCE, DXWatchlistDeleteActionProvider *)

FOUNDATION_EXPORT void DXWatchlistDeleteActionProvider_init(DXWatchlistDeleteActionProvider *self);

FOUNDATION_EXPORT DXWatchlistDeleteActionProvider *new_DXWatchlistDeleteActionProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXWatchlistDeleteActionProvider *create_DXWatchlistDeleteActionProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXWatchlistDeleteActionProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiWatchlistWatchlistDeleteActionProvider DXWatchlistDeleteActionProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistDeleteActionProvider")
