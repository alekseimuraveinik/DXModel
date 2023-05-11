
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistCreateActionProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistCreateActionProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistCreateActionProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistCreateActionProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistCreateActionProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXWatchlistCreateActionProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistCreateActionProvider || defined(INCLUDE_DXWatchlistCreateActionProvider))
#define DXWatchlistCreateActionProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXWatchlistCreateActionProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXWatchlistCreateActionProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXWatchlistCreateActionProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXWatchlistCreateActionProvider)

inline DXWatchlistCreateActionProvider *DXWatchlistCreateActionProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXWatchlistCreateActionProvider *DXWatchlistCreateActionProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXWatchlistCreateActionProvider, INSTANCE, DXWatchlistCreateActionProvider *)

FOUNDATION_EXPORT void DXWatchlistCreateActionProvider_init(DXWatchlistCreateActionProvider *self);

FOUNDATION_EXPORT DXWatchlistCreateActionProvider *new_DXWatchlistCreateActionProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXWatchlistCreateActionProvider *create_DXWatchlistCreateActionProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXWatchlistCreateActionProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiWatchlistWatchlistCreateActionProvider DXWatchlistCreateActionProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistCreateActionProvider")
