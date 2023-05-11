
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSignupSignUpActionProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiSignupSignUpActionProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSignupSignUpActionProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSignupSignUpActionProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiSignupSignUpActionProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXSignUpActionProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSignupSignUpActionProvider || defined(INCLUDE_DXSignUpActionProvider))
#define DXSignUpActionProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXSignUpActionProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXSignUpActionProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXSignUpActionProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXSignUpActionProvider)

inline DXSignUpActionProvider *DXSignUpActionProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXSignUpActionProvider *DXSignUpActionProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXSignUpActionProvider, INSTANCE, DXSignUpActionProvider *)

FOUNDATION_EXPORT void DXSignUpActionProvider_init(DXSignUpActionProvider *self);

FOUNDATION_EXPORT DXSignUpActionProvider *new_DXSignUpActionProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXSignUpActionProvider *create_DXSignUpActionProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXSignUpActionProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiSignupSignUpActionProvider DXSignUpActionProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSignupSignUpActionProvider")
