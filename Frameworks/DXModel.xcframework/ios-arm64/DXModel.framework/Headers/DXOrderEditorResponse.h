
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderEditorResponse")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorOrderEditorResponse
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderEditorResponse 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderEditorResponse 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorOrderEditorResponse

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXOrderEditorResponse_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderEditorResponse || defined(INCLUDE_DXOrderEditorResponse))
#define DXOrderEditorResponse_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXOrderIssueDetailsTO;
@class DXOrderValidationDetailsTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSErrorTO;
@protocol DXOrderEditorResponseVisitor;
@protocol PSTransferObject;

@interface DXOrderEditorResponse : PSBaseTransferObject
@property (readonly, class, strong) DXOrderEditorResponse *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXOrderEditorResponse *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXOrderEditorResponse *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXOrderEditorResponse *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSErrorTO *)getError;

- (DXOrderIssueDetailsTO *)getIssueDetails;

- (DXOrderValidationDetailsTO *)getValidationDetails;

- (NSUInteger)hash;

- (void)makeErrorResponseWithPSErrorTO:(PSErrorTO *)error;

- (void)makeIssueResponseWithDXOrderIssueDetailsTO:(DXOrderIssueDetailsTO *)issueDetails;

- (jboolean)makeReadOnly;

- (void)makeValidationResponseWithDXOrderValidationDetailsTO:(DXOrderValidationDetailsTO *)validationDetails;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setErrorWithPSErrorTO:(PSErrorTO *)error;

- (void)setIssueDetailsWithDXOrderIssueDetailsTO:(DXOrderIssueDetailsTO *)issueDetails;

- (void)setValidationDetailsWithDXOrderValidationDetailsTO:(DXOrderValidationDetailsTO *)validationDetails;

- (NSString *)description;

- (void)visitWithWithDXOrderEditorResponseVisitor:(id<DXOrderEditorResponseVisitor>)visitor;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXOrderEditorResponse)

inline DXOrderEditorResponse *DXOrderEditorResponse_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderEditorResponse *DXOrderEditorResponse_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderEditorResponse, EMPTY, DXOrderEditorResponse *)

FOUNDATION_EXPORT void DXOrderEditorResponse_init(DXOrderEditorResponse *self);

FOUNDATION_EXPORT DXOrderEditorResponse *new_DXOrderEditorResponse_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOrderEditorResponse *create_DXOrderEditorResponse_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXOrderEditorResponse)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorOrderEditorResponse DXOrderEditorResponse;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderEditorResponse")
