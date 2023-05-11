
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderEditorRequest")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorOrderEditorRequest
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderEditorRequest 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderEditorRequest 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorOrderEditorRequest

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXOrderEditorRequest_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderEditorRequest || defined(INCLUDE_DXOrderEditorRequest))
#define DXOrderEditorRequest_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXOrderEditorActionEnum;
@class DXOrderEditorContextTO;
@class DXOrderEditorParametersTO;
@class DXOrderTemplateTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXOrderEditorRequest : PSBaseTransferObject
@property (readonly, class, strong) DXOrderEditorRequest *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXOrderEditorRequest *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXOrderEditorRequest *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXOrderEditorRequest *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXOrderEditorActionEnum *)getAction;

- (DXOrderEditorContextTO *)getContext;

- (DXOrderEditorParametersTO *)getParameters;

- (DXOrderTemplateTO *)getTemplate;

- (NSUInteger)hash;

- (void)makeChangeValidationParametersRequestWithDXOrderEditorContextTO:(DXOrderEditorContextTO *)context
                                                  withDXOrderTemplateTO:(DXOrderTemplateTO *)template_
                                          withDXOrderEditorParametersTO:(DXOrderEditorParametersTO *)params;

- (void)makeIssueRequestWithDXOrderEditorContextTO:(DXOrderEditorContextTO *)context
                             withDXOrderTemplateTO:(DXOrderTemplateTO *)template_
                     withDXOrderEditorParametersTO:(DXOrderEditorParametersTO *)params;

- (jboolean)makeReadOnly;

- (void)makeValidationRequestWithDXOrderEditorContextTO:(DXOrderEditorContextTO *)context
                                  withDXOrderTemplateTO:(DXOrderTemplateTO *)template_
                          withDXOrderEditorParametersTO:(DXOrderEditorParametersTO *)params;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setActionWithDXOrderEditorActionEnum:(DXOrderEditorActionEnum *)action;

- (void)setContextWithDXOrderEditorContextTO:(DXOrderEditorContextTO *)context;

- (void)setParametersWithDXOrderEditorParametersTO:(DXOrderEditorParametersTO *)parameters;

- (void)setTemplateWithDXOrderTemplateTO:(DXOrderTemplateTO *)template_;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXOrderEditorRequest)

inline DXOrderEditorRequest *DXOrderEditorRequest_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderEditorRequest *DXOrderEditorRequest_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderEditorRequest, EMPTY, DXOrderEditorRequest *)

FOUNDATION_EXPORT void DXOrderEditorRequest_init(DXOrderEditorRequest *self);

FOUNDATION_EXPORT DXOrderEditorRequest *new_DXOrderEditorRequest_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOrderEditorRequest *create_DXOrderEditorRequest_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXOrderEditorRequest)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorOrderEditorRequest DXOrderEditorRequest;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderEditorRequest")
