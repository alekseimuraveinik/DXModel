
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistsProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistsProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistsProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistsProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistsProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXWatchlistsProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistsProvider || defined(INCLUDE_DXWatchlistsProvider))
#define DXWatchlistsProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXWatchlistsProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXWatchlistsProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXWatchlistsProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXWatchlistsProvider)

inline DXWatchlistsProvider *DXWatchlistsProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXWatchlistsProvider *DXWatchlistsProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXWatchlistsProvider, INSTANCE, DXWatchlistsProvider *)

FOUNDATION_EXPORT void DXWatchlistsProvider_init(DXWatchlistsProvider *self);

FOUNDATION_EXPORT DXWatchlistsProvider *new_DXWatchlistsProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXWatchlistsProvider *create_DXWatchlistsProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXWatchlistsProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiWatchlistWatchlistsProvider DXWatchlistsProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistsProvider")
