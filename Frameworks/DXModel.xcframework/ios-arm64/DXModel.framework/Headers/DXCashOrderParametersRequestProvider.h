
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorCashCashOrderParametersRequestProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorCashCashOrderParametersRequestProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorCashCashOrderParametersRequestProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorCashCashOrderParametersRequestProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorCashCashOrderParametersRequestProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXCashOrderParametersRequestProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorCashCashOrderParametersRequestProvider || defined(INCLUDE_DXCashOrderParametersRequestProvider))
#define DXCashOrderParametersRequestProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXCashOrderParametersRequestProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXCashOrderParametersRequestProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXCashOrderParametersRequestProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXCashOrderParametersRequestProvider)

inline DXCashOrderParametersRequestProvider *DXCashOrderParametersRequestProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXCashOrderParametersRequestProvider *DXCashOrderParametersRequestProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXCashOrderParametersRequestProvider, INSTANCE, DXCashOrderParametersRequestProvider *)

FOUNDATION_EXPORT void DXCashOrderParametersRequestProvider_init(DXCashOrderParametersRequestProvider *self);

FOUNDATION_EXPORT DXCashOrderParametersRequestProvider *new_DXCashOrderParametersRequestProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXCashOrderParametersRequestProvider *create_DXCashOrderParametersRequestProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXCashOrderParametersRequestProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorCashCashOrderParametersRequestProvider DXCashOrderParametersRequestProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorCashCashOrderParametersRequestProvider")
