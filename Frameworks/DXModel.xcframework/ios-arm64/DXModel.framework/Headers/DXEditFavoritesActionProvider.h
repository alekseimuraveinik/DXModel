
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistEditFavoritesActionProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistEditFavoritesActionProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistEditFavoritesActionProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistEditFavoritesActionProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistEditFavoritesActionProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXEditFavoritesActionProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistEditFavoritesActionProvider || defined(INCLUDE_DXEditFavoritesActionProvider))
#define DXEditFavoritesActionProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXEditFavoritesActionProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXEditFavoritesActionProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXEditFavoritesActionProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXEditFavoritesActionProvider)

inline DXEditFavoritesActionProvider *DXEditFavoritesActionProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXEditFavoritesActionProvider *DXEditFavoritesActionProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXEditFavoritesActionProvider, INSTANCE, DXEditFavoritesActionProvider *)

FOUNDATION_EXPORT void DXEditFavoritesActionProvider_init(DXEditFavoritesActionProvider *self);

FOUNDATION_EXPORT DXEditFavoritesActionProvider *new_DXEditFavoritesActionProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXEditFavoritesActionProvider *create_DXEditFavoritesActionProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXEditFavoritesActionProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiWatchlistEditFavoritesActionProvider DXEditFavoritesActionProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistEditFavoritesActionProvider")
