
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderCancelActionProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorOrderCancelActionProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderCancelActionProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderCancelActionProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorOrderCancelActionProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXOrderCancelActionProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderCancelActionProvider || defined(INCLUDE_DXOrderCancelActionProvider))
#define DXOrderCancelActionProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXOrderCancelActionProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXOrderCancelActionProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXOrderCancelActionProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXOrderCancelActionProvider)

inline DXOrderCancelActionProvider *DXOrderCancelActionProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderCancelActionProvider *DXOrderCancelActionProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderCancelActionProvider, INSTANCE, DXOrderCancelActionProvider *)

FOUNDATION_EXPORT void DXOrderCancelActionProvider_init(DXOrderCancelActionProvider *self);

FOUNDATION_EXPORT DXOrderCancelActionProvider *new_DXOrderCancelActionProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOrderCancelActionProvider *create_DXOrderCancelActionProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXOrderCancelActionProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorOrderCancelActionProvider DXOrderCancelActionProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderCancelActionProvider")
