
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderIssueDetailsTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorOrderIssueDetailsTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderIssueDetailsTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderIssueDetailsTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorOrderIssueDetailsTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXOrderIssueDetailsTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderIssueDetailsTO || defined(INCLUDE_DXOrderIssueDetailsTO))
#define DXOrderIssueDetailsTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXOrderIssueDetailsTO : PSBaseTransferObject
@property (readonly, class, strong) DXOrderIssueDetailsTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXOrderIssueDetailsTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXOrderIssueDetailsTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXOrderIssueDetailsTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSString *)getIssuedOrderId;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setIssuedOrderIdWithNSString:(NSString *)issuedOrderId;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXOrderIssueDetailsTO)

inline DXOrderIssueDetailsTO *DXOrderIssueDetailsTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderIssueDetailsTO *DXOrderIssueDetailsTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderIssueDetailsTO, EMPTY, DXOrderIssueDetailsTO *)

FOUNDATION_EXPORT void DXOrderIssueDetailsTO_init(DXOrderIssueDetailsTO *self);

FOUNDATION_EXPORT DXOrderIssueDetailsTO *new_DXOrderIssueDetailsTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOrderIssueDetailsTO *create_DXOrderIssueDetailsTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXOrderIssueDetailsTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorOrderIssueDetailsTO DXOrderIssueDetailsTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderIssueDetailsTO")
