
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentInstrumentProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentInstrumentProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXInstrumentProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentProvider || defined(INCLUDE_DXInstrumentProvider))
#define DXInstrumentProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXInstrumentProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXInstrumentProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXInstrumentProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXInstrumentProvider)

inline DXInstrumentProvider *DXInstrumentProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentProvider *DXInstrumentProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentProvider, INSTANCE, DXInstrumentProvider *)

FOUNDATION_EXPORT void DXInstrumentProvider_init(DXInstrumentProvider *self);

FOUNDATION_EXPORT DXInstrumentProvider *new_DXInstrumentProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXInstrumentProvider *create_DXInstrumentProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXInstrumentProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiInstrumentInstrumentProvider DXInstrumentProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentProvider")
