
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistContentProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistContentProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistContentProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistContentProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistContentProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXWatchlistContentProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistContentProvider || defined(INCLUDE_DXWatchlistContentProvider))
#define DXWatchlistContentProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXWatchlistContentProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXWatchlistContentProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXWatchlistContentProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXWatchlistContentProvider)

inline DXWatchlistContentProvider *DXWatchlistContentProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXWatchlistContentProvider *DXWatchlistContentProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXWatchlistContentProvider, INSTANCE, DXWatchlistContentProvider *)

FOUNDATION_EXPORT void DXWatchlistContentProvider_init(DXWatchlistContentProvider *self);

FOUNDATION_EXPORT DXWatchlistContentProvider *new_DXWatchlistContentProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXWatchlistContentProvider *create_DXWatchlistContentProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXWatchlistContentProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiWatchlistWatchlistContentProvider DXWatchlistContentProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistContentProvider")
