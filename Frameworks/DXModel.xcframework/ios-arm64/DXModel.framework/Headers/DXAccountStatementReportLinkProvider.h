
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountStatementReportLinkProvider")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAccountAccountStatementReportLinkProvider
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountStatementReportLinkProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountStatementReportLinkProvider 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAccountAccountStatementReportLinkProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAccountStatementReportLinkProvider_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountStatementReportLinkProvider || defined(INCLUDE_DXAccountStatementReportLinkProvider))
#define DXAccountStatementReportLinkProvider_

#define RESTRICT_ComDevexpertsPipestoneCommonApiTypeProvider 1
#define INCLUDE_PSTypeProvider 1
#include "PSTypeProvider.h"

@interface DXAccountStatementReportLinkProvider : NSObject < PSTypeProvider >
@property (readonly, class, strong) DXAccountStatementReportLinkProvider *INSTANCE NS_SWIFT_NAME(INSTANCE);

+ (DXAccountStatementReportLinkProvider *)INSTANCE;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getId;

@end

J2OBJC_STATIC_INIT(DXAccountStatementReportLinkProvider)

inline DXAccountStatementReportLinkProvider *DXAccountStatementReportLinkProvider_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAccountStatementReportLinkProvider *DXAccountStatementReportLinkProvider_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAccountStatementReportLinkProvider, INSTANCE, DXAccountStatementReportLinkProvider *)

FOUNDATION_EXPORT void DXAccountStatementReportLinkProvider_init(DXAccountStatementReportLinkProvider *self);

FOUNDATION_EXPORT DXAccountStatementReportLinkProvider *new_DXAccountStatementReportLinkProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAccountStatementReportLinkProvider *create_DXAccountStatementReportLinkProvider_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXAccountStatementReportLinkProvider)

@compatibility_alias ComDevexpertsMobileDxplatformApiAccountAccountStatementReportLinkProvider DXAccountStatementReportLinkProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountStatementReportLinkProvider")
