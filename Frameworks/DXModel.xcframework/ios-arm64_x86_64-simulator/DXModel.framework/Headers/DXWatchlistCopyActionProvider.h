
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistCopyActionProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistCopyActionProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistCopyActionProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistCopyActionProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistCopyActionProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXWatchlistCopyActionProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistCopyActionProvider || defined(INCLUDE_DXWatchlistCopyActionProvider))
#define DXWatchlistCopyActionProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXWatchlistCopyActionProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXWatchlistCopyActionProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXWatchlistCopyActionProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXWatchlistCopyActionProvider)

inline DXWatchlistCopyActionProvider *DXWatchlistCopyActionProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXWatchlistCopyActionProvider *DXWatchlistCopyActionProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXWatchlistCopyActionProvider, INSTANCE, DXWatchlistCopyActionProvider *)

FOUNDATION_EXPORT void DXWatchlistCopyActionProvider_init(DXWatchlistCopyActionProvider *self);

FOUNDATION_EXPORT DXWatchlistCopyActionProvider *new_DXWatchlistCopyActionProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXWatchlistCopyActionProvider *create_DXWatchlistCopyActionProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXWatchlistCopyActionProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiWatchlistWatchlistCopyActionProvider DXWatchlistCopyActionProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistCopyActionProvider")
