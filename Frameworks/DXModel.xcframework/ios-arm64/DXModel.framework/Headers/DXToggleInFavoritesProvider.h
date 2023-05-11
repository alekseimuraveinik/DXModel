
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistToggleInFavoritesProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistToggleInFavoritesProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistToggleInFavoritesProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistToggleInFavoritesProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistToggleInFavoritesProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXToggleInFavoritesProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistToggleInFavoritesProvider || defined(INCLUDE_DXToggleInFavoritesProvider))
#define DXToggleInFavoritesProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXToggleInFavoritesProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXToggleInFavoritesProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXToggleInFavoritesProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXToggleInFavoritesProvider)

inline DXToggleInFavoritesProvider *DXToggleInFavoritesProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXToggleInFavoritesProvider *DXToggleInFavoritesProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXToggleInFavoritesProvider, INSTANCE, DXToggleInFavoritesProvider *)

FOUNDATION_EXPORT void DXToggleInFavoritesProvider_init(DXToggleInFavoritesProvider *self);

FOUNDATION_EXPORT DXToggleInFavoritesProvider *new_DXToggleInFavoritesProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXToggleInFavoritesProvider *create_DXToggleInFavoritesProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXToggleInFavoritesProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiWatchlistToggleInFavoritesProvider DXToggleInFavoritesProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistToggleInFavoritesProvider")
