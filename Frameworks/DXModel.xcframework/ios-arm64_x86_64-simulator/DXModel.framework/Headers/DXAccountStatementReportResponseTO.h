
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountStatementReportResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAccountAccountStatementReportResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountStatementReportResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountStatementReportResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAccountAccountStatementReportResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAccountStatementReportResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountStatementReportResponseTO || defined(INCLUDE_DXAccountStatementReportResponseTO))
#define DXAccountStatementReportResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSErrorTO;
@protocol PSTransferObject;

@interface DXAccountStatementReportResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXAccountStatementReportResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXAccountStatementReportResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXAccountStatementReportResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXAccountStatementReportResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSErrorTO *)getError;

- (NSString *)getReportUrl;

- (NSUInteger)hash;

- (jboolean)isSuccessful;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setErrorWithPSErrorTO:(PSErrorTO *)error;

- (void)setReportUrlWithNSString:(NSString *)reportUrl;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXAccountStatementReportResponseTO)

inline DXAccountStatementReportResponseTO *DXAccountStatementReportResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAccountStatementReportResponseTO *DXAccountStatementReportResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAccountStatementReportResponseTO, EMPTY, DXAccountStatementReportResponseTO *)

FOUNDATION_EXPORT void DXAccountStatementReportResponseTO_init(DXAccountStatementReportResponseTO *self);

FOUNDATION_EXPORT DXAccountStatementReportResponseTO *new_DXAccountStatementReportResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAccountStatementReportResponseTO *create_DXAccountStatementReportResponseTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXAccountStatementReportResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiAccountAccountStatementReportResponseTO DXAccountStatementReportResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountStatementReportResponseTO")
