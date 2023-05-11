
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderHistoryOrderHistoryProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiOrderHistoryOrderHistoryProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderHistoryOrderHistoryProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderHistoryOrderHistoryProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiOrderHistoryOrderHistoryProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXOrderHistoryProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderHistoryOrderHistoryProvider || defined(INCLUDE_DXOrderHistoryProvider))
#define DXOrderHistoryProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXOrderHistoryProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXOrderHistoryProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXOrderHistoryProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXOrderHistoryProvider)

inline DXOrderHistoryProvider *DXOrderHistoryProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderHistoryProvider *DXOrderHistoryProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderHistoryProvider, INSTANCE, DXOrderHistoryProvider *)

FOUNDATION_EXPORT void DXOrderHistoryProvider_init(DXOrderHistoryProvider *self);

FOUNDATION_EXPORT DXOrderHistoryProvider *new_DXOrderHistoryProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOrderHistoryProvider *create_DXOrderHistoryProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXOrderHistoryProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiOrderHistoryOrderHistoryProvider DXOrderHistoryProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderHistoryOrderHistoryProvider")
