
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiTradeTradeHistoryProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiTradeTradeHistoryProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiTradeTradeHistoryProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiTradeTradeHistoryProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiTradeTradeHistoryProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXTradeHistoryProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiTradeTradeHistoryProvider || defined(INCLUDE_DXTradeHistoryProvider))
#define DXTradeHistoryProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXTradeHistoryProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXTradeHistoryProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXTradeHistoryProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXTradeHistoryProvider)

inline DXTradeHistoryProvider *DXTradeHistoryProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXTradeHistoryProvider *DXTradeHistoryProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXTradeHistoryProvider, INSTANCE, DXTradeHistoryProvider *)

FOUNDATION_EXPORT void DXTradeHistoryProvider_init(DXTradeHistoryProvider *self);

FOUNDATION_EXPORT DXTradeHistoryProvider *new_DXTradeHistoryProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXTradeHistoryProvider *create_DXTradeHistoryProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXTradeHistoryProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiTradeTradeHistoryProvider DXTradeHistoryProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiTradeTradeHistoryProvider")
