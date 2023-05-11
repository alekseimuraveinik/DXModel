
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsEventProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEventsEventProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsEventProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsEventProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEventsEventProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXEventProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsEventProvider || defined(INCLUDE_DXEventProvider))
#define DXEventProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXEventProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXEventProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXEventProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXEventProvider)

inline DXEventProvider *DXEventProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXEventProvider *DXEventProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXEventProvider, INSTANCE, DXEventProvider *)

FOUNDATION_EXPORT void DXEventProvider_init(DXEventProvider *self);

FOUNDATION_EXPORT DXEventProvider *new_DXEventProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXEventProvider *create_DXEventProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXEventProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiEventsEventProvider DXEventProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsEventProvider")
