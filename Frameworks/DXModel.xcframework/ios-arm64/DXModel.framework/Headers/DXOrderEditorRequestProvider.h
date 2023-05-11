
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderEditorRequestProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorOrderEditorRequestProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderEditorRequestProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderEditorRequestProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorOrderEditorRequestProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXOrderEditorRequestProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderEditorRequestProvider || defined(INCLUDE_DXOrderEditorRequestProvider))
#define DXOrderEditorRequestProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXOrderEditorRequestProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXOrderEditorRequestProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXOrderEditorRequestProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXOrderEditorRequestProvider)

inline DXOrderEditorRequestProvider *DXOrderEditorRequestProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderEditorRequestProvider *DXOrderEditorRequestProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderEditorRequestProvider, INSTANCE, DXOrderEditorRequestProvider *)

FOUNDATION_EXPORT void DXOrderEditorRequestProvider_init(DXOrderEditorRequestProvider *self);

FOUNDATION_EXPORT DXOrderEditorRequestProvider *new_DXOrderEditorRequestProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOrderEditorRequestProvider *create_DXOrderEditorRequestProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXOrderEditorRequestProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorOrderEditorRequestProvider DXOrderEditorRequestProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderEditorRequestProvider")
