
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistRenameActionProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistRenameActionProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistRenameActionProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistRenameActionProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiWatchlistWatchlistRenameActionProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXWatchlistRenameActionProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistRenameActionProvider || defined(INCLUDE_DXWatchlistRenameActionProvider))
#define DXWatchlistRenameActionProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXWatchlistRenameActionProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXWatchlistRenameActionProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXWatchlistRenameActionProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXWatchlistRenameActionProvider)

inline DXWatchlistRenameActionProvider *DXWatchlistRenameActionProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXWatchlistRenameActionProvider *DXWatchlistRenameActionProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXWatchlistRenameActionProvider, INSTANCE, DXWatchlistRenameActionProvider *)

FOUNDATION_EXPORT void DXWatchlistRenameActionProvider_init(DXWatchlistRenameActionProvider *self);

FOUNDATION_EXPORT DXWatchlistRenameActionProvider *new_DXWatchlistRenameActionProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXWatchlistRenameActionProvider *create_DXWatchlistRenameActionProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXWatchlistRenameActionProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiWatchlistWatchlistRenameActionProvider DXWatchlistRenameActionProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiWatchlistWatchlistRenameActionProvider")
