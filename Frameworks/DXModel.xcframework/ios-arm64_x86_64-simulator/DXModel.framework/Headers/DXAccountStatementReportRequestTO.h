
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountStatementReportRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAccountAccountStatementReportRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountStatementReportRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountStatementReportRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAccountAccountStatementReportRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAccountStatementReportRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountStatementReportRequestTO || defined(INCLUDE_DXAccountStatementReportRequestTO))
#define DXAccountStatementReportRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXAccountStatementReportRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXAccountStatementReportRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXAccountStatementReportRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithInt:(jint)accountId
                             withLong:(jlong)timeFrom;

- (instancetype __nonnull)initWithInt:(jint)accountId
                             withLong:(jlong)timeFrom
                             withLong:(jlong)timeTo;

- (DXAccountStatementReportRequestTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXAccountStatementReportRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (jint)getAccountId;

- (jlong)getTimeFrom;

- (jlong)getTimeTo;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setAccountIdWithInt:(jint)accountId;

- (void)setTimeFromWithLong:(jlong)timeFrom;

- (void)setTimeToWithLong:(jlong)timeTo;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXAccountStatementReportRequestTO)

inline DXAccountStatementReportRequestTO *DXAccountStatementReportRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAccountStatementReportRequestTO *DXAccountStatementReportRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAccountStatementReportRequestTO, EMPTY, DXAccountStatementReportRequestTO *)

FOUNDATION_EXPORT void DXAccountStatementReportRequestTO_init(DXAccountStatementReportRequestTO *self);

FOUNDATION_EXPORT DXAccountStatementReportRequestTO *new_DXAccountStatementReportRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAccountStatementReportRequestTO *create_DXAccountStatementReportRequestTO_init(void);

FOUNDATION_EXPORT void DXAccountStatementReportRequestTO_initWithInt_withLong_(DXAccountStatementReportRequestTO *self, jint accountId, jlong timeFrom);

FOUNDATION_EXPORT DXAccountStatementReportRequestTO *new_DXAccountStatementReportRequestTO_initWithInt_withLong_(jint accountId, jlong timeFrom) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAccountStatementReportRequestTO *create_DXAccountStatementReportRequestTO_initWithInt_withLong_(jint accountId, jlong timeFrom);

FOUNDATION_EXPORT void DXAccountStatementReportRequestTO_initWithInt_withLong_withLong_(DXAccountStatementReportRequestTO *self, jint accountId, jlong timeFrom, jlong timeTo);

FOUNDATION_EXPORT DXAccountStatementReportRequestTO *new_DXAccountStatementReportRequestTO_initWithInt_withLong_withLong_(jint accountId, jlong timeFrom, jlong timeTo) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAccountStatementReportRequestTO *create_DXAccountStatementReportRequestTO_initWithInt_withLong_withLong_(jint accountId, jlong timeFrom, jlong timeTo);

J2OBJC_TYPE_LITERAL_HEADER(DXAccountStatementReportRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiAccountAccountStatementReportRequestTO DXAccountStatementReportRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountStatementReportRequestTO")
