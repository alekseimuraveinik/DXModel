
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionHistoryPositionHistoryProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiPositionHistoryPositionHistoryProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionHistoryPositionHistoryProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionHistoryPositionHistoryProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiPositionHistoryPositionHistoryProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXPositionHistoryProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionHistoryPositionHistoryProvider || defined(INCLUDE_DXPositionHistoryProvider))
#define DXPositionHistoryProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXPositionHistoryProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXPositionHistoryProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXPositionHistoryProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXPositionHistoryProvider)

inline DXPositionHistoryProvider *DXPositionHistoryProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXPositionHistoryProvider *DXPositionHistoryProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXPositionHistoryProvider, INSTANCE, DXPositionHistoryProvider *)

FOUNDATION_EXPORT void DXPositionHistoryProvider_init(DXPositionHistoryProvider *self);

FOUNDATION_EXPORT DXPositionHistoryProvider *new_DXPositionHistoryProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXPositionHistoryProvider *create_DXPositionHistoryProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXPositionHistoryProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiPositionHistoryPositionHistoryProvider DXPositionHistoryProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionHistoryPositionHistoryProvider")
